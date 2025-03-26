#include "TCanvas.h"
#include "TH1D.h"
#include "TH1.h"
#include "TFile.h"
#include "TLegend.h"
#include "TLine.h"
#include "TROOT.h"
#include "TStyle.h"
#include "TLatex.h"
// Compare GENIE tag N24_20i_02_11b  Hadronic invariant mass W, in GeV.
// Using mean free path -3sigma sample versus nominal sample.
// Author : Biao Wang 
void compareWHistogramsFromGENIE() {
	// Defaults to classic style, but that's OK, we can fix it
	TStyle* novaStyle = new TStyle("novaStyle", "NOvA Style");

	// Centre title
	novaStyle->SetTitleAlign(22);
	novaStyle->SetTitleX(.45);
	novaStyle->SetTitleY(.95);
	novaStyle->SetTitleBorderSize(0);

	// No info box
	// novaStyle->SetOptStat(0);

	//set the background color to white
	novaStyle->SetFillColor(10);
	novaStyle->SetFrameFillColor(10);
	novaStyle->SetCanvasColor(10);
	novaStyle->SetPadColor(10);
	novaStyle->SetTitleFillColor(0);
	novaStyle->SetStatColor(10);

	// Don't put a colored frame around the plots
	novaStyle->SetFrameBorderMode(0);
	novaStyle->SetCanvasBorderMode(0);
	novaStyle->SetPadBorderMode(0);

	// Set the default line color for a fit function to be red
	novaStyle->SetFuncColor(kRed);

	// Marker settings
	//  novaStyle->SetMarkerStyle(kFullCircle);

	// No border on legends
	novaStyle->SetLegendBorderSize(0);

	// Disabled for violating NOvA style guidelines
	// Scientific notation on axes
	//  TGaxis::SetMaxDigits(3);

	// Axis titles
	novaStyle->SetTitleSize(.055, "xyz");
	novaStyle->SetTitleOffset(.8, "xyz");
	// More space for y-axis to avoid clashing with big numbers
	//  novaStyle->SetTitleOffset(.9, "y");
	novaStyle->SetTitleOffset(.9, "y");
	// This applies the same settings to the overall plot title
	novaStyle->SetTitleSize(.055, "");
	novaStyle->SetTitleOffset(.8, "");
	// Axis labels (numbering)
	novaStyle->SetLabelSize(.05, "xyz");
	novaStyle->SetLabelOffset(.005, "xyz");

	// Thicker lines
	novaStyle->SetHistLineWidth(3);
	novaStyle->SetFrameLineWidth(3);
	novaStyle->SetFuncWidth(3);

	// Set the number of tick marks to show
	novaStyle->SetNdivisions(506, "xyz");

	// Set the tick mark style
	novaStyle->SetPadTickX(1);
	novaStyle->SetPadTickY(1);

	//png scale
	// novaStyle->SetImageScaling(13.);

	// Fonts 

	const int kNovaFont = 132;
	novaStyle->SetStatFont(kNovaFont);
	novaStyle->SetLabelFont(kNovaFont, "xyz");
	novaStyle->SetTitleFont(kNovaFont, "xyz");
	novaStyle->SetTitleFont(kNovaFont, ""); // Apply same setting to plot titles
	novaStyle->SetTextFont(kNovaFont);
	novaStyle->SetLegendFont(kNovaFont);

	gROOT->SetStyle("novaStyle");
	gStyle->SetOptStat(0);
	// 
	// Create a TChain
	TChain downChain("Events");
	TChain nomChain("Events");

	downChain.Add("fhc62down.root");
	nomChain.Add("fhc62nom.root");
	// Define CUTs
	TCut nue = "simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fNu.fpdgCode==12";
	TCut numu ="simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fNu.fpdgCode==14";

	TCut CC="simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fCCNC==0";
	TCut NC="simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fCCNC==1";

	TCut QE="simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fMode==0";
	TCut RES="simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fMode==1";
	TCut DIS="simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fMode==2";
	TCut COH="simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fMode==3";
	TCut MEC="simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fMode==10";
	TCut DFR="simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fMode==11";
	// for W
	std::string labels = "MiniProd 6.2 #nu_{e} CC QE;  W (GeV); Events";
	TH1D* d_W_numu    = new TH1D("d_W_numu", labels.c_str(), 20, 0.5, 1.5);
	TH1D* n_W_numu    = new TH1D("n_W_numu", labels.c_str(), 20, 0.5, 1.5);

	downChain.Draw("simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fW>>d_W_numu",nue+CC+QE," ");
	nomChain.Draw("simb::MCTruths_genpremixer__GenieGen.obj.fMCNeutrino.fW>>n_W_numu",nue+CC+QE, " ");
	// Create a canvas and divide it into two pads

	TCanvas *c1 = new TCanvas("c1", "Histogram Comparison", 1000, 1600);
	auto rp = new TRatioPlot(d_W_numu, n_W_numu);
	d_W_numu->SetLineColor(kBlue);
	d_W_numu->SetFillColorAlpha(kBlue, 0.3);
	n_W_numu->SetLineColor(kRed);
	n_W_numu->SetFillColorAlpha(kRed, 0.3);
	d_W_numu->Draw();
	n_W_numu->Draw("SAME");





	c1->SetTicks(0, 1);
	rp->Draw();
	rp->GetLowYaxis()->SetNdivisions(506);
	rp->SetGraphDrawOpt("L");
	rp->SetSeparationMargin(0.0);
	rp->Draw();
	rp->GetLowerRefGraph()->SetMinimum(0.8);
	rp->GetLowerRefGraph()->SetMaximum(1.2);
	rp->GetLowerRefYaxis()->SetTitle("Ratio");
	rp->GetUpperRefYaxis()->SetTitle("");
	// Add a legend to the ratio plot

	rp->GetUpperPad()->cd();
	TLegend *legend = new TLegend(0.7, 0.7, 0.89, 0.89);
	legend->AddEntry(d_W_numu, "MFP Down", "lf");
	legend->AddEntry(n_W_numu, "Nominal", "lf");
	legend->Draw();
	rp->GetLowerPad()->cd();
	// Add a horizontal line at ratio =1.
	TLine *line = new TLine(d_W_numu->GetXaxis()->GetXmin(), 1, d_W_numu->GetXaxis()->GetXmax(), 1);
	line->SetLineStyle(kDashed);
	line->SetLineColor(kGreen);
	line->SetLineWidth(3);
	line->Draw();

	// Update and save the canvas
	c1->Update();
	c1->SaveAs("rw_nueCCQE62.pdf");

	// Close the files

}
