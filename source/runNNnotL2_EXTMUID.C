
void runNNnotL2_EXTMUID(TString infile){

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

  std::string training_macro = source_path + "nnTrainednotL2_chi110_EXTMUID";

  TRandom *ran=new TRandom3(0);
  
  bool type;
  int BLlayer;
  double mreco;

  TString input_path = "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EXTMUID/OUTPUT/ROOT/NNINPUT/";
  TString output_path = "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EXTMUID/OUTPUT/ROOT/NNOUTPUT/";
  TString input_file = input_path + infile;

  TFile *input=new TFile(input_file); 
  TTree *oldtree=(TTree*)input->Get("nntree");
  oldtree->SetBranchAddress("type", &type );
  oldtree->SetBranchAddress("BLlayer", &BLlayer);
  oldtree->SetBranchAddress("mreco", &mreco );
  TFile* newf=new TFile(output_path + "newtest_EXTMUID.root","recreate");
  TTree *nntree = oldtree->CloneTree(0);
  Long64_t nentries = oldtree->GetEntries();
  int nsig=0;
  int nbkg=0;
  for (Long64_t i=0;i<nentries; i++) {
    oldtree->GetEntry(i);
    if(BLlayer==2) continue;
    if(type==0) {
      nntree->Fill(); nbkg++;
    }
    else {
      nntree->Fill();
      nsig++;
    }
  }
  std::cout<<"nentries:"<<nentries<<" nsig:"<<nsig<<" nbkg:"<<nbkg<<std::endl;

  double P, extmuidlen;
  double cellEmax,cellEr,cellNtot, cellEmin,cellEavg;
  double layerEmean,layerErms,layerEr,layerEL2,layerEmax,layerEmin;
  double layerNcellL0,layerNcellL1;
  double layerNcellmax;
  int ifile, ientry,trackid;

  nntree->SetBranchAddress("P", &P );
  nntree->SetBranchAddress("extmuidlen", &extmuidlen );
  nntree->SetBranchAddress("trackid", &trackid );
  nntree->SetBranchAddress("ifile", &ifile );
  nntree->SetBranchAddress("ientry", &ientry );
  nntree->SetBranchAddress("mreco", &mreco );
  nntree->SetBranchAddress("type", &type );
  nntree->SetBranchAddress("cellEmax", &cellEmax );
  nntree->SetBranchAddress("cellEmin", &cellEmin );
  nntree->SetBranchAddress("cellEavg", &cellEavg );
  nntree->SetBranchAddress("cellEr", &cellEr );
  nntree->SetBranchAddress("cellNtot", &cellNtot);
  nntree->SetBranchAddress("layerEmean", &layerEmean );
  nntree->SetBranchAddress("layerErms", &layerErms );
  nntree->SetBranchAddress("layerEr", &layerEr );
  nntree->SetBranchAddress("layerEL2", &layerEL2 );
  nntree->SetBranchAddress("layerEmax", &layerEmax );
  nntree->SetBranchAddress("layerEmin", &layerEmin );
  nntree->SetBranchAddress("layerNcellL0", &layerNcellL0 );
  nntree->SetBranchAddress("layerNcellL1", &layerNcellL1 );

  nntree->SetBranchAddress("layerNcellmax",&layerNcellmax);














  nsig=0,nbkg=0;
  for (int i=0;i <nntree->GetEntries(); i++) {
    nntree->GetEntry(i);
    if(type==1) nsig++;
    else nbkg++;

  }
  std::cout<<"nsig:"<<nsig<<" nbkg:"<<nbkg<<std::endl;


  TMultiLayerPerceptron *mlp = new TMultiLayerPerceptron
      //("@cellEmax,@cellNtot,@layerEmean,@layerEmax,@layerEmin,@layerEr,@P,@extmuidlen:8:7:type", nntree, "Entry$%2", "(Entry$+1)%2");
      //("@cellEmax,@cellNtot,@layerEmean,@layerEmin,@layerEr,@extmuidlen:6:5:type", nntree, "Entry$%2", "(Entry$+1)%2");
      ("@cellEmax,@cellNtot,@layerEmean,@layerEmin,@layerEr:5:4:type", nntree, "Entry$%2", "(Entry$+1)%2");

  
  int ntrain = 500;
  mlp->Train(ntrain, "text, graph, update=10");
  //export a class for future analysis
  mlp->Export(training_macro.c_str(),"c++");

  TCanvas *c1 = new TCanvas("c1", "mlp test");
  TString outname=output_path + "nnresult_notL2_chi110_EXTMUID.root";
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
  c1->Print(input_path + "output_EXTMUID.root");

  c1->cd(4);

  TFile *outf=new TFile(output_path + "nnout_notL2_chi110_EXTMUID.root","recreate");

  TH1F *hLHSig = new TH1F("hLHSig", "NN output", 200, -.5, 1.5);
  TH1F *hLHBac = new TH1F("hLHBac", "NN output", 200, -.5, 1.5);

  double params[5];
  //double params[10];
  for (int i=0;i <nntree->GetEntries(); i++) {
    nntree->GetEntry(i);
    params[0] = cellEmax;
    //params[1] = cellEmin;
    params[1] = cellNtot;
    params[2] = layerEmean;
  //  params[3] = layerEmax;
    params[3] = layerEmin;
    //params[4] = layerErms;
    params[4] = layerEr;
  //  params[6] = P;
//    params[5] = extmuidlen;


    double nn=mlp->Evaluate(0,params);
    if(type==0)
      hLHBac->Fill(nn);
    else if(type==1)
      hLHSig->Fill(nn);

    if(type==0 && mlp->Evaluate(0,params)> 0.5) 
      std::cout<<std::setw(10)<<nn<<std::setw(10)<<ifile<<std::setw(10)<<ientry<<std::setw(10)<<trackid<<std::endl;
    else if(type==1 && mlp->Evaluate(0,params)< 0.5)
      std::cout<<std::setw(10)<<nn<<std::setw(10)<<ifile<<std::setw(10)<<ientry<<std::setw(10)<<trackid<<std::endl;

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


  outf->Write();
  outf->Close();

}
