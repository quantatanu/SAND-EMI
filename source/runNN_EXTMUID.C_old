
void runNN_EXTMUID(TString infile){
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

  TString input_path = "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EXTMUID/OUTPUT/ROOT/NNINPUT/";
  TString output_path = "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EXTMUID/OUTPUT/ROOT/NNOUTPUT/";
  TString input_file = input_path + infile;

  TFile *input=new TFile(input_file);
  //input->ls();
  TTree *oldtree=(TTree*)input->Get("nntree");
  //oldtree->Print();

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

  double cellEmax,cellEr,cellNtot, cellEmin,cellEavg;
  //double layerEmean,layerErms,layerEr,layerEL2,layerEmax,layerEmin;
  double layerEmean,layerErms,layerEr,layerEL0,layerEmax,layerEmin;
  double layerNcellL0;
  double layerNcellmax;
  
  nntree->SetBranchAddress("type", &type );
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
  nntree->SetBranchAddress("layerNcellmax",&layerNcellmax);
//--------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------

  
  TMultiLayerPerceptron *mlp = new TMultiLayerPerceptron
    //("@cellEmax,@cellNtot,@cellEr,@layerEmean,@layerEL0,@layerErms,@layerEr,@layerEmax,@layerEmin,@layerNcellmax:10:8:type", nntree, "Entry$%2", "(Entry$+1)%2");
    //("@cellEmax,@cellNtot,@cellEr,@layerEmean,@layerEL0,@layerErms,@layerEr,@layerEmax,@layerEmin,@layerNcellmax:5:2:type", nntree, "Entry$%2", "(Entry$+1)%2");
    ("@cellEmax,@cellNtot,@layerEmean,@layerEL0,@layerEr:4:2:type", nntree, "Entry$%2", "(Entry$+1)%2");
  //  ("@cellEmax,@cellNtot,@layerEL0,@layerEr:3:2:type", nntree, "Entry$%2", "(Entry$+1)%2");
  
  int ntrain = 330;
  mlp->Train(ntrain, "text, graph, update=10");
  //export a class for future analysis
  mlp->Export(training_macro.c_str(),"c++");

  TCanvas *c1 = new TCanvas("c1", "mlp test");
  TString outname=output_path + "nnresult_chi110_EXTMUID.root";
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

  c1->Print(output_path + "inputImpact_EXTMUID.root");
  c1->cd(2);
  // shows the network structure
  //TCanvas *c2 = new TCanvas("c2", "mlp test");
  mlp->Draw();

  c1->cd(3);
  // draws the resulting network
  ana.DrawNetwork(0,"type==1","type==0");
  c1->Print(output_path + "output_EXTMUID.root");

  c1->cd(4);

  TFile *outf=new TFile(output_path + "nnout_chi110_EXTMUID.root","recreate");

  TH1F *hLHSig = new TH1F("hLHSig", "NN output", 200, -.5, 1.5);
  TH1F *hLHBac = new TH1F("hLHBac", "NN output", 200, -.5, 1.5);


  oldtree->SetBranchAddress("type", &type );
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
  oldtree->SetBranchAddress("layerNcellmax",&layerNcellmax);






  //double params[10];
  double params[5];
  for (Long64_t i=0;i<nentries; i++) {
    oldtree->GetEntry(i);
    if(BLlayer!=0) continue;
    if(type==0 && pionNoIC5) continue;
    params[0] = cellEmax;
    params[1] = cellNtot;
    //params[2] = cellEr;
    params[2] = layerEmean;
    //params[4] = layerErms;
    params[3] = layerEr;
    params[4] = layerEL0;
//    params[3] = layerEL2;
    //params[7] = layerEmax;
    //params[8] = layerEmin;
    //params[9] = layerNcellmax;

    
    
    if(type==0)
      hLHBac->Fill(mlp->Evaluate(0,params));
    else if(type==1)
      hLHSig->Fill(mlp->Evaluate(0,params));
  }


  hLHSig->SetStats(0);  

  
  double max=hLHSig->GetMaximum()>hLHBac->GetMaximum()?hLHSig->GetMaximum():hLHBac->GetMaximum();
  hLHSig->GetYaxis()->SetRangeUser(0,max*1.06);
  hLHSig->SetLineColor(kRed);
  hLHSig->SetFillColor(kRed);
  hLHSig->Draw("hist");
  hLHSig->GetXaxis()->SetTitle("NN cut");
  hLHSig->GetYaxis()->SetTitle("nEvts (POT: 1 spill)");
 
  hLHBac->SetStats(0);
  hLHBac->SetLineColor(kBlue);
  hLHBac->SetFillStyle(3008);
  hLHBac->SetFillColor(kBlue);
  hLHBac->Draw("same hist");
  c1->Print(outname);
  ///////////


  outf->Write();
  outf->Close();

}
