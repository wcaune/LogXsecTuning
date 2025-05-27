////////////////////////////////////////////////////////////////////////
// Class:       GENIEValidation
// Plugin Type: analyzer (art v2_13_00)
// File:        GENIEValidation_module.cc
//
// Generated on Mon May 19 2025 by Jeremy, Jeremy and Biao
// from cetlib version v3_06_01.
////////////////////////////////////////////////////////////////////////

#include "art/Framework/Core/EDAnalyzer.h"
#include "art/Framework/Core/ModuleMacros.h"
#include "art/Framework/Principal/Event.h"
#include "art/Framework/Principal/Handle.h"
#include "art/Framework/Principal/Run.h"
#include "art/Framework/Principal/SubRun.h"
#include "canvas/Utilities/InputTag.h"
#include "fhiclcpp/ParameterSet.h"
#include "messagefacility/MessageLogger/MessageLogger.h"
#include "art_root_io/TFileService.h"

#include "GENIE/RwFramework/GReWeight.h"
#include "GENIE/RwCalculators/GReWeightINuke.h"
#include "nugen/EventGeneratorBase/GENIE/GENIE2ART.h"

#include "nusimdata/SimulationBase/GTruth.h"
#include "nusimdata/SimulationBase/MCTruth.h"
#include "nusimdata/SimulationBase/MCNeutrino.h"
#include "nusimdata/SimulationBase/MCParticle.h"
#include "nusimdata/SimulationBase/MCFlux.h"
#include "Simulation/Particle.h"
#include "SummaryData/SpillData.h"
#include "Geometry/Geometry.h"

#include "TH1.h"
#include "TH2.h"
#include "TTree.h"
#include "TLorentzVector.h"

#include <vector>
#include <cmath>

using std::distance;
using std::find_if;
using std::function;
using std::string;
using std::vector;
using art::Event;
using art::Handle;
using simb::GTruth;
using simb::MCNeutrino;
using simb::MCParticle;
using simb::MCTruth;
using simb::MCFlux;
using sumdata::SpillData;

namespace valid {

  namespace { // anonymous namespace

    struct xyz { double x; double y; double z; };

    struct category {
      int id;
      string name;
    };

    const vector<category> kModes {
      { 0, "QE"           },
      { 1, "Res"          },
      { 2, "DIS"          },
      { 3, "Coh"          },
      { 4, "Coh elastic"  },
      { 5, "e scatter"    },
      { 10, "MEC"         },
      { 11, "Diff"  }
    };

    const vector<category> kFlavours {
      {  12, "nue"     },
      { -12, "nuebar"  },
      {  14, "numu"    },
      { -14, "numubar" }
    };

    const vector<category> kCurrents {
      { 0, "CC" },
      { 1, "NC" }
    };

    const vector<category> kAncestors {
      { 1,  "Klong" },
      { 5,  "K+-"   },
      { 11, "Muon"  },
      { 13, "pion"  }
    };

    size_t GetIdx(string name, int id, vector<category> opts)
    {
      size_t idx = distance(opts.begin(), find_if(opts.begin(), opts.end(),
        [&](const auto& item) { return item.id == id; })
      );

      if (idx == opts.size())
        throw art::Exception(art::errors::LogicError)
          << "unrecognised " << name << " category: " << id << std::endl;

      return idx;
    } // function GetIdx

  } // anonymous namespace

  class GENIEValidation : public art::EDAnalyzer {
  public:
    explicit GENIEValidation(fhicl::ParameterSet const& p);

    GENIEValidation(GENIEValidation const&) = delete;
    GENIEValidation(GENIEValidation &&) = delete;
    GENIEValidation & operator = (GENIEValidation const&) = delete;
    GENIEValidation & operator = (GENIEValidation &&) = delete;

    void beginRun(art::Run const&) override;
    void beginJob() override;
    void analyze(Event const& e) override;

  private:

    class NuPlots {
    public:
      NuPlots(function<bool(MCNeutrino const& nu)> f,
        art::TFileDirectory dir, xyz const& lo, xyz const& hi)
      {
        func = f;
        pot = dir.make<TH1F>("pot", ";;Protons on Target", 1, 0, 1);
        pot->GetXaxis()->SetBinLabel(1, "POT");
        horn = dir.make<TH1F>("horn", ";;Horn current", 3, 0, 3);
        horn->GetXaxis()->SetBinLabel(1, "RHC");
        horn->GetXaxis()->SetBinLabel(2, "0HC");
        horn->GetXaxis()->SetBinLabel(3, "FHC");
        mode = dir.make<TH1F>("mode", ";Interaction mode;Events",kModes.size(), 0, kModes.size());
        for (size_t i = 0; i < kModes.size(); ++i) mode->GetXaxis()->SetBinLabel(i+1, kModes.at(i).name.c_str());
        flav = dir.make<TH1F>("flav", ";Neutrino flavour;Events",kFlavours.size(), 0, kFlavours.size());
        for (size_t i = 0; i < kFlavours.size(); ++i) flav->GetXaxis()->SetBinLabel(i+1, kFlavours.at(i).name.c_str());
        current = dir.make<TH1F>("current", ";;Events", 2, 0, 2);
        current->GetXaxis()->SetBinLabel(1, "CC");
        current->GetXaxis()->SetBinLabel(2, "NC");
        resNum = dir.make<TH1F>("resNum", ";Resonance number;Events", 20, 0, 20);
        Enu = dir.make<TH1F>("Enu", ";Energy [GeV];Events", 50, 0, 10);
        Elep = dir.make<TH1F>("Elep", ";Lepton Energy [GeV];Events", 50, 0., 10.);
        Px = dir.make<TH1F>("Px", ";Momentum x fraction;Events", 50, -1, 1);
        Py = dir.make<TH1F>("Py", ";Momentum y fraction;Events", 50, -1, 1);
        Pz = dir.make<TH1F>("Pz", ";Momentum z fraction;Events", 50, -1, 1);
        Pt = dir.make<TH1F>("Pt", ";Transverse momentum fraction;Events", 50, 0, 1);
        Vx = dir.make<TH1F>("Vx", ";Vertex X [cm];Events", 50, lo.x, hi.x);
        Vy = dir.make<TH1F>("Vy", ";Vertex Y [cm];Events", 50, lo.y, hi.y);
        Vz = dir.make<TH1F>("Vz", ";Vertex Z [cm];Events", 50, lo.z, hi.z);
        Vxy = dir.make<TH2F>("Vxy", ";Vertex X [cm];Vertex Y [cm]", 50, lo.x, hi.x, 50, lo.y, hi.y);
        Vyz = dir.make<TH2F>("Vyz", ";Vertex Y [cm];Vertex Z [cm]", 50, lo.y, hi.y, 50, lo.z, hi.z);
        Vzx = dir.make<TH2F>("Vxz", ";Vertex Z [cm];Vertex X [cm]", 50, lo.z, hi.z, 50, lo.x, hi.x);
        q0 = dir.make<TH1F>("q0", ";q0;Events", 50, 0., 10.);
        q3 = dir.make<TH1F>("q3", ";q3;Events", 50, 0., 10.);
        W = dir.make<TH1F>("W", ";W [GeV];Events", 50, 0., 5.);
        x = dir.make<TH1F>("x", ";Bjorken x;Events", 50, 0., 1.);
        y = dir.make<TH1F>("y", ";Bjorken y;Events", 50, 0., 1.);
        Qsq = dir.make<TH1F>("Qsq", ";Q^{2};Events", 50, 0., 5.);
        Woff = dir.make<TH1F>("Woff", ";W (off-shell);Events", 50, 0., 5.);
        nProtonPreFSI = dir.make<TH1F>("nProtonPreFSI", ";# protons (pre-FSI);Events", 20, 0, 20);
        nNeutronPreFSI = dir.make<TH1F>("nNeutronPreFSI", ";# neutrons (pre-FSI);Events", 20, 0, 20);
        nPi0PreFSI = dir.make<TH1F>("nPi0PreFSI", ";# #pi^{0} (pre-FSI);Events", 10, 0, 10);
        nPiPlusPreFSI = dir.make<TH1F>("nPiPlusPreFSI", ";# #pi^{+} (pre-FSI);Events", 10, 0, 10);
        nPiMinusPreFSI = dir.make<TH1F>("nPiMinusPreFSI", ";# #pi^{-} (pre-FSI);Events", 10, 0, 10);
        nProton = dir.make<TH1F>("nProton", ";# protons;Events", 20, 0, 20);
        nNeutron = dir.make<TH1F>("nNeutron", ";# neutrons;Events", 20, 0, 20);
        nPi0 = dir.make<TH1F>("nPi0", ";# \\pi^{0};Events", 10, 0, 10);
        nPiPlus = dir.make<TH1F>("nPiPlus", ";# \\pi^{+};Events", 10, 0, 10);
        nPiMinus = dir.make<TH1F>("nPiMinus", ";# \\pi^{-};Events", 10, 0, 10);
	
      } // constructor

      void FillSpill(SpillData const& sp)
      {
        pot->Fill(0.5, sp.spillpot);
        int h = 2;
        if (sp.isRHC) h = 0;
        if (sp.is0HC) h = 1;
        horn->Fill(h);
      }

      void Fill(MCTruth const& mct, GTruth const& gt)
      {
        MCNeutrino const& nu = mct.GetNeutrino();
        if (!mct.NeutrinoSet() || !func(nu)) return;
        MCParticle const& p = nu.Nu();

        mode->Fill(GetIdx("mode", nu.Mode(), kModes));
        flav->Fill(GetIdx("flavour", p.PdgCode(), kFlavours));
        current->Fill(nu.CCNC());
        resNum->Fill(gt.fResNum);
        Enu->Fill(p.E());
        Elep->Fill((1 - nu.Y()) * p.E());
        Px->Fill(p.Px() / p.P());
        Py->Fill(p.Py() / p.P());
        Pz->Fill(p.Pz() / p.P());
        Pt->Fill(p.Pt() / p.P());
        Vx->Fill(p.Vx());
        Vy->Fill(p.Vy());
        Vz->Fill(p.Vz());
        Vxy->Fill(p.Vx(), p.Vy());
        Vyz->Fill(p.Vy(), p.Vz());
        Vzx->Fill(p.Vz(), p.Vx());
        q0->Fill(nu.Y() * p.E());
        q3->Fill(sqrt(nu.QSqr() + (nu.Y()*p.E() * nu.Y()*p.E())));
        W->Fill(nu.W());
        x->Fill(nu.X());
        y->Fill(nu.Y());
        Qsq->Fill(nu.QSqr());
        Woff->Fill(gt.fgW);
        int proton = 0, neutron = 0, pi0 = 0, piplus = 0, piminus = 0;
        int preFSI_proton = 0, preFSI_neutron = 0, preFSI_pi0 = 0, preFSI_piplus = 0, preFSI_piminus = 0;
	for (int i = 0; i < mct.NParticles(); ++i) {
	  MCParticle const& mcp = mct.GetParticle(i);
	  if (mcp.StatusCode() == 1){ // final state only
	    if (mcp.PdgCode() == 2212) ++proton;
	    if (mcp.PdgCode() == 2112) ++neutron;
	    if (mcp.PdgCode() == 111) ++pi0;
	    if (mcp.PdgCode() == 211) ++piplus;
	    if (mcp.PdgCode() == -211) ++piminus;
	  }
	  else if(mcp.StatusCode() == 14){ //PreFSI "Hadron in the Nucleus" State
	    MCParticle const& mcp_mother = mct.GetParticle(mcp.Mother());
	    if(mcp_mother.StatusCode()!=14){ //preFSI particles can't be the daughter of FSI production
	      if (mcp.PdgCode() == 2212) ++preFSI_proton;
	      if (mcp.PdgCode() == 2112) ++preFSI_neutron;
	      if (mcp.PdgCode() == 111) ++preFSI_pi0;
	      if (mcp.PdgCode() == 211) ++preFSI_piplus;
	      if (mcp.PdgCode() == -211) ++preFSI_piminus;
	    }
	  }
	}
        nProton->Fill(proton);
        nNeutron->Fill(neutron);
        nPi0->Fill(pi0);
        nPiPlus->Fill(piplus);
        nPiMinus->Fill(piminus);
      
	nProtonPreFSI->Fill(preFSI_proton);
	nNeutronPreFSI->Fill(preFSI_neutron);
	nPi0PreFSI->Fill(preFSI_pi0);
	nPiPlusPreFSI->Fill(preFSI_piplus);
	nPiMinusPreFSI->Fill(preFSI_piminus);
      } // function MCPlots::Fill

    private:
      function<bool(MCNeutrino const& nu)> func;
      TH1F* pot; TH1F* horn;
      TH1F* mode; TH1F* flav; TH1F* current; TH1F* resNum;
      // Energy histograms
      TH1F* Enu; TH1F* Elep;
      // Momentum histograms
      TH1F* Px; TH1F* Py; TH1F* Pz; TH1F* Pt;
      // Vertex histograms
      TH1F* Vx; TH1F* Vy; TH1F* Vz; TH2F* Vxy; TH2F* Vyz; TH2F* Vzx;
      // Kinematic histograms
      TH1F* q0; TH1F* q3; TH1F* W; TH1F* x; TH1F* y; TH1F* Qsq; TH1F* Woff;
      // Multiplicity histograms
      TH1F* nProtonPreFSI; TH1F* nNeutronPreFSI; TH1F* nPi0PreFSI;
      TH1F* nPiPlusPreFSI; TH1F* nPiMinusPreFSI;
      TH1F* nProton; TH1F* nNeutron; TH1F* nPi0; TH1F* nPiPlus; TH1F* nPiMinus;
    };

    void InitTree();
    void FillTree(MCTruth const& mct, GTruth const& gt);

    template <class T>
    bool GetHandle(Event const& e, Handle<vector<T>>& h, string name);

    string fSpillModuleLabel;
    string fGenieModuleLabel;

    genie::rew::GReWeight fWcalc;   ///< GENIE weight calculator instance

    TTree* fTree;

    int fMode;
    int fFlav;
    bool fIsNC;
    double fEnu;
    double fPx;
    double fPy;
    double fPz;
    double fPt;
    double fElep;
    double fPxlep;
    double fPylep;
    double fPzlep;
    double fPtlep;
    double fPxnu;
    double fPynu;
    double fPznu;
    double fPtnu;
    double fVx;
    double fVy;
    double fVz;
    double fQ0;
    double fQ3;
    double fW;
    double fX;
    double fY;
    double fQsq;
    double fWoff;

    double fMFPupWgt;    ///< +3sigma weight from mean free path knob (study for prod6)
    
    int fResNum;
    int fNProtonPreFSI;
    int fNNeutronPreFSI;
    int fNPi0PreFSI;
    int fNPiPlusPreFSI;
    int fNPiMinusPreFSI;
    int fNProton;
    int fNNeutron;
    int fNPi0;
    int fNPiPlus;
    int fNPiMinus;
    int fTargetNucleonPDG;
    int fFinalLeptonPDG;
    
    double fTargetNucleonE;
    double fTargetNucleonPx;
    double fTargetNucleonPy;
    double fTargetNucleonPz;
    
    vector<int> fHadronPDG;
    vector<double> fHadronE;
    vector<double> fHadronPx;
    vector<double> fHadronPy;
    vector<double> fHadronPz;
    vector<double> fHadronPt;

    vector<int> fHadronPDGPreFSI;
    vector<double> fHadronEPreFSI;
    vector<double> fHadronPxPreFSI;
    vector<double> fHadronPyPreFSI;
    vector<double> fHadronPzPreFSI;
    vector<double> fHadronPtPreFSI;

    vector<NuPlots> fPlots;

  };

  //---------------------------------------------------------------------------
  GENIEValidation::GENIEValidation(fhicl::ParameterSet const& p)
    :
    EDAnalyzer(p),
    fSpillModuleLabel(p.get<string>("SpillModuleLabel")),
    fGenieModuleLabel(p.get<string>("GenieModuleLabel"))
  {} // GENIEValidation constructor

  //---------------------------------------------------------------------------
  void GENIEValidation::InitTree()
  {
    art::ServiceHandle<art::TFileService> tfs;
    fTree = tfs->make<TTree>("GENIE_tree", "GENIE tree");

    fTree->Branch("mode", &fMode);
    fTree->Branch("flav", &fFlav);
    fTree->Branch("isNC", &fIsNC);
    fTree->Branch("resNum", &fResNum);
    fTree->Branch("Enu", &fEnu);
    fTree->Branch("Px", &fPx);
    fTree->Branch("Py", &fPy);
    fTree->Branch("Pz", &fPz);
    fTree->Branch("Pt", &fPt);
    fTree->Branch("Elep", &fElep);
    fTree->Branch("Pxlep", &fPxlep);
    fTree->Branch("Pylep", &fPylep);
    fTree->Branch("Pzlep", &fPzlep);
    fTree->Branch("Ptlep", &fPtlep);
    fTree->Branch("Pxnu", &fPxnu);
    fTree->Branch("Pynu", &fPynu);
    fTree->Branch("Pznu", &fPznu);
    fTree->Branch("Ptnu", &fPtnu);
    fTree->Branch("Vx", &fVx);
    fTree->Branch("Vy", &fVy);
    fTree->Branch("Vz", &fVz);
    fTree->Branch("q0", &fQ0);
    fTree->Branch("q3", &fQ3);
    fTree->Branch("W", &fW);
    fTree->Branch("x", &fX);
    fTree->Branch("y", &fY);
    fTree->Branch("Qsq", &fQsq);
    fTree->Branch("Woff", &fWoff);
    fTree->Branch("nProtonPreFSI", &fNProtonPreFSI);
    fTree->Branch("nNeutronPreFSI", &fNNeutronPreFSI);
    fTree->Branch("nPi0PreFSI", &fNPi0PreFSI);
    fTree->Branch("nPiPlusPreFSI", &fNPiPlusPreFSI);
    fTree->Branch("nPiMinusPreFSI", &fNPiMinusPreFSI);
    fTree->Branch("nProton", &fNProton);
    fTree->Branch("nNeutron", &fNNeutron);
    fTree->Branch("nPi0", &fNPi0);
    fTree->Branch("nPiPlus", &fNPiPlus);
    fTree->Branch("nPiMinus", &fNPiMinus);
    fTree->Branch("targetNucleonPDG", &fTargetNucleonPDG);
    fTree->Branch("targetNucleonE", &fTargetNucleonE);
    fTree->Branch("targetNucleonPx", &fTargetNucleonPx);
    fTree->Branch("targetNucleonPy", &fTargetNucleonPy);
    fTree->Branch("targetNucleonPz", &fTargetNucleonPz);
    fTree->Branch("hadronPDG", &fHadronPDG);
    fTree->Branch("hadronE", &fHadronE);
    fTree->Branch("hadronPx", &fHadronPx);
    fTree->Branch("hadronPy", &fHadronPy);
    fTree->Branch("hadronPz", &fHadronPz);
    fTree->Branch("hadronPt", &fHadronPt);
    fTree->Branch("hadronPDGPreFSI", &fHadronPDGPreFSI);
    fTree->Branch("hadronEPreFSI", &fHadronEPreFSI);
    fTree->Branch("hadronPxPreFSI", &fHadronPxPreFSI);
    fTree->Branch("hadronPyPreFSI", &fHadronPyPreFSI);
    fTree->Branch("hadronPzPreFSI", &fHadronPzPreFSI);
    fTree->Branch("hadronPtPreFSI", &fHadronPtPreFSI);
    fTree->Branch("mfpUp3SigWgt", &fMFPupWgt);

  } // function GENIEValidation::InitTree

  //---------------------------------------------------------------------------
  void GENIEValidation::FillTree(MCTruth const& mct, GTruth const& gt)
  {  
    MCNeutrino const& nu = mct.GetNeutrino();
    MCParticle const& p = nu.Nu();
    
    fMode = nu.Mode();
    fFlav = p.PdgCode();
    fIsNC = nu.CCNC();
    fResNum = gt.fResNum;

    fEnu = p.E();
    fElep = (1 - nu.Y()) * p.E();
    fPx = p.Px() / p.P();
    fPy = p.Py() / p.P();
    fPz = p.Pz() / p.P();
    fPt = p.Pt() / p.P();
    
    fPxnu = p.Px();
    fPynu = p.Py();
    fPznu = p.Pz();
    fPtnu = p.Pt();

    fVx = p.Vx();
    fVy = p.Vy();
    fVz = p.Vz();
    
    TLorentzVector lep = gt.fFSleptonP4;

    fPxlep = lep.Px();
    fPylep = lep.Py();
    fPzlep = lep.Pz();
    fPtlep = lep.Pt();

    fQ0 = nu.Y() * p.E();
    fQ3 = sqrt(nu.QSqr() + (fQ0 * fQ0));
    fW = nu.W();
    fX = nu.X();
    fY = nu.Y();
    fQsq = nu.QSqr();
    fWoff = gt.fgW;

    fNProtonPreFSI = 0;
    fNNeutronPreFSI = 0;
    fNPi0PreFSI = 0;
    fNPiPlusPreFSI = 0;
    fNPiMinusPreFSI = 0;

    fNProton = 0;
    fNNeutron = 0;
    fNPi0 = 0;
    fNPiPlus = 0;
    fNPiMinus = 0;

    fTargetNucleonPDG = nu.HitNuc();
    fTargetNucleonE = gt.fHitNucP4.E();
    fTargetNucleonPx = gt.fHitNucP4.Px();
    fTargetNucleonPy = gt.fHitNucP4.Py();
    fTargetNucleonPz = gt.fHitNucP4.Pz();
    
    fHadronPDGPreFSI.clear();
    fHadronEPreFSI.clear();
    fHadronPxPreFSI.clear();
    fHadronPyPreFSI.clear();
    fHadronPzPreFSI.clear();
    fHadronPtPreFSI.clear();

    fHadronPDG.clear();
    fHadronE.clear();
    fHadronPx.clear();
    fHadronPy.clear();
    fHadronPz.clear();
    fHadronPt.clear();
    
    for (int i = 0; i < mct.NParticles(); ++i) {
      MCParticle const& mcp = mct.GetParticle(i);
      if (mcp.StatusCode() == 1){ // final state only
	fHadronPDG.push_back(mcp.PdgCode());
	fHadronE.push_back(mcp.E());
	fHadronPx.push_back(mcp.Px());
	fHadronPy.push_back(mcp.Py());
	fHadronPz.push_back(mcp.Pz());
	fHadronPt.push_back(mcp.Pt());
	
	if (mcp.PdgCode() == 2212) ++fNProton;
	if (mcp.PdgCode() == 2112) ++fNNeutron;
	if (mcp.PdgCode() == 111) ++fNPi0;
	if (mcp.PdgCode() == 211) ++fNPiPlus;
	if (mcp.PdgCode() == -211) ++fNPiMinus;
      }
      else if (mcp.StatusCode() == 14){ //PreFSI "Hadron in the Nucleus" State 
	MCParticle const& mcp_mother = mct.GetParticle(mcp.Mother());
	if(mcp_mother.StatusCode()!=14){ //preFSI particles can't be the daughter of FSI production                                                                                                 
	  fHadronPDGPreFSI.push_back(mcp.PdgCode());
	  fHadronEPreFSI.push_back(mcp.E());
	  fHadronPxPreFSI.push_back(mcp.Px());
	  fHadronPyPreFSI.push_back(mcp.Py());
	  fHadronPzPreFSI.push_back(mcp.Pz());
	  fHadronPtPreFSI.push_back(mcp.Pt());

	  if (mcp.PdgCode() == 2212) ++fNProtonPreFSI;
	  if (mcp.PdgCode() == 2112) ++fNNeutronPreFSI;
	  if (mcp.PdgCode() == 111) ++fNPi0PreFSI;
	  if (mcp.PdgCode() == 211) ++fNPiPlusPreFSI;
	  if (mcp.PdgCode() == -211) ++fNPiMinusPreFSI;
	}
      }
    }
    std::cout<<" line531"<<std::endl;
    // rebuild a GENIE record from the MCTruth and GTruth, since that's what the GENIE weight calculator needs
   // std::unique_ptr<genie::EventRecord> evr(evgb::RetrieveGHEP(truth, genie));
    std::unique_ptr<genie::EventRecord> evr(evgb::RetrieveGHEP(mct, gt));
   // std::unique_ptr<genie::EventRecord> evr(evgb::RetrieveGHEP( gt, mct));
    fMFPupWgt = fWcalc.CalcWeight(*evr);
    std::cout<<" Line536"<<std::endl;
    fTree->Fill();
    std::cout<<"line538"<<std::endl;
  } // function GENIEValidation::FillTree

  //---------------------------------------------------------------------------
  void GENIEValidation::beginJob()
  {
   // Call SetEventGeneratorListAndTune from 
   // the evgb namespace in GENIE2ART.h
  
   evgb::SetEventGeneratorListAndTune("", "${GENIE_XSEC_TUNE}");
   //
   fWcalc.AdoptWghtCalc( "fsi_inuke",  new genie::rew::GReWeightINuke );
   genie::rew::GSystSet & syst = fWcalc.Systematics();
  
   syst.Set( genie::rew::kINukeTwkDial_MFP_N, 2.5); 
 // the "MFP down" variation sets this to 0.4, and 1/0.4 = 2.5

   fWcalc.Reconfigure();
   
  }


  //---------------------------------------------------------------------------
  void GENIEValidation::beginRun(art::Run const&)
  {
    if (!fPlots.empty()) return; // quit if histograms already initialised

    InitTree();
    
    art::ServiceHandle<art::TFileService> tfs;
    art::ServiceHandle<geo::Geometry> geo;

    xyz lo, hi;
    geo->DetectorEnclosureBox(&lo.x, &hi.x, &lo.y, &hi.y, &lo.z, &hi.z);
    
    fPlots.push_back(NuPlots([](MCNeutrino const& nu) -> bool
      { return true; }, tfs->mkdir(""), lo, hi));
    for (auto const& flavour : kFlavours) {
      fPlots.push_back(NuPlots([=](MCNeutrino const& nu) -> bool
        { return nu.Nu().PdgCode() == flavour.id; }, tfs->mkdir(flavour.name), lo, hi));
      for (auto const& current : kCurrents) {
        fPlots.push_back(NuPlots([=](MCNeutrino const& nu) -> bool
          { return nu.Nu().PdgCode() == flavour.id && nu.CCNC() == current.id; },
          tfs->mkdir(flavour.name+"/"+current.name), lo, hi));
        for (auto const& mode : kModes) {
          fPlots.push_back(NuPlots([=](MCNeutrino const& nu) -> bool
            { return nu.Nu().PdgCode() == flavour.id && nu.CCNC() == current.id && nu.Mode() == mode.id; },
            tfs->mkdir(flavour.name+"/"+current.name+"/"+mode.name), lo, hi));
        } // for interaction
      } // for current
    } // for neutrino flavour
  }

  //---------------------------------------------------------------------------
  template <class T>
  bool GENIEValidation::GetHandle(Event const& e, Handle<vector<T>>& h,
    string name)
  {
    bool exists = e.getByLabel(fGenieModuleLabel, h);
    if (!exists || !h->size()) {
      mf::LogInfo("GENIEValidation")
       << "no " << name << " information in event";
      return false;
    }
    return true;
  } // function GENIEValidation::GetHandle

  //---------------------------------------------------------------------------
  void GENIEValidation::analyze(Event const& e)
  {
    // Get data products
    Handle<SpillData> spillHandle;
    if (!e.getByLabel(fSpillModuleLabel, spillHandle)) {
      mf::LogInfo("GENIEValidation")
       << "no spill data in event";
      return;
    }

    Handle<vector<MCTruth>> truthHandle;
    if (!GetHandle<MCTruth>(e, truthHandle, "MC truth")) return;

    Handle<vector<GTruth>> genieHandle;
    if (!GetHandle<GTruth>(e, genieHandle, "GENIE truth")) return;

    Handle<vector<MCFlux>> fluxHandle;
    if (!GetHandle<MCFlux>(e, fluxHandle, "flux")) return;

    if (truthHandle->size() != genieHandle->size()
      || truthHandle->size() != fluxHandle->size()) {
      mf::LogInfo("FluxValidation")
        << "data product size mismatch (" << truthHandle->size()
        << " MC truth objects, " << genieHandle->size()
        << " GENIE truth objects and " << fluxHandle->size()
        << " flux objects.";
      return;
    }

    // Fill spill data
    for (NuPlots& p : fPlots) p.FillSpill(*spillHandle);

    // Loop over GENIE truths
    for (size_t i = 0; i < truthHandle->size(); ++i) {

      MCTruth const& truth = truthHandle->at(i);
      GTruth const& genie = genieHandle->at(i);
      // MCFlux const& flux = fluxHandle->at(i);
      if (!truth.NeutrinoSet()) {
        mf::LogInfo("FluxValidation")
          << "no neutrino in this truth object, skipping";
        continue;
      }
     std::cout<<"line 643"<<std::endl;
      FillTree(truth, genie);
      for (NuPlots& p : fPlots) p.Fill(truth, genie);

    } // for GENIE truth

  } // function GENIEValidation::analyze

  DEFINE_ART_MODULE(GENIEValidation)

}  // namespace valid
