#include "TStyle.h"
#include "TMath.h"
#include "TCanvas.h"
#include <TRandom3.h>
#include <TString.h>
#include "TLegend.h"
#include <TFile.h>
#include <TTree.h>
#include <iostream>
#include "TCanvas.h"
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include "TMultiLayerPerceptron.h"
#include "TMLPAnalyzer.h"
#include"TTree.h"
#include"TNeuron.h"
#include"TSynapse.h"
#include"TMultiLayerPerceptron.h"
#include"TProfile.h"
#include"THStack.h"
#include "TObject.h"



int main(int argc, char* argv[]){
  TString input_path = argv[1];
  TString infile = argv[2];
  TString output_path = argv[3];
  TString t_stamp = argv[4];
  std::string source_path = __FILE__;
  std::string source_file = source_path;
  for(int i=0; (i = source_path.find("/", i)) != std::string::npos; i++)
  {
        source_file = source_file.substr(source_file.find("/") + 1); 
  }

  size_t position = source_path.find(source_file);
  if (position != std::string::npos)
  {
        source_path = source_path.erase(position, source_file.length());
  }


  std::string training_macro = source_path + "nnTrainedchi110_EXTMUID";

  TRandom *ran=new TRandom3(0);

  TString input_file = input_path + infile;

  TFile *input=new TFile(input_file);
  TTree *oldtree=(TTree*)input->Get("nntree");

  bool type;
  int BLlayer;
  bool pionNoIC5;
  oldtree->SetBranchAddress("type", &type );
  oldtree->SetBranchAddress("BLlayer", &BLlayer);
  oldtree->SetBranchAddress("pionNoIC5", &pionNoIC5 );
  TString test_output_path = output_path + "newtest2_EXTMUID.root";
  TFile* newf=new TFile(test_output_path,"recreate");
  TTree *nntree = oldtree->CloneTree(0);
  Long64_t nentries = oldtree->GetEntries();
  int nsig=0;
  int nbkg=0;
  for (Long64_t i=0;i<nentries; i++) {
    oldtree->GetEntry(i);
    if(BLlayer!=0) continue;
    if(type==0) {
      if(pionNoIC5) continue;
      nntree->Fill(); nbkg++;
    }
    else {
      nntree->Fill();
      nsig++;
    }
  }
  std::cout<<"nentries:"<<nentries<<" nsig:"<<nsig<<" nbkg:"<<nbkg<<std::endl;


  double P,extmuidlen,E,cellEmax,cellNtot,cellEmin,cellEavg,cellEr,layerEmean,layerErms,layerEr,layerEL0,layerEmax,layerEmin,layerNcellL0,layerNcellmax,layerNcellmin,layerNcellr,layerNcellmean;

  nntree->SetBranchAddress("type", &type );
  nntree->SetBranchAddress("extmuidlen", &extmuidlen );
  nntree->SetBranchAddress("E", &E );
  nntree->SetBranchAddress("P", &P );
  nntree->SetBranchAddress("cellEavg", &cellEavg );
  nntree->SetBranchAddress("cellEmax", &cellEmax );
  nntree->SetBranchAddress("cellEmin", &cellEmin );
  nntree->SetBranchAddress("cellEr", &cellEr );
  nntree->SetBranchAddress("cellNtot", &cellNtot );
  nntree->SetBranchAddress("layerEmean", &layerEmean );
  nntree->SetBranchAddress("layerErms", &layerErms );
  nntree->SetBranchAddress("layerEr", &layerEr );
  nntree->SetBranchAddress("layerEL0", &layerEL0 );
//  nntree->SetBranchAddress("layerEL2", &layerEL2 );
  nntree->SetBranchAddress("layerEmax", &layerEmax );
  nntree->SetBranchAddress("layerEmin", &layerEmin );
  nntree->SetBranchAddress("layerNcellL0", &layerNcellL0 );
//  nntree->SetBranchAddress("layerNcellL1", &layerNcellL1 );
  nntree->SetBranchAddress("layerNcellr",&layerNcellr);
  nntree->SetBranchAddress("layerNcellmin",&layerNcellmin);
  nntree->SetBranchAddress("layerNcellmin",&layerNcellmin);
  nntree->SetBranchAddress("layerNcellmean",&layerNcellmean);

//--------------------------------------------------------------------------------------------

  
  //NN architecture must be edited here
  TMultiLayerPerceptron *mlp = new TMultiLayerPerceptron
    //("@cellEmax,@cellEmin,@layerEmean,@layerEr,@layerEL0,@layerNcellL0,@layerNcellmean:6:4:type", nntree, "Entry$%2", "(Entry$+1)%2");
    //("@P,@extmuidlen,@E,@cellEmax,@cellEr,@cellNtot,@cellEmin,@cellEavg,@layerEmean,@layerErms,@layerEr,@layerEL0,@layerEmax,@layerEmin,@layerNcellL0,@layerNcellmax,@layerNcellmin,@layerNcellr,@layerNcellmean:17:2:type", nntree, "Entry$%2", "(Entry$+1)%2");
    //("@P,@extmuidlen,@E,@cellEmax,@cellNtot,@cellEmin,@cellEavg,@layerEmean,@layerEr,@layerEL0,@layerNcellL0,@layerNcellr,@layerNcellmean:11:2:type", nntree, "Entry$%2", "(Entry$+1)%2");
    ("@cellEmax,@cellEmin,@layerEmean,@layerEr,@layerEL0,@layerNcellL0,@layerNcellmean:6:4:type", nntree, "Entry$%2", "(Entry$+1)%2");


 
  int ntrain = 200;
  TCanvas *c1_0 = new TCanvas("c1_0", "mlp test");
  c1_0->Divide(2,2);
  c1_0->cd(2);
  mlp->Train(ntrain, "text, graph, update=1");
  //export a class for future analysis
  mlp->Export(training_macro.c_str(),"c++");



  TCanvas *c1 = new TCanvas("c1", "mlp test");
  TString outname_eff=output_path + "nneff_chi110_EXTMUID_" + t_stamp + ".root";
  TString outname=output_path + "nnresult_chi110_EXTMUID_" + t_stamp + ".root";
  c1->Divide(2,2);
  // Use TMLPAnalyzer to see what it looks for
  TMLPAnalyzer ana(mlp);
  // Initialisation
  ana.GatherInformations();
  // output to the console
  ana.CheckNetwork();
  c1->cd(1);
  // shows how each variable influences the network
  ana.DrawDInputs();

  c1_0->cd(2);
  ana.DrawTruthDeviations();
  c1_0->cd(3);
  ana.DrawTruthDeviationInsOut();
  c1_0->cd(4);
  mlp->DrawResult();
  c1_0->Print(output_path + "nnout_mlp_tests_EXTMUID_" + t_stamp + ".root");
    

  c1->Print(output_path + "inputImpact_EXTMUID_" + t_stamp + ".root");
  c1->cd(2);
  // shows the network structure
  //TCanvas *c2 = new TCanvas("c2", "mlp test");
  mlp->Draw();

  c1->cd(3);
  // draws the resulting network
  ana.DrawNetwork(0,"type==1","type==0");
  c1->Print(output_path + "output_EXTMUID_" + t_stamp + ".root");

  c1->cd(4);

  TFile *outf=new TFile(output_path + "nnout_chi110_EXTMUID_" + t_stamp + ".root","recreate");
  
  int nbin = ntrain;
  double nncutmin = -.5, nncutmax = 1.5;
  TH1F *hLHSig = new TH1F("hLHSig", "NN output", nbin, nncutmin, nncutmax);
  TH1F *hLHBac = new TH1F("hLHBac", "NN output", nbin, nncutmin, nncutmax);

  oldtree->SetBranchAddress("extmuidlen", &extmuidlen );
  oldtree->SetBranchAddress("E", &E );
  oldtree->SetBranchAddress("P", &P );
  oldtree->SetBranchAddress("type", &type );
  oldtree->SetBranchAddress("cellEavg", &cellEavg );
  oldtree->SetBranchAddress("cellEmax", &cellEmax );
  oldtree->SetBranchAddress("cellEmin", &cellEmin );
  oldtree->SetBranchAddress("cellEr", &cellEr );
  oldtree->SetBranchAddress("cellNtot", &cellNtot );
  oldtree->SetBranchAddress("layerEmean", &layerEmean );
  oldtree->SetBranchAddress("layerErms", &layerErms );
  oldtree->SetBranchAddress("layerEr", &layerEr );
  oldtree->SetBranchAddress("layerEL0", &layerEL0 );
//  oldtree->SetBranchAddress("layerEL2", &layerEL2 );
  oldtree->SetBranchAddress("layerEmax", &layerEmax );
  oldtree->SetBranchAddress("layerEmin", &layerEmin );
  oldtree->SetBranchAddress("layerNcellL0", &layerNcellL0 );
//  oldtree->SetBranchAddress("layerNcellL1", &layerNcellL1 );
  oldtree->SetBranchAddress("layerNcellr",&layerNcellr);
  oldtree->SetBranchAddress("layerNcellmin",&layerNcellmin);
  oldtree->SetBranchAddress("layerNcellmin",&layerNcellmin);
  oldtree->SetBranchAddress("layerNcellmean",&layerNcellmean);



  double params[7];
  for (Long64_t i=0;i<nentries; i++) {
    oldtree->GetEntry(i);
    if(BLlayer!=0) continue;
    if(type==0 && pionNoIC5) continue;
    
     //params[0]=P;
     //params[1]=extmuidlen;
     //params[2]=E;
     params[0]=cellEmax;
     //params[4]=cellEr; 
     //params[4]=cellNtot;
     params[1]=cellEmin;
     //params[6]=cellEavg;
     params[2]=layerEmean;
     //params[9]=layerErms;
     params[3]=layerEr; 
     params[4]=layerEL0;
     //params[12]=layerEmax;
     //params[13]=layerEmin;  
     params[5]=layerNcellL0;
     //params[15]=layerNcellmax;
     //params[16]=layerNcellmin;
     //params[11]=layerNcellr; 
     params[6]=layerNcellmean;
   
 
    if(type==0)
      hLHBac->Fill(mlp->Evaluate(0,params));
    else if(type==1)
      hLHSig->Fill(mlp->Evaluate(0,params));
  }


  hLHSig->SetStats(0);  
  hLHBac->SetStats(0);

  double max=hLHSig->GetMaximum()>hLHBac->GetMaximum()?hLHSig->GetMaximum():hLHBac->GetMaximum();
  hLHSig->GetYaxis()->SetRangeUser(0,max*1.06);
  hLHSig->SetLineColor(kRed);
  hLHSig->SetFillColor(kRed);
  hLHSig->Draw("hist");
  hLHSig->GetXaxis()->SetTitle("NN cut");
  hLHSig->GetYaxis()->SetTitle("nEvts (POT: 1 spill)");
 
  hLHBac->SetLineColor(kBlue);
  hLHBac->SetFillStyle(3008);
  hLHBac->SetFillColor(kBlue);
  hLHBac->Draw("same hist");


  std::cout << "----------------------------EFFICIENCY ANALYSIS -----------------------------------------------\n";
  gStyle->SetOptStat(0);
  TCanvas *cc = new TCanvas("cc","signal and background",1200,100,1530,500);
  cc->Divide(3,1);
  cc->cd(1);
  //TPad *pad1 = new TPad("pad1","",0,0,1,1);
  //TPad *pad2 = new TPad("pad2","",0,0,1,1);
  //pad2->SetFillStyle(4000); //will be transparent
  //pad2->SetFrameFillStyle(0);

  double tot_sig, tot_bac, real_sig, real_bac, fake_sig, fake_bac, nncut,  sig_pur, bac_pur, fom_max_sig_pur, fom_max_bac_pur, sig_eff, bac_eff, fom, fom_max = -99999, fom_max_nncut, fom_max_sig_eff, fom_max_bac_eff;
  nncutmin = hLHSig->GetXaxis()->GetXmin();
  nncutmax = hLHSig->GetXaxis()->GetXmax();
  double nsig_mc = 1.0*nsig;
  double nbac_mc = 1.0*nbkg;
  double nsig_evt = hLHSig->GetEntries();
  double nbac_evt = hLHBac->GetEntries();
  
  TProfile *hSigEffBacEff = new TProfile("hSigEffBacEff","Efficiency curve", nbin, 0, 1);
  hSigEffBacEff->GetYaxis()->SetTitle("#epsilon_{B}");
  hSigEffBacEff->GetXaxis()->SetTitle("#epsilon_{S}");
  TProfile *hSigEff = new TProfile("hSigEff","Efficiency curve", nbin, nncutmin, nncutmax);
  TProfile *hBacEff = new TProfile("hBacEff","Efficiency curve", nbin, nncutmin, nncutmax);
  TProfile *hFOM = new TProfile("hFOM","", nbin, nncutmin, nncutmax);
  hSigEff->GetYaxis()->SetTitle("Efficiency");
  hSigEff->GetXaxis()->SetTitle("nn cut");
  hSigEff->SetLineWidth(1);
  hBacEff->SetLineWidth(1);
  hFOM->GetYaxis()->SetTitle("FOM");
  hFOM->SetLineWidth(1);
  hSigEff->SetLineColor(kRed);
  hBacEff->SetLineColor(kBlue);
  hFOM->SetLineColor(kMagenta);
  for (int icut = 0; icut < hLHSig->GetNbinsX(); icut++)
  {
      if(hLHSig->GetXaxis()->GetBinCenter(icut)>0){
        nncut = hLHSig->GetXaxis()->GetBinCenter(icut); //the nn cut position
      } else {
        nncut = hLHBac->GetXaxis()->GetBinCenter(icut); //the nn cut position
      }
      //nncut = nncutmin + icut*(nncutmax-nncutmin)/(1.0*nbin);
      real_sig = hLHSig->Integral(icut,nbin);
      fake_sig = hLHBac->Integral(icut,nbin);
      real_bac = hLHBac->Integral(0,icut);
      fake_bac = hLHSig->Integral(0,icut);
      tot_sig = real_sig + fake_sig;
      tot_bac = real_bac + fake_bac;
      sig_eff = real_sig/nsig_evt;
      //bac_eff = real_bac/nbac_evt;
      bac_eff = real_bac/nbac_evt;
      sig_pur = real_sig/tot_sig; if(tot_sig <= 0) sig_pur = 0;
      bac_pur = real_bac/tot_bac; if(tot_sig <= 0) bac_pur = 0;
      //std::cout << "nn: " << fom_max_nncut << ", real_sig+fake_sig: " << real_sig+fake_sig << ", sig_eff: " << fom_max_sig_eff << ", bac_eff: " << fom_max_bac_eff << ", sig_pur: " << fom_max_sig_pur << ", bac_pur: " << fom_max_bac_pur << ", fom: " << fom_max << "\n";
      if((real_sig+fake_sig) > 0){
      //if((real_sig+real_bac) > 0){
          fom = real_sig/sqrt(real_sig+fake_sig);
          //fom = real_sig/sqrt(real_sig+real_bac);
          if(fom >= fom_max) {
              fom_max = fom; 
              fom_max_nncut = nncut;
              fom_max_sig_eff = sig_eff;
              fom_max_bac_eff = bac_eff;
              fom_max_sig_pur = sig_pur;
              fom_max_bac_pur = bac_pur;
          }
      }
      else {fom = 0;}


      hSigEffBacEff->Fill(sig_eff, bac_eff);
      hSigEff->Fill(nncut, sig_eff);
      hBacEff->Fill(nncut, bac_eff);
      hFOM->Fill(nncut,fom);
  }

  if(fom_max > 0)hFOM->Scale(1./fom_max);    

  //pad1->Draw();
  //pad1->cd();
  hSigEff->Draw("hist");
  hBacEff->Draw("same hist");
  //pad2->Draw();
  //pad2->cd();
  hFOM->Draw("same hist");
  

  printf ("\n--------------------------------------------------------------------------------------------------------------------------");
  printf ("\n| nn cut       | sig eff %%  |  bac eff %%  |  sig pur %%  |  bac pur %%  |  fom [sig/sqrt(sig+bac)]  |   nsig   |    nbac   |");
  printf ("\n--------------------------------------------------------------------------------------------------------------------------");
  //printf ("\n|      %-6d  |     %2.2f   |     %2.2f    |    %2.2f   |     %2.2f    |           %-6d          |%8d | %8d |", fom_max_nncut, fom_max_sig_eff*100, 100-fom_max_bac_eff*100, fom_max_sig_pur*100, fom_max_bac_pur*100, nsig_evt, nbac_evt);
  printf ("\n|      %-3.3f  |     %2.2f   |     %2.2f    |    %2.2f   |     %2.2f    |           %-6d          |%8d | %8d |", fom_max_nncut, fom_max_sig_eff*100, fom_max_bac_eff*100, fom_max_sig_pur*100, fom_max_bac_pur*100, nsig_evt, nbac_evt);
  printf ("\n--------------------------------------------------------------------------------------------------------------------------");




  cc->cd(2);
  hLHSig->Draw();
  hLHBac->Draw("same");
  cc->cd(3);
  //hSigEffBacEff->Draw();
  hFOM->Draw();
  //----------------------------EFFICIENCY ANALYSIS ENDS ------------------------------------------

  c1->Print(outname);
  cc->Print(outname_eff);
  ///////////

  outf->Write();
  outf->Close();


  return 0;

}
