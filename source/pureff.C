




//void pureff(double low, double high)
void pureff()
{

    gStyle->SetOptStat(0);
    TCanvas *cc = new TCanvas("cc","signal and background",1200,100,700,400);
    TPad *pad1 = new TPad("pad1","",0,0,1,1);
    TPad *pad2 = new TPad("pad2","",0,0,1,1);
    pad2->SetFillStyle(4000); //will be transparent
    pad2->SetFrameFillStyle(0);



    double dsig, dbac, nncut, nncutmin, nncutmax, nbin, sig_pur, bac_pur, fom_max_sig_pur, fom_max_bac_pur, sig_eff, bac_eff, fom, fom_max = -99999, fom_max_nncut, fom_max_sig_eff, fom_max_bac_eff, nsig, nbac, nsig_mc, nbac_mc;
    nncutmin = hLHSig->GetXaxis()->GetXmin();
    nncutmax = hLHSig->GetXaxis()->GetXmax();
    nbin = hLHSig->GetNbinsX();
    nsig_mc  = hLHSig->GetEntries(); //total entries of hLHSig (although that's not really all prim. sig)
    nbac_mc  = hLHBac->GetEntries(); //total entries of hLHSig (although that's not really all prim. sig)
    TProfile *hSigEff = new TProfile("hSigEff","Efficiency curve", nbin, nncutmin, nncutmax);
    TProfile *hBacEff = new TProfile("hBacEff","Efficiency curve", nbin, nncutmin, nncutmax);
    TProfile *hFOM = new TProfile("hFOM","", nbin, nncutmin, nncutmax);
    hSigEff->GetYaxis()->SetTitle("Efficiency");
    hSigEff->GetXaxis()->SetTitle("nn cut");
    hSigEff->SetLineWidth(2);
    hBacEff->SetLineWidth(2);
    hFOM->GetYaxis()->SetTitle("FOM");
    hFOM->SetLineWidth(2);
    hSigEff->SetLineColor(kRed);
    hBacEff->SetLineColor(kBlue);
    hFOM->SetLineColor(kMagenta);
    //hSigEff = ;
    for (int icut = 0; icut < hLHSig->GetNbinsX(); icut++)
    {
        nncut = hLHSig->GetXaxis()->GetBinCenter(icut); //the nn cut position
        dsig = hLHSig->GetBinContent(icut);
        dbac = hLHBac->GetBinContent(icut);
        sig_eff = hLHSig->Integral(icut,nbin)/nsig_mc;  //upper part of the nn output 
        bac_eff = hLHBac->Integral(0,icut)/nbac_mc;     //lower part of the nn output
        sig_pur = hLHSig->Integral(icut,nbin)/(hLHSig->Integral(icut,nbin)+hLHBac->Integral(icut,nbin)); 
        bac_pur = hLHBac->Integral(0,icut)/(hLHSig->Integral(0,icut)+hLHBac->Integral(0,icut)); 
        if((dsig+dbac) !=0){
            fom = dsig/sqrt(dsig+dbac);
            if(fom > fom_max) {
                fom_max = fom; 
                fom_max_nncut = nncut;
                fom_max_sig_eff = sig_eff;
                fom_max_bac_eff = bac_eff;
                fom_max_sig_pur = sig_pur;
                fom_max_bac_pur = bac_pur;
            }
        }


        hSigEff->Fill(nncut, sig_eff);
        hBacEff->Fill(nncut, bac_eff);
        hFOM->Fill(nncut,fom);
        //std::cout << "Sig. Eff: " << sig_eff << ", Bac. Eff: " << bac_eff << ",     FOM: " << fom << "\n";
    }
    std::cout << "\n\n ...................... \n\n";


    pad1->Draw();
    pad1->cd();
    hSigEff->Draw("");
    hBacEff->Draw("same");
    pad2->Draw();
    pad2->cd();
    hFOM->Draw("Y+");
    
    
    /*nsig = hLHSig->Integral(hLHSig->GetXaxis()->FindBin(fom_max_nncut),nbin); 
    nbac = hLHBac->Integral(0,hLHBac->GetXaxis()->FindBin(fom_max_nncut)); 
    sig_pur = 100. * nsig / (nsig + nbac);
    bac_pur = 100. * nbac / (nbac + nbac);
    sig_eff = 100 * nsig / nsig_mc;
    bac_eff = 100 * nbac / nbac_mc;
    fom = nsig / sqrt(nsig+nbac);
    std::cout << "NN cut            : " << fom_max_nncut << "\n";
    std::cout << "Sig Purity        : " << sig_pur << "\n";
    std::cout << "Bac Purity        : " << bac_pur << "\n";
    std::cout << "Sig Efficiency    : " << sig_eff << "\n";
    std::cout << "Bac Efficiency    : " << bac_eff << "\n";
    std::cout << "Fig. of Merit : " << fom << "\n";*/
    std::cout << "\n|---------------------------|\n";
    std::cout << "|NN cut            : " << fom_max_nncut << "\n";
    std::cout << "|---------------------------|\n";
    std::cout << "|Sig Efficiency    : " << fom_max_sig_eff*100 << "\n";
    std::cout << "|Sig Purity        : " << fom_max_sig_pur*100 << "\n";
    std::cout << "|---------------------------|\n";
    std::cout << "|Bac Efficiency    : " << fom_max_bac_eff*100 << "\n";
    std::cout << "|Bac Purity        : " << fom_max_bac_pur*100 << "\n";
    std::cout << "|---------------------------|\n";
    std::cout << "|Fig. of Merit : " << fom_max << "\n";
    std::cout << "|--------------------------|\n";
    
    TCanvas *cc2 = new TCanvas("cc2","signal and background",1200,800,700,400);
    hLHSig->Draw();
    hLHBac->Draw("same");

}
