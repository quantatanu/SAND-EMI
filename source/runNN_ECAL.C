
void runNN_ECAL(TString infile){
//void runNN_ECAL(){
  //  TFile *input = new TFile("outmax2.root");

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


  std::string training_macro = source_path + "nnTrainedchi110_ECAL";

  TRandom *ran=new TRandom3(0);

  TString input_path = "../../OUTPUT/ROOT/NNINPUT/";
  TString output_path = "../../OUTPUT/ROOT/NNOUTPUT/";
  TString input_file = input_path + infile;
  std::cout << "Input file: " << input_file << "\n";
  TFile *input=new TFile(input_file); //out30_extrap_fixnoecal.root"); //out30_extrap.root"); //out30_noend.root"); //out30_norecomasscut_alll.root"); //
  TTree *oldtree=(TTree*)input->Get("nntree");

  bool type;
  int BLlayer;
  bool pionNoIC5;
  oldtree->SetBranchAddress("type", &type );
  oldtree->SetBranchAddress("BLlayer", &BLlayer);
  oldtree->SetBranchAddress("pionNoIC5", &pionNoIC5 );
  //  oldtree->SetBranchAddress("mreco", &mreco );
  TFile* newf=new TFile(output_path + "newtest2_ECAL.root","recreate");
  TTree *nntree = oldtree->CloneTree(0);
  Long64_t nentries = oldtree->GetEntries();
  int nsig=0;
  int nbkg=0;
  for (Long64_t i=0;i<nentries; i++) {
    oldtree->GetEntry(i);
    if(BLlayer!=4) continue;
    if(type==0) {
      if(pionNoIC5) continue;
      nntree->Fill(); nbkg++;
    }
    else {
      //    if(ran->Rndm()<0.6) continue;
      nntree->Fill();
      nsig++;
    }
  }
  std::cout<<"nentries:"<<nentries<<" nsig:"<<nsig<<" nbkg:"<<nbkg<<std::endl;

  //return 0;
  double cellEmax,cellEr,cellNtot, cellEmin,cellEavg;
  double layerEmean,layerErms,layerEr,layerEL4,layerEmax,layerEmin;
  double layerNcellL0,layerNcellL1,layerNcellL2,layerNcellL3;
  double layerNcellmax;
  
  


  nntree->SetBranchAddress("type", &type );
  nntree->SetBranchAddress("cellEmax", &cellEmax );
  nntree->SetBranchAddress("cellEmin", &cellEmin );
  //  nntree->SetBranchAddress("cellEavg", &cellEavg );
  nntree->SetBranchAddress("cellEr", &cellEr );
  nntree->SetBranchAddress("cellNtot", &cellNtot );
  
  nntree->SetBranchAddress("layerEmean", &layerEmean );
  nntree->SetBranchAddress("layerErms", &layerErms );
  nntree->SetBranchAddress("layerEr", &layerEr );
  nntree->SetBranchAddress("layerEL4", &layerEL4 );
  nntree->SetBranchAddress("layerEmax", &layerEmax );
  nntree->SetBranchAddress("layerEmin", &layerEmin );
  
  nntree->SetBranchAddress("layerNcellL0", &layerNcellL0 );
  nntree->SetBranchAddress("layerNcellL1", &layerNcellL1 );
  nntree->SetBranchAddress("layerNcellL2", &layerNcellL2 );
  nntree->SetBranchAddress("layerNcellL3", &layerNcellL3 );

  nntree->SetBranchAddress("layerNcellmax",&layerNcellmax);
  /*
  double weight;
  TTree *nntree2=new TTree("nntree weighted","nntree with weights branch added");
  nntree2->Branch("weight",&weight, "weight/D");
  nntree2->Branch("type", &type ,"type/O");
  nntree2->Branch("cellEmax", &cellEmax, "cellEmax/D");
  nntree2->Branch("cellEr", &cellEr , "cellEr/D");
  nntree2->Branch("cellNtot", &cellNtot , "cellNtot/D" );

  nntree2->Branch("layerEmean", &layerEmean ,"layerEmean/D" );
  nntree2->Branch("layerErms", &layerErms ,"layerErms/D");
  nntree2->Branch("layerEr", &layerEr ,"layerEr/D");
  nntree2->Branch("layerEL4", &layerEL4 ,"layerEL4/D");
  nntree2->Branch("layerEmax", &layerEmax ,"layerEmax/D");

  nntree2->Branch("layerNcellL0", &layerNcellL0 ,"layerNcellL0/D");
  nntree2->Branch("layerNcellL1", &layerNcellL1 ,"layerNcellL1/D");
  nntree2->Branch("layerNcellL2", &layerNcellL2 ,"layerNcellL2/D");
  nntree2->Branch("layerNcellL3", &layerNcellL3 ,"layerNcellL3/D");
  */
  
  TMultiLayerPerceptron *mlp = new TMultiLayerPerceptron
    //    ("@cellEmax,@cellNtot,@layerEmean,@layerErms,@layerEL4,@layerEmax:5:4:type", nntree, "Entry$%2", "(Entry$+1)%2");
    //  ("@cellEmax,@cellNtot,@layerEmean,@layerErms,@layerEr,@layerEL4,@layerEmax:6:5:type", nntree, "Entry$%2", "(Entry$+1)%2");
    ("@cellEmax,@cellNtot,@cellEr,@layerEmean,@layerErms,@layerEr,@layerEL4,@layerEmax,@layerEmin,@layerNcellmax:8:5:type", nntree, "Entry$%2", "(Entry$+1)%2");
  //    ("@cellEmax,@cellNtot,@layerEmean,@layerErms,@layerEr,@layerEL4,@layerEmax:6:5:type", "weight", nntree2, "Entry$%2", "(Entry$+1)%2");
  //    ("@cellEmax,@cellEr,@cellNtot,@layerEmean,@layerErms,@layerEr,@layerEL4,@layerEmax,@layerNcellL0,@layerNcellL1,@layerNcellL2,@layerNcellL3:9:5:type", nntree, "Entry$%2", "(Entry$+1)%2");
  
  int ntrain = 200;
  mlp->Train(ntrain, "text, graph, update=10");
  //export a class for future analysis
  //mlp->Export("nnTrainedchi110_ECAL","c++");
  mlp->Export(training_macro.c_str(),"c++");

  TCanvas *c1 = new TCanvas("c1", "mlp test");
  TString outname=output_path + "nnresult_chi110_ECAL.root";
  //c1->Print(outname+"[");
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

  c1->Print(output_path + "inputImpact_ECAL.root");
  c1->cd(2);
  // shows the network structure
  //TCanvas *c2 = new TCanvas("c2", "mlp test");
  mlp->Draw();

  c1->cd(3);
  // draws the resulting network
  ana.DrawNetwork(0,"type==1","type==0");
  //c1->Print("output.png");

  c1->cd(4);

  TFile *outf=new TFile(output_path + "nnoutchi110_ECAL.root","recreate");

  TH1F *hLHSig = new TH1F("hLHSig", "NN output", 200, -.5, 1.5);
  TH1F *hLHBac = new TH1F("hLHBac", "NN output", 200, -.5, 1.5);


  oldtree->SetBranchAddress("type", &type );
  oldtree->SetBranchAddress("cellEmax", &cellEmax );
  oldtree->SetBranchAddress("cellEmin", &cellEmin );
  //  oldtree->SetBranchAddress("cellEavg", &cellEavg );
  oldtree->SetBranchAddress("cellEr", &cellEr );
  oldtree->SetBranchAddress("cellNtot", &cellNtot );

  oldtree->SetBranchAddress("layerEmean", &layerEmean );
  oldtree->SetBranchAddress("layerErms", &layerErms );
  oldtree->SetBranchAddress("layerEr", &layerEr );
  oldtree->SetBranchAddress("layerEL4", &layerEL4 );
  oldtree->SetBranchAddress("layerEmax", &layerEmax );
  oldtree->SetBranchAddress("layerEmin", &layerEmin );

  oldtree->SetBranchAddress("layerNcellL0", &layerNcellL0 );
  oldtree->SetBranchAddress("layerNcellL1", &layerNcellL1 );
  oldtree->SetBranchAddress("layerNcellL2", &layerNcellL2 );
  oldtree->SetBranchAddress("layerNcellL3", &layerNcellL3 );

  oldtree->SetBranchAddress("layerNcellmax",&layerNcellmax);



  //  double params[12];
  double params[10];
  //  double params[6];
  //  for (int i=0;i <nntree->GetEntries(); i++) {
    //    @cellEmax,@cellNtot,@cellEavg,@cellEr,@layerEmean,@layerErms,@layerEr,@layerEL4,@layerEmax,@layerEmin,@layerNcellmax
  for (Long64_t i=0;i<nentries; i++) {
    oldtree->GetEntry(i);
    if(BLlayer!=4) continue;
    if(type==0 && pionNoIC5) continue;
    //    nntree->GetEntry(i);
    params[0] = cellEmax;
    params[1] = cellNtot;
    //    params[2] = cellEavg;
    params[2] = cellEr;
    params[3] = layerEmean;
    params[4] = layerErms;
    params[5] = layerEr;
    params[6] = layerEL4;
    params[7] = layerEmax;
    params[8] = layerEmin;
    params[9] = layerNcellmax;
    /*
    params[0] = cellEmax;
    params[1] = cellEr;
    params[2] = cellNtot;
    params[3] = layerEmean;
    params[4] = layerErms;
    params[5] = layerEr;
    params[6] = layerEL4;
    params[7] = layerEmax;
    params[8] = layerNcellL0;
    params[9] = layerNcellL1;
    params[10] = layerNcellL2;
    params[11] = layerNcellL3;
    */
    if(type==0)
      hLHBac->Fill(mlp->Evaluate(0,params));
    else if(type==1)
      hLHSig->Fill(mlp->Evaluate(0,params));
  }


  hLHSig->SetStats(0);  

  
  double max=hLHSig->GetMaximum()>hLHBac->GetMaximum()?hLHSig->GetMaximum():hLHBac->GetMaximum();
  hLHSig->GetYaxis()->SetRangeUser(0,max*1.06);
  hLHSig->SetLineColor(kRed);
  hLHSig->SetFillStyle(3003);
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




  //c1->Print(outname+"]");

  outf->Write();
  outf->Close();

}
