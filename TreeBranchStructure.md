## MiniProd 6.2

In Genie only sim.genie.root files, we have
```bash
root [1] Events->GetListOfBranches()->Print()
Collection name='TObjArray', class='TObjArray', size=16
 *Br    0 :EventAuxiliary : art::EventAuxiliary                               *
*Entries :   695583 : Total  Size=   36890331 bytes  File Size  =    8351998 *
*Baskets :      217 : Basket Size=     376832 bytes  Compression=   4.42     *
*............................................................................*
 *Branch  :simb::GTruthsimb::MCTruthvoidart::Assns_genpremixer__GenieGen.     *
*Entries :   695583 : BranchElement (see below)                              *
*............................................................................*
*Br    1 :simb::GTruthsimb::MCTruthvoidart::Assns_genpremixer__GenieGen.present : *
*         | Bool_t                                                           *
*Entries :   695583 : Total  Size=     728696 bytes  File Size  =      38240 *
*Baskets :      206 : Basket Size=      20632 bytes  Compression=  18.93     *
*............................................................................*
*Br    2 :simb::GTruthsimb::MCTruthvoidart::Assns_genpremixer__GenieGen.rangeSetID : *
*         | UInt_t                                                           *
*Entries :   695583 : Total  Size=    2816075 bytes  File Size  =      47823 *
*Baskets :      206 : Basket Size=      27136 bytes  Compression=  58.79     *
*............................................................................*
*Br    3 :simb::GTruthsimb::MCTruthvoidart::Assns_genpremixer__GenieGen.obj : *
*         | art::Assns<simb::MCTruth,simb::GTruth,void>                      *
*Entries :   695583 : Total  Size=  131740875 bytes  File Size  =    5424873 *
*Baskets :      251 : Basket Size=    1435136 bytes  Compression=  24.28     *
*............................................................................*
 *Branch  :art::TriggerResults_TriggerResults__GenieGen.                      *
*Entries :   695583 : BranchElement (see below)                              *
*............................................................................*
*Br    4 :art::TriggerResults_TriggerResults__GenieGen.present : Bool_t      *
*Entries :   695583 : Total  Size=     725126 bytes  File Size  =      34738 *
*Baskets :      206 : Basket Size=      20632 bytes  Compression=  20.74     *
*............................................................................*
*Br    5 :art::TriggerResults_TriggerResults__GenieGen.rangeSetID : UInt_t   *
*Entries :   695583 : Total  Size=    2812505 bytes  File Size  =      44321 *
*Baskets :      206 : Basket Size=      27136 bytes  Compression=  63.35     *
*............................................................................*
*Br    6 :art::TriggerResults_TriggerResults__GenieGen.obj : art:            *
*         | :TriggerResults                                                  *
*Entries :   695583 : Total  Size=   39680322 bytes  File Size  =    1669663 *
*Baskets :      218 : Basket Size=     403968 bytes  Compression=  23.76     *
*............................................................................*
 *Branch  :simb::MCTruths_genpremixer__GenieGen.                              *
*Entries :   695583 : BranchElement (see below)                              *
*............................................................................*
*Br    7 :simb::MCTruths_genpremixer__GenieGen.present : Bool_t              *
*Entries :   695583 : Total  Size=     723446 bytes  File Size  =      33090 *
*Baskets :      206 : Basket Size=      20632 bytes  Compression=  21.72     *
*............................................................................*
*Br    8 :simb::MCTruths_genpremixer__GenieGen.rangeSetID : UInt_t           *
*Entries :   695583 : Total  Size=    2810825 bytes  File Size  =      42673 *
*Baskets :      206 : Basket Size=      27136 bytes  Compression=  65.76     *
*............................................................................*
*Br    9 :simb::MCTruths_genpremixer__GenieGen.obj : Int_t simb:             *
*         | :MCTruths_genpremixer__GenieGen.obj_                             *
*Entries :   695583 : Total  Size=    5942024 bytes  File Size  =    1679511 *
*Baskets :      612 : Basket Size=      16384 bytes  Compression=   3.36     *
*............................................................................*
*Br   10 :simb::MCTruths_genpremixer__GenieGen.obj.fPartList : vector<simb:  *
*         | :MCParticle> fPartList[simb::MCTruths_genpremixer__GenieGen.obj_]*
*Entries :695583 : Total  Size= 8507621950 bytes  File Size  = 1477944241 *
*Baskets :     3401 : Basket Size=   10316471 bytes  Compression=   5.76     *
*............................................................................*
*Br   11 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fNu.fstatus : *
*         | Int_t fstatus[simb::MCTruths_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=    9370752 bytes  File Size  =    1169065 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   8.01     *
*............................................................................*
*Br   12 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fNu.ftrackId : *
*         | Int_t ftrackId[simb::MCTruths_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=    9370965 bytes  File Size  =    1169181 *
*Baskets :      209 : Basket Size=     127488 bytes  Compression=   8.01     *
*............................................................................*
*Br   13 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fNu.fpdgCode : *
*         | Int_t fpdgCode[simb::MCTruths_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=    9370965 bytes  File Size  =    1570604 *
*Baskets :      209 : Basket Size=     127488 bytes  Compression=   5.96     *
*............................................................................*
*Br   14 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fNu.fmother : *
*         | Int_t fmother[simb::MCTruths_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=    9370752 bytes  File Size  =    1170032 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   8.00     *
*............................................................................*
*Br   15 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fNu.fprocess : *
*         | string fprocess[simb::MCTruths_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   20099223 bytes  File Size  =    2775080 *
*Baskets :      213 : Basket Size=     239616 bytes  Compression=   7.24     *
*............................................................................*
*Br   16 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fNu.fendprocess : *
*         | string fendprocess[simb::MCTruths_genpremixer__GenieGen.obj_]    *
*Entries :   695583 : Total  Size=    8629518 bytes  File Size  =    2397996 *
*Baskets :      209 : Basket Size=     112640 bytes  Compression=   3.60     *
*............................................................................*
*Br   17 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fNu.ftrajectory.ftrajectory : *
*         | vector<pair<TLorentzVector,TLorentzVector> > ftrajectory[simb:   *
*         | :MCTruths_genpremixer__GenieGen.obj_]                            *
*Entries :   695583 : Total  Size=  227466522 bytes  File Size  =  112696010 *
*Baskets :      287 : Basket Size=    2534400 bytes  Compression=   2.02     *
*............................................................................*
*Br   18 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fNu.ftrajectory.fTrajectoryProcess : *
*         | vector<pair<unsigned long,unsigned char> > fTrajectoryProcess[simb:*
*         | :MCTruths_genpremixer__GenieGen.obj_]                            *
*Entries :   695583 : Total  Size=   17723175 bytes  File Size  =    2577720 *
*Baskets :      212 : Basket Size=     206848 bytes  Compression=   6.87     *
*............................................................................*
*Br   19 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fNu.fmass :   *
*         | Double_t fmass[simb::MCTruths_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=   15924915 bytes  File Size  =    1214704 *
*Baskets :      212 : Basket Size=     200192 bytes  Compression=  13.11     *
*............................................................................*
*Br   20 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fNu.fpolarization : *
*         | TVector3 fpolarization[simb::MCTruths_genpremixer__GenieGen.obj_]*
*Entries :   695583 : Total  Size=   68362545 bytes  File Size  =    2557676 *
*Baskets :      230 : Basket Size=     781312 bytes  Compression=  26.73     *
*............................................................................*
*Br   21 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fNu.fdaughters : *
*         | set<int> fdaughters[simb::MCTruths_genpremixer__GenieGen.obj_]   *
*Entries :   695583 : Total  Size=   13545053 bytes  File Size  =    2512829 *
*Baskets :      210 : Basket Size=     166912 bytes  Compression=   5.39     *
*............................................................................*
*Br   22 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fNu.fWeight : *
*         | Double_t fWeight[simb::MCTruths_genpremixer__GenieGen.obj_]      *
*Entries :   695583 : Total  Size=   15925347 bytes  File Size  =    1215239 *
*Baskets :      212 : Basket Size=     200192 bytes  Compression=  13.10     *
*............................................................................*
*Br   23 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fNu.fGvtx :   *
*         | TLorentzVector fGvtx[simb::MCTruths_genpremixer__GenieGen.obj_]  *
*Entries :   695583 : Total  Size=  107687571 bytes  File Size  =   41291636 *
*Baskets :      244 : Basket Size=    1217024 bytes  Compression=   2.61     *
*............................................................................*
*Br   24 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fNu.frescatter : *
*         | Int_t frescatter[simb::MCTruths_genpremixer__GenieGen.obj_]      *
*Entries :   695583 : Total  Size=    9371391 bytes  File Size  =    1160525 *
*Baskets :      209 : Basket Size=     127488 bytes  Compression=   8.07     *
*............................................................................*
*Br   25 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fLepton.fstatus : *
*         | Int_t fstatus[simb::MCTruths_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=    9371596 bytes  File Size  =    1176366 *
*Baskets :      209 : Basket Size=     127488 bytes  Compression=   7.96     *
*............................................................................*
*Br   26 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fLepton.ftrackId : *
*         | Int_t ftrackId[simb::MCTruths_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=    9371809 bytes  File Size  =    1741043 *
*Baskets :      209 : Basket Size=     127488 bytes  Compression=   5.38     *
*............................................................................*
*Br   27 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fLepton.fpdgCode : *
*         | Int_t fpdgCode[simb::MCTruths_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=    9371809 bytes  File Size  =    2210465 *
*Baskets :      209 : Basket Size=     127488 bytes  Compression=   4.24     *
*............................................................................*
*Br   28 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fLepton.fmother : *
*         | Int_t fmother[simb::MCTruths_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=    9371596 bytes  File Size  =    1171025 *
*Baskets :      209 : Basket Size=     127488 bytes  Compression=   8.00     *
*............................................................................*
*Br   29 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fLepton.fprocess : *
*         | string fprocess[simb::MCTruths_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   20100083 bytes  File Size  =    2775999 *
*Baskets :      213 : Basket Size=     239616 bytes  Compression=   7.24     *
*............................................................................*
*Br   30 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fLepton.fendprocess : *
*         | string fendprocess[simb::MCTruths_genpremixer__GenieGen.obj_]    *
*Entries :   695583 : Total  Size=    8630362 bytes  File Size  =    2399211 *
*Baskets :      209 : Basket Size=     112640 bytes  Compression=   3.60     *
*............................................................................*
*Br   31 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fLepton.ftrajectory.ftrajectory : *
*         | vector<pair<TLorentzVector,TLorentzVector> > ftrajectory[simb:   *
*         | :MCTruths_genpremixer__GenieGen.obj_]                            *
*Entries :   695583 : Total  Size=  227467678 bytes  File Size  =  112850127 *
*Baskets :      287 : Basket Size=    2535424 bytes  Compression=   2.02     *
*............................................................................*
*Br   32 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fLepton.ftrajectory.fTrajectoryProcess : *
*         | vector<pair<unsigned long,unsigned char> > fTrajectoryProcess[simb:*
*         | :MCTruths_genpremixer__GenieGen.obj_]                            *
*Entries :   695583 : Total  Size=   17724031 bytes  File Size  =    2578471 *
*Baskets :      212 : Basket Size=     206848 bytes  Compression=   6.87     *
*............................................................................*
*Br   33 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fLepton.fmass : *
*         | Double_t fmass[simb::MCTruths_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=   15925771 bytes  File Size  =    2271645 *
*Baskets :      212 : Basket Size=     200192 bytes  Compression=   7.01     *
*............................................................................*
*Br   34 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fLepton.fpolarization : *
*         | TVector3 fpolarization[simb::MCTruths_genpremixer__GenieGen.obj_]*
*Entries :   695583 : Total  Size=   68363473 bytes  File Size  =   40285201 *
*Baskets :      230 : Basket Size=     781824 bytes  Compression=   1.70     *
*............................................................................*
*Br   35 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fLepton.fdaughters : *
*         | set<int> fdaughters[simb::MCTruths_genpremixer__GenieGen.obj_]   *
*Entries :   695583 : Total  Size=   13545901 bytes  File Size  =    2513178 *
*Baskets :      210 : Basket Size=     166912 bytes  Compression=   5.39     *
*............................................................................*
*Br   36 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fLepton.fWeight : *
*         | Double_t fWeight[simb::MCTruths_genpremixer__GenieGen.obj_]      *
*Entries :   695583 : Total  Size=   15926203 bytes  File Size  =    1215550 *
*Baskets :      212 : Basket Size=     200192 bytes  Compression=  13.10     *
*............................................................................*
*Br   37 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fLepton.fGvtx : *
*         | TLorentzVector fGvtx[simb::MCTruths_genpremixer__GenieGen.obj_]  *
*Entries :   695583 : Total  Size=  107688555 bytes  File Size  =   41293946 *
*Baskets :      244 : Basket Size=    1217536 bytes  Compression=   2.61     *
*............................................................................*
*Br   38 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fLepton.frescatter : *
*         | Int_t frescatter[simb::MCTruths_genpremixer__GenieGen.obj_]      *
*Entries :   695583 : Total  Size=    9372235 bytes  File Size  =    1161238 *
*Baskets :      209 : Basket Size=     127488 bytes  Compression=   8.07     *
*............................................................................*
*Br   39 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fMode :       *
*         | Int_t fMode[simb::MCTruths_genpremixer__GenieGen.obj_]           *
*Entries :   695583 : Total  Size=    9369482 bytes  File Size  =    2400648 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   3.90     *
*............................................................................*
*Br   40 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fInteractionType : *
*         | Int_t fInteractionType[simb::MCTruths_genpremixer__GenieGen.obj_]*
*Entries :   695583 : Total  Size=    9371825 bytes  File Size  =    2999060 *
*Baskets :      209 : Basket Size=     127488 bytes  Compression=   3.12     *
*............................................................................*
*Br   41 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fCCNC :       *
*         | Int_t fCCNC[simb::MCTruths_genpremixer__GenieGen.obj_]           *
*Entries :   695583 : Total  Size=    9369482 bytes  File Size  =    1990191 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   4.71     *
*............................................................................*
*Br   42 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fTarget :     *
*         | Int_t fTarget[simb::MCTruths_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=    9369908 bytes  File Size  =    2459868 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   3.81     *
*............................................................................*
*Br   43 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fHitNuc :     *
*         | Int_t fHitNuc[simb::MCTruths_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=    9369908 bytes  File Size  =    2280454 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   4.11     *
*............................................................................*
*Br   44 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fHitQuark :   *
*         | Int_t fHitQuark[simb::MCTruths_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=    9370334 bytes  File Size  =    2240730 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   4.18     *
*............................................................................*
*Br   45 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fW :          *
*         | Double_t fW[simb::MCTruths_genpremixer__GenieGen.obj_]           *
*Entries :   695583 : Total  Size=   15923411 bytes  File Size  =   13744297 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.16     *
*............................................................................*
*Br   46 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fX :          *
*         | Double_t fX[simb::MCTruths_genpremixer__GenieGen.obj_]           *
*Entries :   695583 : Total  Size=   15923411 bytes  File Size  =   13692565 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.16     *
*............................................................................*
*Br   47 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fY :          *
*         | Double_t fY[simb::MCTruths_genpremixer__GenieGen.obj_]           *
*Entries :   695583 : Total  Size=   15923411 bytes  File Size  =   13688369 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.16     *
*............................................................................*
*Br   48 :simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fQSqr :       *
*         | Double_t fQSqr[simb::MCTruths_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=   15924059 bytes  File Size  =   13764775 *
*Baskets :      212 : Basket Size=     200192 bytes  Compression=   1.16     *
*............................................................................*
*Br   49 :simb::MCTruths_genpremixer__GenieGen.obj.fOrigin :                 *
*         | Int_t fOrigin[simb::MCTruths_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=    9367376 bytes  File Size  =    1171567 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   7.99     *
*............................................................................*
*Br   50 :simb::MCTruths_genpremixer__GenieGen.obj.fGenInfo.generator :      *
*         | Int_t generator[simb::MCTruths_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=    9369701 bytes  File Size  =    1162892 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   8.05     *
*............................................................................*
*Br   51 :simb::MCTruths_genpremixer__GenieGen.obj.fGenInfo.generatorVersion : *
*         | string generatorVersion[simb:                                    *
*         | :MCTruths_genpremixer__GenieGen.obj_]                            *
*Entries :   695583 : Total  Size=   20099454 bytes  File Size  =    2784817 *
*Baskets :      213 : Basket Size=     239616 bytes  Compression=   7.22     *
*............................................................................*
*Br   52 :simb::MCTruths_genpremixer__GenieGen.obj.fGenInfo.generatorConfig : *
*         | unordered_map<string,string> generatorConfig[simb:               *
*         | :MCTruths_genpremixer__GenieGen.obj_]                            *
*Entries :   695583 : Total  Size=   70154273 bytes  File Size  =    3373839 *
*Baskets :      230 : Basket Size=     787968 bytes  Compression=  20.79     *
*............................................................................*
*Br   53 :simb::MCTruths_genpremixer__GenieGen.obj.fNeutrinoSet :            *
*         | Bool_t fNeutrinoSet[simb::MCTruths_genpremixer__GenieGen.obj_]   *
*Entries :   695583 : Total  Size=    4452557 bytes  File Size  =    1179516 *
*Baskets :      207 : Basket Size=      72704 bytes  Compression=   3.77     *
*............................................................................*
 *Branch  :simb::MCFluxs_genpremixer__GenieGen.                               *
*Entries :   695583 : BranchElement (see below)                              *
*............................................................................*
*Br   54 :simb::MCFluxs_genpremixer__GenieGen.present : Bool_t               *
*Entries :   695583 : Total  Size=     723236 bytes  File Size  =      32884 *
*Baskets :      206 : Basket Size=      20632 bytes  Compression=  21.85     *
*............................................................................*
*Br   55 :simb::MCFluxs_genpremixer__GenieGen.rangeSetID : UInt_t            *
*Entries :   695583 : Total  Size=    2810615 bytes  File Size  =      42467 *
*Baskets :      206 : Basket Size=      27136 bytes  Compression=  66.08     *
*............................................................................*
*Br   56 :simb::MCFluxs_genpremixer__GenieGen.obj : Int_t simb:              *
*         | :MCFluxs_genpremixer__GenieGen.obj_                              *
*Entries :   695583 : Total  Size=    6000265 bytes  File Size  =    1685316 *
*Baskets :      612 : Basket Size=      16384 bytes  Compression=   3.34     *
*............................................................................*
*Br   57 :simb::MCFluxs_genpremixer__GenieGen.obj.frun : Int_t frun[simb:    *
*         | :MCFluxs_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=    9366522 bytes  File Size  =    1277730 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   7.33     *
*............................................................................*
*Br   58 :simb::MCFluxs_genpremixer__GenieGen.obj.fevtno : Int_t fevtno[simb:*
*         | :MCFluxs_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=    9366948 bytes  File Size  =    6239400 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   1.50     *
*............................................................................*
*Br   59 :simb::MCFluxs_genpremixer__GenieGen.obj.fndxdz :                   *
*         | Double_t fndxdz[simb::MCFluxs_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=   15921489 bytes  File Size  =    1226097 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.98     *
*............................................................................*
*Br   60 :simb::MCFluxs_genpremixer__GenieGen.obj.fndydz :                   *
*         | Double_t fndydz[simb::MCFluxs_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=   15921489 bytes  File Size  =    1226097 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.98     *
*............................................................................*
*Br   61 :simb::MCFluxs_genpremixer__GenieGen.obj.fnpz : Double_t fnpz[simb: *
*         | :MCFluxs_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=   15921057 bytes  File Size  =    1225190 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.99     *
*............................................................................*
*Br   62 :simb::MCFluxs_genpremixer__GenieGen.obj.fnenergy :                 *
*         | Double_t fnenergy[simb::MCFluxs_genpremixer__GenieGen.obj_]      *
*Entries :   695583 : Total  Size=   15921921 bytes  File Size  =    1226654 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.98     *
*............................................................................*
*Br   63 :simb::MCFluxs_genpremixer__GenieGen.obj.fndxdznea :                *
*         | Double_t fndxdznea[simb::MCFluxs_genpremixer__GenieGen.obj_]     *
*Entries :   695583 : Total  Size=   15922137 bytes  File Size  =    1227043 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.97     *
*............................................................................*
*Br   64 :simb::MCFluxs_genpremixer__GenieGen.obj.fndydznea :                *
*         | Double_t fndydznea[simb::MCFluxs_genpremixer__GenieGen.obj_]     *
*Entries :   695583 : Total  Size=   15922137 bytes  File Size  =    1227043 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.97     *
*............................................................................*
*Br   65 :simb::MCFluxs_genpremixer__GenieGen.obj.fnenergyn :                *
*         | Double_t fnenergyn[simb::MCFluxs_genpremixer__GenieGen.obj_]     *
*Entries :   695583 : Total  Size=   15922137 bytes  File Size  =   13781413 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.15     *
*............................................................................*
*Br   66 :simb::MCFluxs_genpremixer__GenieGen.obj.fnwtnear :                 *
*         | Double_t fnwtnear[simb::MCFluxs_genpremixer__GenieGen.obj_]      *
*Entries :   695583 : Total  Size=   15921921 bytes  File Size  =   13692292 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.16     *
*............................................................................*
*Br   67 :simb::MCFluxs_genpremixer__GenieGen.obj.fndxdzfar :                *
*         | Double_t fndxdzfar[simb::MCFluxs_genpremixer__GenieGen.obj_]     *
*Entries :   695583 : Total  Size=   15922137 bytes  File Size  =    1227043 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.97     *
*............................................................................*
*Br   68 :simb::MCFluxs_genpremixer__GenieGen.obj.fndydzfar :                *
*         | Double_t fndydzfar[simb::MCFluxs_genpremixer__GenieGen.obj_]     *
*Entries :   695583 : Total  Size=   15922137 bytes  File Size  =    1227043 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.97     *
*............................................................................*
*Br   69 :simb::MCFluxs_genpremixer__GenieGen.obj.fnenergyf :                *
*         | Double_t fnenergyf[simb::MCFluxs_genpremixer__GenieGen.obj_]     *
*Entries :   695583 : Total  Size=   15922137 bytes  File Size  =   13781413 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.15     *
*............................................................................*
*Br   70 :simb::MCFluxs_genpremixer__GenieGen.obj.fnwtfar :                  *
*         | Double_t fnwtfar[simb::MCFluxs_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   15921705 bytes  File Size  =   13692065 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.16     *
*............................................................................*
*Br   71 :simb::MCFluxs_genpremixer__GenieGen.obj.fnorig : Int_t fnorig[simb:*
*         | :MCFluxs_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=    9366948 bytes  File Size  =    1908294 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   4.91     *
*............................................................................*
*Br   72 :simb::MCFluxs_genpremixer__GenieGen.obj.fndecay :                  *
*         | Int_t fndecay[simb::MCFluxs_genpremixer__GenieGen.obj_]          *
*Entries :   695583 : Total  Size=    9367161 bytes  File Size  =    2175784 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   4.30     *
*............................................................................*
*Br   73 :simb::MCFluxs_genpremixer__GenieGen.obj.fntype : Int_t fntype[simb:*
*         | :MCFluxs_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=    9366948 bytes  File Size  =    1566891 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   5.97     *
*............................................................................*
*Br   74 :simb::MCFluxs_genpremixer__GenieGen.obj.fvx : Double_t fvx[simb:   *
*         | :MCFluxs_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=   15920841 bytes  File Size  =   13798658 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.15     *
*............................................................................*
*Br   75 :simb::MCFluxs_genpremixer__GenieGen.obj.fvy : Double_t fvy[simb:   *
*         | :MCFluxs_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=   15920841 bytes  File Size  =   13830139 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.15     *
*............................................................................*
*Br   76 :simb::MCFluxs_genpremixer__GenieGen.obj.fvz : Double_t fvz[simb:   *
*         | :MCFluxs_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=   15920841 bytes  File Size  =   13642135 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.17     *
*............................................................................*
*Br   77 :simb::MCFluxs_genpremixer__GenieGen.obj.fpdpx :                    *
*         | Double_t fpdpx[simb::MCFluxs_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=   15921273 bytes  File Size  =   13774087 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.16     *
*............................................................................*
*Br   78 :simb::MCFluxs_genpremixer__GenieGen.obj.fpdpy :                    *
*         | Double_t fpdpy[simb::MCFluxs_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=   15921273 bytes  File Size  =   13786991 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.15     *
*............................................................................*
*Br   79 :simb::MCFluxs_genpremixer__GenieGen.obj.fpdpz :                    *
*         | Double_t fpdpz[simb::MCFluxs_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=   15921273 bytes  File Size  =   13635965 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.17     *
*............................................................................*
*Br   80 :simb::MCFluxs_genpremixer__GenieGen.obj.fppdxdz :                  *
*         | Double_t fppdxdz[simb::MCFluxs_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   15921705 bytes  File Size  =   13787626 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.15     *
*............................................................................*
*Br   81 :simb::MCFluxs_genpremixer__GenieGen.obj.fppdydz :                  *
*         | Double_t fppdydz[simb::MCFluxs_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   15921705 bytes  File Size  =   13789431 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.15     *
*............................................................................*
*Br   82 :simb::MCFluxs_genpremixer__GenieGen.obj.fpppz :                    *
*         | Double_t fpppz[simb::MCFluxs_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=   15921273 bytes  File Size  =   13634352 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.17     *
*............................................................................*
*Br   83 :simb::MCFluxs_genpremixer__GenieGen.obj.fppenergy :                *
*         | Double_t fppenergy[simb::MCFluxs_genpremixer__GenieGen.obj_]     *
*Entries :   695583 : Total  Size=   15922137 bytes  File Size  =   13635203 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.17     *
*............................................................................*
*Br   84 :simb::MCFluxs_genpremixer__GenieGen.obj.fppmedium :                *
*         | Int_t fppmedium[simb::MCFluxs_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=    9367587 bytes  File Size  =    1166441 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   8.03     *
*............................................................................*
*Br   85 :simb::MCFluxs_genpremixer__GenieGen.obj.fptype : Int_t fptype[simb:*
*         | :MCFluxs_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=    9366948 bytes  File Size  =    2212503 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   4.23     *
*............................................................................*
*Br   86 :simb::MCFluxs_genpremixer__GenieGen.obj.fppvx :                    *
*         | Double_t fppvx[simb::MCFluxs_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=   15921273 bytes  File Size  =   13843387 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.15     *
*............................................................................*
*Br   87 :simb::MCFluxs_genpremixer__GenieGen.obj.fppvy :                    *
*         | Double_t fppvy[simb::MCFluxs_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=   15921273 bytes  File Size  =   13845099 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.15     *
*............................................................................*
*Br   88 :simb::MCFluxs_genpremixer__GenieGen.obj.fppvz :                    *
*         | Double_t fppvz[simb::MCFluxs_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=   15921273 bytes  File Size  =   13687320 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.16     *
*............................................................................*
*Br   89 :simb::MCFluxs_genpremixer__GenieGen.obj.fmuparpx :                 *
*         | Double_t fmuparpx[simb::MCFluxs_genpremixer__GenieGen.obj_]      *
*Entries :   695583 : Total  Size=   15921921 bytes  File Size  =    1388259 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  11.47     *
*............................................................................*
*Br   90 :simb::MCFluxs_genpremixer__GenieGen.obj.fmuparpy :                 *
*         | Double_t fmuparpy[simb::MCFluxs_genpremixer__GenieGen.obj_]      *
*Entries :   695583 : Total  Size=   15921921 bytes  File Size  =    1387995 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  11.47     *
*............................................................................*
*Br   91 :simb::MCFluxs_genpremixer__GenieGen.obj.fmuparpz :                 *
*         | Double_t fmuparpz[simb::MCFluxs_genpremixer__GenieGen.obj_]      *
*Entries :   695583 : Total  Size=   15921921 bytes  File Size  =    1386614 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  11.48     *
*............................................................................*
*Br   92 :simb::MCFluxs_genpremixer__GenieGen.obj.fmupare :                  *
*         | Double_t fmupare[simb::MCFluxs_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   15921705 bytes  File Size  =    1386220 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  11.48     *
*............................................................................*
*Br   93 :simb::MCFluxs_genpremixer__GenieGen.obj.fnecm :                    *
*         | Double_t fnecm[simb::MCFluxs_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=   15921273 bytes  File Size  =    5372512 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   2.96     *
*............................................................................*
*Br   94 :simb::MCFluxs_genpremixer__GenieGen.obj.fnimpwt :                  *
*         | Double_t fnimpwt[simb::MCFluxs_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   15921705 bytes  File Size  =    4571168 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   3.48     *
*............................................................................*
*Br   95 :simb::MCFluxs_genpremixer__GenieGen.obj.fxpoint :                  *
*         | Double_t fxpoint[simb::MCFluxs_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   15921705 bytes  File Size  =    1226479 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.98     *
*............................................................................*
*Br   96 :simb::MCFluxs_genpremixer__GenieGen.obj.fypoint :                  *
*         | Double_t fypoint[simb::MCFluxs_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   15921705 bytes  File Size  =    1226479 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.98     *
*............................................................................*
*Br   97 :simb::MCFluxs_genpremixer__GenieGen.obj.fzpoint :                  *
*         | Double_t fzpoint[simb::MCFluxs_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   15921705 bytes  File Size  =    1226479 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.98     *
*............................................................................*
*Br   98 :simb::MCFluxs_genpremixer__GenieGen.obj.ftvx : Double_t ftvx[simb: *
*         | :MCFluxs_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=   15921057 bytes  File Size  =    8985750 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.77     *
*............................................................................*
*Br   99 :simb::MCFluxs_genpremixer__GenieGen.obj.ftvy : Double_t ftvy[simb: *
*         | :MCFluxs_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=   15921057 bytes  File Size  =   10855655 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.47     *
*............................................................................*
*Br  100 :simb::MCFluxs_genpremixer__GenieGen.obj.ftvz : Double_t ftvz[simb: *
*         | :MCFluxs_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=   15921057 bytes  File Size  =   10834299 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.47     *
*............................................................................*
*Br  101 :simb::MCFluxs_genpremixer__GenieGen.obj.ftpx : Double_t ftpx[simb: *
*         | :MCFluxs_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=   15921057 bytes  File Size  =   13489346 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.18     *
*............................................................................*
*Br  102 :simb::MCFluxs_genpremixer__GenieGen.obj.ftpy : Double_t ftpy[simb: *
*         | :MCFluxs_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=   15921057 bytes  File Size  =   13490040 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.18     *
*............................................................................*
*Br  103 :simb::MCFluxs_genpremixer__GenieGen.obj.ftpz : Double_t ftpz[simb: *
*         | :MCFluxs_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=   15921057 bytes  File Size  =   13340018 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.19     *
*............................................................................*
*Br  104 :simb::MCFluxs_genpremixer__GenieGen.obj.ftptype :                  *
*         | Int_t ftptype[simb::MCFluxs_genpremixer__GenieGen.obj_]          *
*Entries :   695583 : Total  Size=    9367161 bytes  File Size  =    2422365 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   3.86     *
*............................................................................*
*Br  105 :simb::MCFluxs_genpremixer__GenieGen.obj.ftgen : Int_t ftgen[simb:  *
*         | :MCFluxs_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=    9366735 bytes  File Size  =    2261570 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   4.14     *
*............................................................................*
*Br  106 :simb::MCFluxs_genpremixer__GenieGen.obj.ftgptype :                 *
*         | Int_t ftgptype[simb::MCFluxs_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=    9367374 bytes  File Size  =    1172775 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   7.98     *
*............................................................................*
*Br  107 :simb::MCFluxs_genpremixer__GenieGen.obj.ftgppx :                   *
*         | Double_t ftgppx[simb::MCFluxs_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=   15921489 bytes  File Size  =    1226097 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.98     *
*............................................................................*
*Br  108 :simb::MCFluxs_genpremixer__GenieGen.obj.ftgppy :                   *
*         | Double_t ftgppy[simb::MCFluxs_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=   15921489 bytes  File Size  =    1226097 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.98     *
*............................................................................*
*Br  109 :simb::MCFluxs_genpremixer__GenieGen.obj.ftgppz :                   *
*         | Double_t ftgppz[simb::MCFluxs_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=   15921489 bytes  File Size  =    1226097 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.98     *
*............................................................................*
*Br  110 :simb::MCFluxs_genpremixer__GenieGen.obj.ftprivx :                  *
*         | Double_t ftprivx[simb::MCFluxs_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   15921705 bytes  File Size  =    1226479 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.98     *
*............................................................................*
*Br  111 :simb::MCFluxs_genpremixer__GenieGen.obj.ftprivy :                  *
*         | Double_t ftprivy[simb::MCFluxs_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   15921705 bytes  File Size  =    1226479 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.98     *
*............................................................................*
*Br  112 :simb::MCFluxs_genpremixer__GenieGen.obj.ftprivz :                  *
*         | Double_t ftprivz[simb::MCFluxs_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   15921705 bytes  File Size  =    1226479 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.98     *
*............................................................................*
*Br  113 :simb::MCFluxs_genpremixer__GenieGen.obj.fbeamx :                   *
*         | Double_t fbeamx[simb::MCFluxs_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=   15921489 bytes  File Size  =    1226097 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.98     *
*............................................................................*
*Br  114 :simb::MCFluxs_genpremixer__GenieGen.obj.fbeamy :                   *
*         | Double_t fbeamy[simb::MCFluxs_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=   15921489 bytes  File Size  =    1226097 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.98     *
*............................................................................*
*Br  115 :simb::MCFluxs_genpremixer__GenieGen.obj.fbeamz :                   *
*         | Double_t fbeamz[simb::MCFluxs_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=   15921489 bytes  File Size  =    1226097 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.98     *
*............................................................................*
*Br  116 :simb::MCFluxs_genpremixer__GenieGen.obj.fbeampx :                  *
*         | Double_t fbeampx[simb::MCFluxs_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   15921705 bytes  File Size  =    1226479 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.98     *
*............................................................................*
*Br  117 :simb::MCFluxs_genpremixer__GenieGen.obj.fbeampy :                  *
*         | Double_t fbeampy[simb::MCFluxs_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   15921705 bytes  File Size  =    1226479 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.98     *
*............................................................................*
*Br  118 :simb::MCFluxs_genpremixer__GenieGen.obj.fbeampz :                  *
*         | Double_t fbeampz[simb::MCFluxs_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   15921705 bytes  File Size  =    1226479 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.98     *
*............................................................................*
*Br  119 :simb::MCFluxs_genpremixer__GenieGen.obj.fFluxType :                *
*         | Int_t fFluxType[simb::MCFluxs_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=    9367587 bytes  File Size  =    1171749 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   7.99     *
*............................................................................*
*Br  120 :simb::MCFluxs_genpremixer__GenieGen.obj.fgenx :                    *
*         | Double_t fgenx[simb::MCFluxs_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=   15921273 bytes  File Size  =   13771607 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.16     *
*............................................................................*
*Br  121 :simb::MCFluxs_genpremixer__GenieGen.obj.fgeny :                    *
*         | Double_t fgeny[simb::MCFluxs_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=   15921273 bytes  File Size  =   13420803 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.19     *
*............................................................................*
*Br  122 :simb::MCFluxs_genpremixer__GenieGen.obj.fgenz :                    *
*         | Double_t fgenz[simb::MCFluxs_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=   15921273 bytes  File Size  =    7919340 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   2.01     *
*............................................................................*
*Br  123 :simb::MCFluxs_genpremixer__GenieGen.obj.fdk2gen :                  *
*         | Double_t fdk2gen[simb::MCFluxs_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   15921705 bytes  File Size  =   13466619 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.18     *
*............................................................................*
*Br  124 :simb::MCFluxs_genpremixer__GenieGen.obj.fgen2vtx :                 *
*         | Double_t fgen2vtx[simb::MCFluxs_genpremixer__GenieGen.obj_]      *
*Entries :   695583 : Total  Size=   15921921 bytes  File Size  =   13599741 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.17     *
*............................................................................*
*Br  125 :simb::MCFluxs_genpremixer__GenieGen.obj.fFluxPos[6] :              *
*         | Float_t fFluxPos[simb::MCFluxs_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   42140192 bytes  File Size  =    1537014 *
*Baskets :      220 : Basket Size=     489984 bytes  Compression=  27.41     *
*............................................................................*
*Br  126 :simb::MCFluxs_genpremixer__GenieGen.obj.fFluxNeg[6] :              *
*         | Float_t fFluxNeg[simb::MCFluxs_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   42140192 bytes  File Size  =    1537014 *
*Baskets :      220 : Basket Size=     489984 bytes  Compression=  27.41     *
*............................................................................*
*Br  127 :simb::MCFluxs_genpremixer__GenieGen.obj.fFluxGen[6] :              *
*         | Float_t fFluxGen[simb::MCFluxs_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   42140192 bytes  File Size  =    1537014 *
*Baskets :      220 : Basket Size=     489984 bytes  Compression=  27.41     *
*............................................................................*
 *Branch  :art::RNGsnapshots_rns__GenieGen.                                   *
*Entries :   695583 : BranchElement (see below)                              *
*............................................................................*
*Br  128 :art::RNGsnapshots_rns__GenieGen.present : Bool_t                   *
*Entries :   695583 : Total  Size=     722396 bytes  File Size  =      32060 *
*Baskets :      206 : Basket Size=      20632 bytes  Compression=  22.39     *
*............................................................................*
*Br  129 :art::RNGsnapshots_rns__GenieGen.rangeSetID : UInt_t                *
*Entries :   695583 : Total  Size=    2809775 bytes  File Size  =      41643 *
*Baskets :      206 : Basket Size=      26624 bytes  Compression=  67.36     *
*............................................................................*
*Br  130 :art::RNGsnapshots_rns__GenieGen.obj : Int_t art:                   *
*         | :RNGsnapshots_rns__GenieGen.obj_                                 *
*Entries :   695583 : Total  Size=    5672656 bytes  File Size  =     967297 *
*Baskets :      612 : Basket Size=      16384 bytes  Compression=   5.82     *
*............................................................................*
*Br  131 :art::RNGsnapshots_rns__GenieGen.obj.engine_kind_ :                 *
*         | string engine_kind_[art::RNGsnapshots_rns__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=    6986607 bytes  File Size  =    1002384 *
*Baskets :      208 : Basket Size=      94208 bytes  Compression=   6.97     *
*............................................................................*
*Br  132 :art::RNGsnapshots_rns__GenieGen.obj.label_ : string label_[art:    *
*         | :RNGsnapshots_rns__GenieGen.obj_]                                *
*Entries :   695583 : Total  Size=    6985335 bytes  File Size  =    1001135 *
*Baskets :      208 : Basket Size=      94208 bytes  Compression=   6.97     *
*............................................................................*
*Br  133 :art::RNGsnapshots_rns__GenieGen.obj.state_ :                       *
*         | vector<unsigned int> state_[art::RNGsnapshots_rns__GenieGen.obj_]*
*Entries :   695583 : Total  Size=    6985335 bytes  File Size  =    1001135 *
*Baskets :      208 : Basket Size=      94208 bytes  Compression=   6.97     *
*............................................................................*
 *Branch  :simb::GTruths_genpremixer__GenieGen.                               *
*Entries :   695583 : BranchElement (see below)                              *
*............................................................................*
*Br  134 :simb::GTruths_genpremixer__GenieGen.present : Bool_t               *
*Entries :   695583 : Total  Size=     723236 bytes  File Size  =      32884 *
*Baskets :      206 : Basket Size=      20632 bytes  Compression=  21.85     *
*............................................................................*
*Br  135 :simb::GTruths_genpremixer__GenieGen.rangeSetID : UInt_t            *
*Entries :   695583 : Total  Size=    2810615 bytes  File Size  =      42467 *
*Baskets :      206 : Basket Size=      27136 bytes  Compression=  66.08     *
*............................................................................*
*Br  136 :simb::GTruths_genpremixer__GenieGen.obj : Int_t simb:              *
*         | :GTruths_genpremixer__GenieGen.obj_                              *
*Entries :   695583 : Total  Size=    5878682 bytes  File Size  =    1685316 *
*Baskets :      612 : Basket Size=      16384 bytes  Compression=   3.34     *
*............................................................................*
*Br  137 :simb::GTruths_genpremixer__GenieGen.obj.fVertex :                  *
*         | TLorentzVector fVertex[simb::GTruths_genpremixer__GenieGen.obj_] *
*Entries :   695583 : Total  Size=  107683881 bytes  File Size  =   54731818 *
*Baskets :      244 : Basket Size=    1216000 bytes  Compression=   1.97     *
*............................................................................*
*Br  138 :simb::GTruths_genpremixer__GenieGen.obj.fweight :                  *
*         | Double_t fweight[simb::GTruths_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   15921705 bytes  File Size  =    1228261 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.96     *
*............................................................................*
*Br  139 :simb::GTruths_genpremixer__GenieGen.obj.fprobability :             *
*         | Double_t fprobability[simb::GTruths_genpremixer__GenieGen.obj_]  *
*Entries :   695583 : Total  Size=   15922785 bytes  File Size  =   13718160 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.16     *
*............................................................................*
*Br  140 :simb::GTruths_genpremixer__GenieGen.obj.fXsec :                    *
*         | Double_t fXsec[simb::GTruths_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=   15921273 bytes  File Size  =   13747304 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.16     *
*............................................................................*
*Br  141 :simb::GTruths_genpremixer__GenieGen.obj.fDiffXsec :                *
*         | Double_t fDiffXsec[simb::GTruths_genpremixer__GenieGen.obj_]     *
*Entries :   695583 : Total  Size=   15922137 bytes  File Size  =   13307374 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.20     *
*............................................................................*
*Br  142 :simb::GTruths_genpremixer__GenieGen.obj.fGPhaseSpace :             *
*         | Int_t fGPhaseSpace[simb::GTruths_genpremixer__GenieGen.obj_]     *
*Entries :   695583 : Total  Size=    9368226 bytes  File Size  =    2430764 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   3.85     *
*............................................................................*
*Br  143 :simb::GTruths_genpremixer__GenieGen.obj.fProbePDG :                *
*         | Int_t fProbePDG[simb::GTruths_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=    9367587 bytes  File Size  =    1567893 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   5.97     *
*............................................................................*
*Br  144 :simb::GTruths_genpremixer__GenieGen.obj.fProbeP4 :                 *
*         | TLorentzVector fProbeP4[simb::GTruths_genpremixer__GenieGen.obj_]*
*Entries :   695583 : Total  Size=  107684129 bytes  File Size  =   55238226 *
*Baskets :      244 : Basket Size=    1216000 bytes  Compression=   1.95     *
*............................................................................*
*Br  145 :simb::GTruths_genpremixer__GenieGen.obj.fTgtP4 :                   *
*         | TLorentzVector fTgtP4[simb::GTruths_genpremixer__GenieGen.obj_]  *
*Entries :   695583 : Total  Size=  107683633 bytes  File Size  =    4012456 *
*Baskets :      244 : Basket Size=    1216000 bytes  Compression=  26.84     *
*............................................................................*
*Br  146 :simb::GTruths_genpremixer__GenieGen.obj.ftgtZ : Int_t ftgtZ[simb:  *
*         | :GTruths_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=    9366735 bytes  File Size  =    2400444 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   3.90     *
*............................................................................*
*Br  147 :simb::GTruths_genpremixer__GenieGen.obj.ftgtA : Int_t ftgtA[simb:  *
*         | :GTruths_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=    9366735 bytes  File Size  =    2402106 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   3.90     *
*............................................................................*
*Br  148 :simb::GTruths_genpremixer__GenieGen.obj.ftgtPDG :                  *
*         | Int_t ftgtPDG[simb::GTruths_genpremixer__GenieGen.obj_]          *
*Entries :   695583 : Total  Size=    9367161 bytes  File Size  =    2446702 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   3.83     *
*............................................................................*
*Br  149 :simb::GTruths_genpremixer__GenieGen.obj.fHitNucPDG :               *
*         | Int_t fHitNucPDG[simb::GTruths_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=    9367800 bytes  File Size  =    1173189 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   7.98     *
*............................................................................*
*Br  150 :simb::GTruths_genpremixer__GenieGen.obj.fHitQrkPDG :               *
*         | Int_t fHitQrkPDG[simb::GTruths_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=    9367800 bytes  File Size  =    1173189 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   7.98     *
*............................................................................*
*Br  151 :simb::GTruths_genpremixer__GenieGen.obj.fIsSeaQuark :              *
*         | Bool_t fIsSeaQuark[simb::GTruths_genpremixer__GenieGen.obj_]     *
*Entries :   695583 : Total  Size=    4452133 bytes  File Size  =    1396866 *
*Baskets :      207 : Basket Size=      72704 bytes  Compression=   3.18     *
*............................................................................*
*Br  152 :simb::GTruths_genpremixer__GenieGen.obj.fHitNucP4 :                *
*         | TLorentzVector fHitNucP4[simb:                                   *
*         | :GTruths_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=  107684377 bytes  File Size  =   49652009 *
*Baskets :      244 : Basket Size=    1216000 bytes  Compression=   2.17     *
*............................................................................*
*Br  153 :simb::GTruths_genpremixer__GenieGen.obj.fHitNucPos :               *
*         | Double_t fHitNucPos[simb::GTruths_genpremixer__GenieGen.obj_]    *
*Entries :   695583 : Total  Size=   15922353 bytes  File Size  =    4306200 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   3.70     *
*............................................................................*
*Br  154 :simb::GTruths_genpremixer__GenieGen.obj.fGscatter :                *
*         | Int_t fGscatter[simb::GTruths_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=    9367587 bytes  File Size  =    2342766 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   4.00     *
*............................................................................*
*Br  155 :simb::GTruths_genpremixer__GenieGen.obj.fGint : Int_t fGint[simb:  *
*         | :GTruths_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=    9366735 bytes  File Size  =    1975396 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   4.74     *
*............................................................................*
*Br  156 :simb::GTruths_genpremixer__GenieGen.obj.fgQ2 : Double_t fgQ2[simb: *
*         | :GTruths_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=   15921057 bytes  File Size  =   13796087 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.15     *
*............................................................................*
*Br  157 :simb::GTruths_genpremixer__GenieGen.obj.fgq2 : Double_t fgq2[simb: *
*         | :GTruths_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=   15921057 bytes  File Size  =   13790376 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.15     *
*............................................................................*
*Br  158 :simb::GTruths_genpremixer__GenieGen.obj.fgW : Double_t fgW[simb:   *
*         | :GTruths_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=   15920841 bytes  File Size  =   12002862 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.33     *
*............................................................................*
*Br  159 :simb::GTruths_genpremixer__GenieGen.obj.fgT : Double_t fgT[simb:   *
*         | :GTruths_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=   15920841 bytes  File Size  =    1397712 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  11.39     *
*............................................................................*
*Br  160 :simb::GTruths_genpremixer__GenieGen.obj.fgX : Double_t fgX[simb:   *
*         | :GTruths_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=   15920841 bytes  File Size  =   13632635 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.17     *
*............................................................................*
*Br  161 :simb::GTruths_genpremixer__GenieGen.obj.fgY : Double_t fgY[simb:   *
*         | :GTruths_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=   15920841 bytes  File Size  =   13659520 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.17     *
*............................................................................*
*Br  162 :simb::GTruths_genpremixer__GenieGen.obj.fgWrun :                   *
*         | Double_t fgWrun[simb::GTruths_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=   15921489 bytes  File Size  =    7438541 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   2.14     *
*............................................................................*
*Br  163 :simb::GTruths_genpremixer__GenieGen.obj.fFSleptonP4 :              *
*         | TLorentzVector fFSleptonP4[simb:                                 *
*         | :GTruths_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=  107684873 bytes  File Size  =    2982921 *
*Baskets :      244 : Basket Size=    1216000 bytes  Compression=  36.10     *
*............................................................................*
*Br  164 :simb::GTruths_genpremixer__GenieGen.obj.fFShadSystP4 :             *
*         | TLorentzVector fFShadSystP4[simb:                                *
*         | :GTruths_genpremixer__GenieGen.obj_]                             *
*Entries :   695583 : Total  Size=  107685121 bytes  File Size  =   34838572 *
*Baskets :      244 : Basket Size=    1216512 bytes  Compression=   3.09     *
*............................................................................*
*Br  165 :simb::GTruths_genpremixer__GenieGen.obj.fIsCharm :                 *
*         | Bool_t fIsCharm[simb::GTruths_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=    4451500 bytes  File Size  =    1229893 *
*Baskets :      207 : Basket Size=      72704 bytes  Compression=   3.62     *
*............................................................................*
*Br  166 :simb::GTruths_genpremixer__GenieGen.obj.fCharmHadronPdg :          *
*         | Int_t fCharmHadronPdg[simb::GTruths_genpremixer__GenieGen.obj_]  *
*Entries :   695583 : Total  Size=    9368865 bytes  File Size  =    1172928 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   7.98     *
*............................................................................*
*Br  167 :simb::GTruths_genpremixer__GenieGen.obj.fIsStrange :               *
*         | Bool_t fIsStrange[simb::GTruths_genpremixer__GenieGen.obj_]      *
*Entries :   695583 : Total  Size=    4451922 bytes  File Size  =    1184592 *
*Baskets :      207 : Basket Size=      72704 bytes  Compression=   3.75     *
*............................................................................*
*Br  168 :simb::GTruths_genpremixer__GenieGen.obj.fStrangeHadronPdg :        *
*         | Int_t fStrangeHadronPdg[simb::GTruths_genpremixer__GenieGen.obj_]*
*Entries :   695583 : Total  Size=    9369291 bytes  File Size  =    1174979 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   7.97     *
*............................................................................*
*Br  169 :simb::GTruths_genpremixer__GenieGen.obj.fNumProton :               *
*         | Int_t fNumProton[simb::GTruths_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=    9367800 bytes  File Size  =    1187481 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   7.88     *
*............................................................................*
*Br  170 :simb::GTruths_genpremixer__GenieGen.obj.fNumNeutron :              *
*         | Int_t fNumNeutron[simb::GTruths_genpremixer__GenieGen.obj_]      *
*Entries :   695583 : Total  Size=    9368013 bytes  File Size  =    1155990 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   8.10     *
*............................................................................*
*Br  171 :simb::GTruths_genpremixer__GenieGen.obj.fNumPi0 :                  *
*         | Int_t fNumPi0[simb::GTruths_genpremixer__GenieGen.obj_]          *
*Entries :   695583 : Total  Size=    9367161 bytes  File Size  =    1181420 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   7.92     *
*............................................................................*
*Br  172 :simb::GTruths_genpremixer__GenieGen.obj.fNumPiPlus :               *
*         | Int_t fNumPiPlus[simb::GTruths_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=    9367800 bytes  File Size  =    1204778 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   7.77     *
*............................................................................*
*Br  173 :simb::GTruths_genpremixer__GenieGen.obj.fNumPiMinus :              *
*         | Int_t fNumPiMinus[simb::GTruths_genpremixer__GenieGen.obj_]      *
*Entries :   695583 : Total  Size=    9368013 bytes  File Size  =    1161023 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   8.06     *
*............................................................................*
*Br  174 :simb::GTruths_genpremixer__GenieGen.obj.fNumSingleGammas :         *
*         | Int_t fNumSingleGammas[simb::GTruths_genpremixer__GenieGen.obj_] *
*Entries :   695583 : Total  Size=    9369078 bytes  File Size  =    1167696 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   8.02     *
*............................................................................*
*Br  175 :simb::GTruths_genpremixer__GenieGen.obj.fNumRho0 :                 *
*         | Int_t fNumRho0[simb::GTruths_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=    9367374 bytes  File Size  =    1166317 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   8.03     *
*............................................................................*
*Br  176 :simb::GTruths_genpremixer__GenieGen.obj.fNumRhoPlus :              *
*         | Int_t fNumRhoPlus[simb::GTruths_genpremixer__GenieGen.obj_]      *
*Entries :   695583 : Total  Size=    9368013 bytes  File Size  =    1155990 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   8.10     *
*............................................................................*
*Br  177 :simb::GTruths_genpremixer__GenieGen.obj.fNumRhoMinus :             *
*         | Int_t fNumRhoMinus[simb::GTruths_genpremixer__GenieGen.obj_]     *
*Entries :   695583 : Total  Size=    9368226 bytes  File Size  =    1166858 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   8.02     *
*............................................................................*
*Br  178 :simb::GTruths_genpremixer__GenieGen.obj.fResNum :                  *
*         | Int_t fResNum[simb::GTruths_genpremixer__GenieGen.obj_]          *
*Entries :   695583 : Total  Size=    9367161 bytes  File Size  =    2485438 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   3.77     *
*............................................................................*
*Br  179 :simb::GTruths_genpremixer__GenieGen.obj.fDecayMode :               *
*         | Int_t fDecayMode[simb::GTruths_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=    9367800 bytes  File Size  =    1167464 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   8.02     *
*............................................................................*
*Br  180 :simb::GTruths_genpremixer__GenieGen.obj.fFinalQuarkPdg :           *
*         | Int_t fFinalQuarkPdg[simb::GTruths_genpremixer__GenieGen.obj_]   *
*Entries :   695583 : Total  Size=    9368652 bytes  File Size  =    1167284 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   8.02     *
*............................................................................*
*Br  181 :simb::GTruths_genpremixer__GenieGen.obj.fFinalLeptonPdg :          *
*         | Int_t fFinalLeptonPdg[simb::GTruths_genpremixer__GenieGen.obj_]  *
*Entries :   695583 : Total  Size=    9368865 bytes  File Size  =    1157357 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   8.09     *
*............................................................................*
 *Branch  :simb::MCFluxsimb::MCTruthvoidart::Assns_genpremixer__GenieGen.     *
*Entries :   695583 : BranchElement (see below)                              *
*............................................................................*
*Br  182 :simb::MCFluxsimb::MCTruthvoidart::Assns_genpremixer__GenieGen.present : *
*         | Bool_t                                                           *
*Entries :   695583 : Total  Size=     728696 bytes  File Size  =      38240 *
*Baskets :      206 : Basket Size=      20632 bytes  Compression=  18.93     *
*............................................................................*
*Br  183 :simb::MCFluxsimb::MCTruthvoidart::Assns_genpremixer__GenieGen.rangeSetID : *
*         | UInt_t                                                           *
*Entries :   695583 : Total  Size=    2816075 bytes  File Size  =      47823 *
*Baskets :      206 : Basket Size=      27136 bytes  Compression=  58.79     *
*............................................................................*
*Br  184 :simb::MCFluxsimb::MCTruthvoidart::Assns_genpremixer__GenieGen.obj : *
*         | art::Assns<simb::MCTruth,simb::MCFlux,void>                      *
*Entries :   695583 : Total  Size=  131740875 bytes  File Size  =    5423988 *
*Baskets :      251 : Basket Size=    1435136 bytes  Compression=  24.29     *
*............................................................................*
 *Branch  :sumdata::SpillData_genpremixer__GenieGen.                          *
*Entries :   695583 : BranchElement (see below)                              *
*............................................................................*
*Br  185 :sumdata::SpillData_genpremixer__GenieGen.present : Bool_t          *
*Entries :   695583 : Total  Size=     724286 bytes  File Size  =      33914 *
*Baskets :      206 : Basket Size=      20632 bytes  Compression=  21.22     *
*............................................................................*
*Br  186 :sumdata::SpillData_genpremixer__GenieGen.rangeSetID : UInt_t       *
*Entries :   695583 : Total  Size=    2811665 bytes  File Size  =      43497 *
*Baskets :      206 : Basket Size=      27136 bytes  Compression=  64.53     *
*............................................................................*
*Br  187 :sumdata::SpillData_genpremixer__GenieGen.obj :                     *
*Entries :   695583 : Total  Size=      85402 bytes  One basket in memory    *
*Baskets :        0 : Basket Size=      16384 bytes  Compression=   1.00     *
*............................................................................*
*Br  188 :sumdata::SpillData_genpremixer__GenieGen.obj.spilltimesec : ULong_t*
*Entries :   695583 : Total  Size=    5595403 bytes  File Size  =      57083 *
*Baskets :      207 : Basket Size=      53248 bytes  Compression=  97.94     *
*............................................................................*
*Br  189 :sumdata::SpillData_genpremixer__GenieGen.obj.spilltimensec :       *
*         | ULong_t                                                          *
*Entries :   695583 : Total  Size=    5595614 bytes  File Size  =      57290 *
*Baskets :      207 : Basket Size=      53248 bytes  Compression=  97.59     *
*............................................................................*
*Br  190 :sumdata::SpillData_genpremixer__GenieGen.obj.gpsspilltimesec :     *
*         | ULong_t                                                          *
*Entries :   695583 : Total  Size=    5596036 bytes  File Size  =      57706 *
*Baskets :      207 : Basket Size=      53248 bytes  Compression=  96.89     *
*............................................................................*
*Br  191 :sumdata::SpillData_genpremixer__GenieGen.obj.gpsspilltimensec :    *
*         | ULong_t                                                          *
*Entries :   695583 : Total  Size=    5596247 bytes  File Size  =      57913 *
*Baskets :      207 : Basket Size=      53248 bytes  Compression=  96.55     *
*............................................................................*
*Br  192 :sumdata::SpillData_genpremixer__GenieGen.obj.deltaspilltimensec :  *
*         | Long64_t                                                         *
*Entries :   695583 : Total  Size=    5596669 bytes  File Size  =      58327 *
*Baskets :      207 : Basket Size=      53248 bytes  Compression=  95.87     *
*............................................................................*
*Br  193 :sumdata::SpillData_genpremixer__GenieGen.obj.spillpot : Double_t   *
*Entries :   695583 : Total  Size=    5594559 bytes  File Size  =      78013 *
*Baskets :      207 : Basket Size=      53248 bytes  Compression=  71.65     *
*............................................................................*
*Br  194 :sumdata::SpillData_genpremixer__GenieGen.obj.hornI : Double_t      *
*Entries :   695583 : Total  Size=    5593926 bytes  File Size  =      63812 *
*Baskets :      207 : Basket Size=      53248 bytes  Compression=  87.59     *
*............................................................................*
*Br  195 :sumdata::SpillData_genpremixer__GenieGen.obj.isRHC : Bool_t        *
*Entries :   695583 : Total  Size=     724706 bytes  File Size  =      34325 *
*Baskets :      206 : Basket Size=      20632 bytes  Compression=  20.98     *
*............................................................................*
*Br  196 :sumdata::SpillData_genpremixer__GenieGen.obj.is0HC : Bool_t        *
*Entries :   695583 : Total  Size=     724706 bytes  File Size  =      34325 *
*Baskets :      206 : Basket Size=      20632 bytes  Compression=  20.98     *
*............................................................................*
*Br  197 :sumdata::SpillData_genpremixer__GenieGen.obj.intx : vector<double> *
*Entries :   695583 : Total  Size=    9769161 bytes  File Size  =    1060515 *
*Baskets :      209 : Basket Size=     120320 bytes  Compression=   9.21     *
*............................................................................*
*Br  198 :sumdata::SpillData_genpremixer__GenieGen.obj.inty : vector<double> *
*Entries :   695583 : Total  Size=    9769161 bytes  File Size  =    1060515 *
*Baskets :      209 : Basket Size=     120320 bytes  Compression=   9.21     *
*............................................................................*
*Br  199 :sumdata::SpillData_genpremixer__GenieGen.obj.bposx : vector<double>*
*Entries :   695583 : Total  Size=    9769374 bytes  File Size  =    1061339 *
*Baskets :      209 : Basket Size=     120320 bytes  Compression=   9.20     *
*............................................................................*
*Br  200 :sumdata::SpillData_genpremixer__GenieGen.obj.bposy : vector<double>*
*Entries :   695583 : Total  Size=    9769374 bytes  File Size  =    1061339 *
*Baskets :      209 : Basket Size=     120320 bytes  Compression=   9.20     *
*............................................................................*
*Br  201 :sumdata::SpillData_genpremixer__GenieGen.obj.posx : Double_t       *
*Entries :   695583 : Total  Size=    5593715 bytes  File Size  =      55430 *
*Baskets :      207 : Basket Size=      53248 bytes  Compression= 100.83     *
*............................................................................*
*Br  202 :sumdata::SpillData_genpremixer__GenieGen.obj.posy : Double_t       *
*Entries :   695583 : Total  Size=    5593715 bytes  File Size  =      55430 *
*Baskets :      207 : Basket Size=      53248 bytes  Compression= 100.83     *
*............................................................................*
*Br  203 :sumdata::SpillData_genpremixer__GenieGen.obj.widthx : Double_t     *
*Entries :   695583 : Total  Size=    5594137 bytes  File Size  =      63598 *
*Baskets :      207 : Basket Size=      53248 bytes  Compression=  87.89     *
*............................................................................*
*Br  204 :sumdata::SpillData_genpremixer__GenieGen.obj.widthy : Double_t     *
*Entries :   695583 : Total  Size=    5594137 bytes  File Size  =      63598 *
*Baskets :      207 : Basket Size=      53248 bytes  Compression=  87.89     *
*............................................................................*
*Br  205 :sumdata::SpillData_genpremixer__GenieGen.obj.goodbeam : Bool_t     *
*Entries :   695583 : Total  Size=     725336 bytes  File Size  =      34944 *
*Baskets :      206 : Basket Size=      20632 bytes  Compression=  20.62     *
*............................................................................*
 *Branch  :bsim::Dk2Nus_genpremixer__GenieGen.                                *
*Entries :   695583 : BranchElement (see below)                              *
*............................................................................*
*Br  206 :bsim::Dk2Nus_genpremixer__GenieGen.present : Bool_t                *
*Entries :   695583 : Total  Size=     723026 bytes  File Size  =      32678 *
*Baskets :      206 : Basket Size=      20632 bytes  Compression=  21.99     *
*............................................................................*
*Br  207 :bsim::Dk2Nus_genpremixer__GenieGen.rangeSetID : UInt_t             *
*Entries :   695583 : Total  Size=    2810405 bytes  File Size  =      42261 *
*Baskets :      206 : Basket Size=      27136 bytes  Compression=  66.39     *
*............................................................................*
*Br  208 :bsim::Dk2Nus_genpremixer__GenieGen.obj : Int_t bsim:               *
*         | :Dk2Nus_genpremixer__GenieGen.obj_                               *
*Entries :   695583 : Total  Size=    5879812 bytes  File Size  =    1679095 *
*Baskets :      612 : Basket Size=      16384 bytes  Compression=   3.36     *
*............................................................................*
*Br  209 :bsim::Dk2Nus_genpremixer__GenieGen.obj.job : Int_t job[bsim:       *
*         | :Dk2Nus_genpremixer__GenieGen.obj_]                              *
*Entries :   695583 : Total  Size=    9366094 bytes  File Size  =    1277529 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   7.33     *
*............................................................................*
*Br  210 :bsim::Dk2Nus_genpremixer__GenieGen.obj.potnum : Int_t potnum[bsim: *
*         | :Dk2Nus_genpremixer__GenieGen.obj_]                              *
*Entries :   695583 : Total  Size=    9366733 bytes  File Size  =    6238494 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   1.50     *
*............................................................................*
*Br  211 :bsim::Dk2Nus_genpremixer__GenieGen.obj.jobindx :                   *
*         | Int_t jobindx[bsim::Dk2Nus_genpremixer__GenieGen.obj_]           *
*Entries :   695583 : Total  Size=    9366946 bytes  File Size  =    1166421 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   8.03     *
*............................................................................*
*Br  212 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.norig :               *
*         | Int_t norig[bsim::Dk2Nus_genpremixer__GenieGen.obj_]             *
*Entries :   695583 : Total  Size=    9367786 bytes  File Size  =    1909302 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   4.90     *
*............................................................................*
*Br  213 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.ndecay :              *
*         | Int_t ndecay[bsim::Dk2Nus_genpremixer__GenieGen.obj_]            *
*Entries :   695583 : Total  Size=    9367999 bytes  File Size  =    2175777 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   4.30     *
*............................................................................*
*Br  214 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.ntype :               *
*         | Int_t ntype[bsim::Dk2Nus_genpremixer__GenieGen.obj_]             *
*Entries :   695583 : Total  Size=    9367786 bytes  File Size  =    1567952 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   5.97     *
*............................................................................*
*Br  215 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.vx : Double_t vx[bsim:*
*         | :Dk2Nus_genpremixer__GenieGen.obj_]                              *
*Entries :   695583 : Total  Size=   15921691 bytes  File Size  =   13819033 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.15     *
*............................................................................*
*Br  216 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.vy : Double_t vy[bsim:*
*         | :Dk2Nus_genpremixer__GenieGen.obj_]                              *
*Entries :   695583 : Total  Size=   15921691 bytes  File Size  =   13850692 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.15     *
*............................................................................*
*Br  217 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.vz : Double_t vz[bsim:*
*         | :Dk2Nus_genpremixer__GenieGen.obj_]                              *
*Entries :   695583 : Total  Size=   15921691 bytes  File Size  =   13660693 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.17     *
*............................................................................*
*Br  218 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.pdpx :                *
*         | Double_t pdpx[bsim::Dk2Nus_genpremixer__GenieGen.obj_]           *
*Entries :   695583 : Total  Size=   15922123 bytes  File Size  =   13775331 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.16     *
*............................................................................*
*Br  219 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.pdpy :                *
*         | Double_t pdpy[bsim::Dk2Nus_genpremixer__GenieGen.obj_]           *
*Entries :   695583 : Total  Size=   15922123 bytes  File Size  =   13788071 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.15     *
*............................................................................*
*Br  220 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.pdpz :                *
*         | Double_t pdpz[bsim::Dk2Nus_genpremixer__GenieGen.obj_]           *
*Entries :   695583 : Total  Size=   15922123 bytes  File Size  =   13637062 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.17     *
*............................................................................*
*Br  221 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.ppdxdz :              *
*         | Double_t ppdxdz[bsim::Dk2Nus_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=   15922555 bytes  File Size  =   13777545 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.16     *
*............................................................................*
*Br  222 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.ppdydz :              *
*         | Double_t ppdydz[bsim::Dk2Nus_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=   15922555 bytes  File Size  =   13779293 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.16     *
*............................................................................*
*Br  223 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.pppz :                *
*         | Double_t pppz[bsim::Dk2Nus_genpremixer__GenieGen.obj_]           *
*Entries :   695583 : Total  Size=   15922123 bytes  File Size  =   13635519 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.17     *
*............................................................................*
*Br  224 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.ppenergy :            *
*         | Double_t ppenergy[bsim::Dk2Nus_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   15922987 bytes  File Size  =   13635785 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.17     *
*............................................................................*
*Br  225 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.ppmedium :            *
*         | Int_t ppmedium[bsim::Dk2Nus_genpremixer__GenieGen.obj_]          *
*Entries :   695583 : Total  Size=    9368425 bytes  File Size  =    1167021 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   8.02     *
*............................................................................*
*Br  226 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.ptype :               *
*         | Int_t ptype[bsim::Dk2Nus_genpremixer__GenieGen.obj_]             *
*Entries :   695583 : Total  Size=    9367786 bytes  File Size  =    2213578 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   4.23     *
*............................................................................*
*Br  227 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.muparpx :             *
*         | Double_t muparpx[bsim::Dk2Nus_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=   15922771 bytes  File Size  =    1388384 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  11.47     *
*............................................................................*
*Br  228 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.muparpy :             *
*         | Double_t muparpy[bsim::Dk2Nus_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=   15922771 bytes  File Size  =    1388167 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  11.47     *
*............................................................................*
*Br  229 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.muparpz :             *
*         | Double_t muparpz[bsim::Dk2Nus_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=   15922771 bytes  File Size  =    1386850 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  11.48     *
*............................................................................*
*Br  230 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.mupare :              *
*         | Double_t mupare[bsim::Dk2Nus_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=   15922555 bytes  File Size  =    1373321 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  11.59     *
*............................................................................*
*Br  231 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.necm :                *
*         | Double_t necm[bsim::Dk2Nus_genpremixer__GenieGen.obj_]           *
*Entries :   695583 : Total  Size=   15922123 bytes  File Size  =    5373022 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   2.96     *
*............................................................................*
*Br  232 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.nimpwt :              *
*         | Double_t nimpwt[bsim::Dk2Nus_genpremixer__GenieGen.obj_]         *
*Entries :   695583 : Total  Size=   15922555 bytes  File Size  =    4555786 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   3.49     *
*............................................................................*
*Br  233 :bsim::Dk2Nus_genpremixer__GenieGen.obj.decay.sumnimpwt2 :          *
*         | Double_t sumnimpwt2[bsim::Dk2Nus_genpremixer__GenieGen.obj_]     *
*Entries :   695583 : Total  Size=   15923419 bytes  File Size  =    1229198 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.95     *
*............................................................................*
*Br  234 :bsim::Dk2Nus_genpremixer__GenieGen.obj.nuray : vector<bsim:        *
*         | :NuRay> nuray[bsim::Dk2Nus_genpremixer__GenieGen.obj_]           *
*Entries :   695583 : Total  Size=  670376647 bytes  File Size  =  636110755 *
*Baskets :      452 : Basket Size=    7439360 bytes  Compression=   1.05     *
*............................................................................*
*Br  235 :bsim::Dk2Nus_genpremixer__GenieGen.obj.ancestor : vector<bsim:     *
*         | :Ancestor> ancestor[bsim::Dk2Nus_genpremixer__GenieGen.obj_]     *
*Entries :   695583 : Total  Size= 1046287949 bytes  File Size  =  513738241 *
*Baskets :      597 : Basket Size=   10316471 bytes  Compression=   2.04     *
*............................................................................*
*Br  236 :bsim::Dk2Nus_genpremixer__GenieGen.obj.ppvx : Double_t ppvx[bsim:  *
*         | :Dk2Nus_genpremixer__GenieGen.obj_]                              *
*Entries :   695583 : Total  Size=   15920839 bytes  File Size  =   13831513 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.15     *
*............................................................................*
*Br  237 :bsim::Dk2Nus_genpremixer__GenieGen.obj.ppvy : Double_t ppvy[bsim:  *
*         | :Dk2Nus_genpremixer__GenieGen.obj_]                              *
*Entries :   695583 : Total  Size=   15920839 bytes  File Size  =   13833275 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.15     *
*............................................................................*
*Br  238 :bsim::Dk2Nus_genpremixer__GenieGen.obj.ppvz : Double_t ppvz[bsim:  *
*         | :Dk2Nus_genpremixer__GenieGen.obj_]                              *
*Entries :   695583 : Total  Size=   15920839 bytes  File Size  =   13670550 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.16     *
*............................................................................*
*Br  239 :bsim::Dk2Nus_genpremixer__GenieGen.obj.tgtexit.tvx :               *
*         | Double_t tvx[bsim::Dk2Nus_genpremixer__GenieGen.obj_]            *
*Entries :   695583 : Total  Size=   15922335 bytes  File Size  =    8982049 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.77     *
*............................................................................*
*Br  240 :bsim::Dk2Nus_genpremixer__GenieGen.obj.tgtexit.tvy :               *
*         | Double_t tvy[bsim::Dk2Nus_genpremixer__GenieGen.obj_]            *
*Entries :   695583 : Total  Size=   15922335 bytes  File Size  =   10851004 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.47     *
*............................................................................*
*Br  241 :bsim::Dk2Nus_genpremixer__GenieGen.obj.tgtexit.tvz :               *
*         | Double_t tvz[bsim::Dk2Nus_genpremixer__GenieGen.obj_]            *
*Entries :   695583 : Total  Size=   15922335 bytes  File Size  =   10835974 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.47     *
*............................................................................*
*Br  242 :bsim::Dk2Nus_genpremixer__GenieGen.obj.tgtexit.tpx :               *
*         | Double_t tpx[bsim::Dk2Nus_genpremixer__GenieGen.obj_]            *
*Entries :   695583 : Total  Size=   15922335 bytes  File Size  =   13484482 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.18     *
*............................................................................*
*Br  243 :bsim::Dk2Nus_genpremixer__GenieGen.obj.tgtexit.tpy :               *
*         | Double_t tpy[bsim::Dk2Nus_genpremixer__GenieGen.obj_]            *
*Entries :   695583 : Total  Size=   15922335 bytes  File Size  =   13485247 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.18     *
*............................................................................*
*Br  244 :bsim::Dk2Nus_genpremixer__GenieGen.obj.tgtexit.tpz :               *
*         | Double_t tpz[bsim::Dk2Nus_genpremixer__GenieGen.obj_]            *
*Entries :   695583 : Total  Size=   15922335 bytes  File Size  =   13342079 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.19     *
*............................................................................*
*Br  245 :bsim::Dk2Nus_genpremixer__GenieGen.obj.tgtexit.tptype :            *
*         | Int_t tptype[bsim::Dk2Nus_genpremixer__GenieGen.obj_]            *
*Entries :   695583 : Total  Size=    9368421 bytes  File Size  =    2433232 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   3.85     *
*............................................................................*
*Br  246 :bsim::Dk2Nus_genpremixer__GenieGen.obj.tgtexit.tgen :              *
*         | Int_t tgen[bsim::Dk2Nus_genpremixer__GenieGen.obj_]              *
*Entries :   695583 : Total  Size=    9367995 bytes  File Size  =    2252275 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   4.16     *
*............................................................................*
*Br  247 :bsim::Dk2Nus_genpremixer__GenieGen.obj.traj : vector<bsim:         *
*         | :Traj> traj[bsim::Dk2Nus_genpremixer__GenieGen.obj_]             *
*Entries :   695583 : Total  Size=  801465011 bytes  File Size  =  525950695 *
*Baskets :      499 : Basket Size=    8890368 bytes  Compression=   1.52     *
*............................................................................*
*Br  248 :bsim::Dk2Nus_genpremixer__GenieGen.obj.flagbits :                  *
*         | Int_t flagbits[bsim::Dk2Nus_genpremixer__GenieGen.obj_]          *
*Entries :   695583 : Total  Size=    9367159 bytes  File Size  =    1249307 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   7.49     *
*............................................................................*
*Br  249 :bsim::Dk2Nus_genpremixer__GenieGen.obj.vint :                      *
*         | vector<int> vint[bsim::Dk2Nus_genpremixer__GenieGen.obj_]        *
*Entries :   695583 : Total  Size=   26648869 bytes  File Size  =    4829443 *
*Baskets :      215 : Basket Size=     311808 bytes  Compression=   5.52     *
*............................................................................*
*Br  250 :bsim::Dk2Nus_genpremixer__GenieGen.obj.vdbl :                      *
*         | vector<double> vdbl[bsim::Dk2Nus_genpremixer__GenieGen.obj_]     *
*Entries :   695583 : Total  Size=  170846473 bytes  File Size  =   50963338 *
*Baskets :      266 : Basket Size=    1908224 bytes  Compression=   3.35     *
*............................................................................*
 *Branch  :bsim::NuChoices_genpremixer__GenieGen.                             *
*Entries :   695583 : BranchElement (see below)                              *
*............................................................................*
*Br  251 :bsim::NuChoices_genpremixer__GenieGen.present : Bool_t             *
*Entries :   695583 : Total  Size=     723656 bytes  File Size  =      33296 *
*Baskets :      206 : Basket Size=      20632 bytes  Compression=  21.60     *
*............................................................................*
*Br  252 :bsim::NuChoices_genpremixer__GenieGen.rangeSetID : UInt_t          *
*Entries :   695583 : Total  Size=    2811035 bytes  File Size  =      42879 *
*Baskets :      206 : Basket Size=      27136 bytes  Compression=  65.45     *
*............................................................................*
*Br  253 :bsim::NuChoices_genpremixer__GenieGen.obj : Int_t bsim:            *
*         | :NuChoices_genpremixer__GenieGen.obj_                            *
*Entries :   695583 : Total  Size=    5703129 bytes  File Size  =    1681398 *
*Baskets :      612 : Basket Size=      16384 bytes  Compression=   3.35     *
*............................................................................*
*Br  254 :bsim::NuChoices_genpremixer__GenieGen.obj.pdgNu : Int_t pdgNu[bsim:*
*         | :NuChoices_genpremixer__GenieGen.obj_]                           *
*Entries :   695583 : Total  Size=    9367165 bytes  File Size  =    1557470 *
*Baskets :      209 : Basket Size=     126976 bytes  Compression=   6.01     *
*............................................................................*
*Br  255 :bsim::NuChoices_genpremixer__GenieGen.obj.xyWgt :                  *
*         | Double_t xyWgt[bsim::NuChoices_genpremixer__GenieGen.obj_]       *
*Entries :   695583 : Total  Size=   15921709 bytes  File Size  =   13692065 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   1.16     *
*............................................................................*
*Br  256 :bsim::NuChoices_genpremixer__GenieGen.obj.impWgt :                 *
*         | Double_t impWgt[bsim::NuChoices_genpremixer__GenieGen.obj_]      *
*Entries :   695583 : Total  Size=   15921925 bytes  File Size  =    4575359 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=   3.48     *
*............................................................................*
*Br  257 :bsim::NuChoices_genpremixer__GenieGen.obj.impWgtSum2 :             *
*         | Double_t impWgtSum2[bsim::NuChoices_genpremixer__GenieGen.obj_]  *
*Entries :   695583 : Total  Size=   15922789 bytes  File Size  =    1227914 *
*Baskets :      212 : Basket Size=     199680 bytes  Compression=  12.96     *
*............................................................................*
*Br  258 :bsim::NuChoices_genpremixer__GenieGen.obj.p4NuBeam :               *
*         | TLorentzVector p4NuBeam[bsim:                                    *
*         | :NuChoices_genpremixer__GenieGen.obj_]                           *
*Entries :   695583 : Total  Size=  107684629 bytes  File Size  =   53690728 *
*Baskets :      244 : Basket Size=    1216000 bytes  Compression=   2.01     *
*............................................................................*
*Br  259 :bsim::NuChoices_genpremixer__GenieGen.obj.x4NuBeam :               *
*         | TLorentzVector x4NuBeam[bsim:                                    *
*         | :NuChoices_genpremixer__GenieGen.obj_]                           *
*Entries :   695583 : Total  Size=  107684629 bytes  File Size  =   50870313 *
*Baskets :      244 : Basket Size=    1216000 bytes  Compression=   2.12     *
*............................................................................*
*Br  260 :bsim::NuChoices_genpremixer__GenieGen.obj.p4NuUser :               *
*         | TLorentzVector p4NuUser[bsim:                                    *
*         | :NuChoices_genpremixer__GenieGen.obj_]                           *
*Entries :   695583 : Total  Size=  107684629 bytes  File Size  =   55048675 *
*Baskets :      244 : Basket Size=    1216000 bytes  Compression=   1.96     *
*............................................................................*
*Br  261 :bsim::NuChoices_genpremixer__GenieGen.obj.x4NuUser :               *
*         | TLorentzVector x4NuUser[bsim:                                    *
*         | :NuChoices_genpremixer__GenieGen.obj_]                           *
*Entries :   695583 : Total  Size=  107684629 bytes  File Size  =   48094923 *
*Baskets :      244 : Basket Size=    1216000 bytes  Compression=   2.24     *
*............................................................................*
```
