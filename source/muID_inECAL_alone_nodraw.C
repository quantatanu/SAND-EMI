


// file in fhc_stt_cc_list.txt : ECAL barrel module number : top is 0, then it increase counterclockwise, 
//     0
//   1   23
// 2        22

//standard c/c++ libs
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <utility>
#include <functional>
#include <algorithm>
#include <libgen.h>
#include <vector>


//ROOT headers
#include "TArc.h"
#include "TMath.h"
#include "TArrow.h"
#include "TEllipse.h"
#include "TBox.h"
#include "TDatabasePDG.h"
#include "TStreamerInfo.h"
#include "TCanvas.h"
#include "TMarker.h"
#include <TGeoManager.h>
#include <TRandom3.h>
#include <TString.h>
#include <TObjArray.h>
#include <TObjString.h>
#include <TGeoTrd2.h>
#include <TGeoTube.h>
#include "TLegend.h"
#include "TStyle.h"
#include <TFile.h>
#include <TTree.h>
#include "TCanvas.h"
#include "TG4Event.h"
#include "TProfile.h"
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"

//NN headers
#include "nnTrainedchi110_ECAL.cxx"
#include "nnTrainednotL4_chi110_ECAL.cxx"
#include "utils.h"
//#include "ecalgeo.h"
#include "extrapolatorECAL.h"



using std::endl;
using std::cout;


std::set<int> fileentry_trk;
int ientry;
int ifile;
double npe1MeV=3.6;

class trackfit{

    double yc;
    double zc;
    double r;
    double a;
    double b;
  
};

nnTrainedchi110_ECAL *mytrainL4;
nnTrainednotL4_chi110_ECAL *mytrainLnot4;
std::map<int,std::pair<int,int> > sttMap;
std::map<int,std::pair<int,int> > ecalMap;


extrapolatorECAL *extmuid;
//ecalgeo *myECALgeo;
int debug;
TG4Event* event;
TTree *nntree;
TGeoManager *geo;
TDatabasePDG *dbpdg;
TRandom3 *ran;
double centerX=0.;
double centerY=-2384.73;  // mm
double centerZ=23910; // mm
double sigmas=200E-6; // m
double B=0.6;
double x0=2.8; // m

double ecal_cut;
double emi_cut;


double widths[5]={4.42491, 4.52151, 4.61812, 4.71473,4.821};
//double widths[5]={12.4,12.4,12.4,12.4,12.4};
int hit_count_test[5] = {0,0,0,0,0};
int mu_count = 0, pi_count = 0, sig_count = 0, bkg_count = 0;

TH1 *hp_Yoke[2][2];  // type -> inner/outer
TH1 *hphiPerp[2][2];
TH1 *hthetaXP[2][2];
TH1 *hphi_Yoke[2][2];



TH1 *htrueP[2][12];

TH1 *hchi2_cir[2][6];
TH1 *herr_cir[2];

TH2 *hsig_E_llay;
TH2 *hbkg_E_llay;

TH1 *hsig_P2len;
TH1 *hbkg_P2len;

TH2 *hsig_P_len;
TH2 *hbkg_P_len;

TH1 *h_sigma_ecalt;
TH2 *hsig_mreco2_llay;
TH2 *hbkg_mreco2_llay;
TH2 *hsig_mreco_llay;
TH2 *hbkg_mreco_llay;

TH1 *hcate[2][3];
TH1 *hcateIntECAL[2][3];
TH1 *hcateNoIntECAL[2][3];

TProfile *h_layer_Evis_IntECAL[2][3];
TProfile *h_layer_Evis_NoIntECAL[2][3];


TH1F *nnHist;



TH1 *hsig_crossNlayer;
TH1 *hbkg_crossNlayer;

TH1 *hsig_cellEmax;
TH1 *hsig_cellEmin;
TH1 *hsig_cellEavg;
TH1 *hsig_cellEr;
TH1 *hsig_cellNtot;
TH1 *hbkg_cellEmax;
TH1 *hbkg_cellEmin;
TH1 *hbkg_cellEavg;
TH1 *hbkg_cellEr;
TH1 *hbkg_cellNtot;

TH2 *hsig_E_id;
TH2 *hsig_Ncell_id;
TH2 *hsig_Span_id;
TH2 *hsig_Dis_id;
TH2 *hbkg_E_id;
TH2 *hbkg_Ncell_id;
TH2 *hbkg_Span_id;
TH2 *hbkg_Dis_id;

TH1 *hsig_llay;
TH1 *hbkg_llay;

TH1 *hsig_ecalTdiff;
TH1 *hbkg_ecalTdiff;

TH1 *hsig_Eavg;
TH1 *hsig_Esigma;
TH1 *hsig_Er;
TH1 *hsig_Emax;
TH1 *hsig_Emin;

TH1 *hbkg_Eavg;
TH1 *hbkg_Esigma;
TH1 *hbkg_Er;
TH1 *hbkg_Emax;
TH1 *hbkg_Emin;
/////
TH1 *hsig_Ncellavg;
TH1 *hsig_Ncellsigma;
TH1 *hsig_Ncellr;
TH1 *hsig_Ncellmax;
TH1 *hsig_Ncellmin;

TH1 *hbkg_Ncellavg;
TH1 *hbkg_Ncellsigma;
TH1 *hbkg_Ncellr;
TH1 *hbkg_Ncellmax;
TH1 *hbkg_Ncellmin;
////
TH1 *hsig_Spanavg;
TH1 *hsig_Spansigma;
TH1 *hsig_Spanr;
TH1 *hsig_Spanmax;
TH1 *hsig_Spanmin;

TH1 *hbkg_Spanavg;
TH1 *hbkg_Spansigma;
TH1 *hbkg_Spanr;
TH1 *hbkg_Spanmax;
TH1 *hbkg_Spanmin;

TH2 *hvtxXY2;
TH2 *hvtxZY2;
TH3 *hvtxXYZ2;
TH2 *hvtxXY3;
TH2 *hvtxZY3;
TH3 *hvtxXYZ3;

/////
bool  BpionNoIC5;
double BP;
double Becallen;
int Bifile;
int Bientry;
int Btrackid;
double Bmreco;
double BE;
int BLlayer;
bool   Btype;
int BFlayer;
bool BIsMagnet;
double BcellEmax;
double BcellEr;
double BcellNtot;
double BcellEmin;
double BcellEavg;
double BecalTdiff;
double BlayerEmean;
double BlayerErms;
double BlayerEr;
double BlayerEL4;
double BlayerEL3;
double BlayerEmax;
double BlayerEmin;
double BlayerNcellL0;
double BlayerNcellL1;
double BlayerNcellL2;
double BlayerNcellL3;
double BlayerNcellL4;
double BlayerNcellmax;
double BlayerNcellmin;
double BlayerNcellr;
double BlayerNcellmean;

void organizeHits();

bool inSTT(double x, double y,double z){
    if(abs(x)>1690) return false;
    double r=sqrt((y-centerY)*(y-centerY)+(z-centerZ)*(z-centerZ));
    if(r>2000) return false;
    return true;
}

bool inSTT(const TVector3 &pos){
    return inSTT(pos.X(),pos.Y(),pos.Z());
}

bool inFV(double x, double y, double z){
    //  double centerX=0.;
    if(abs(x)>1490) return false;
    double r=sqrt((y-centerY)*(y-centerY)+(z-centerZ)*(z-centerZ));
    if(r>1800) return false;
    return true;
}


bool inYoke(double x, double y,double z){
    if(abs(x)>1690) return false;
    double r=sqrt((y-centerY)*(y-centerY)+(z-centerZ)*(z-centerZ));
    if(r>3300) return false;
    return true;
}

bool inYoke(const TVector3 &pos){
    return inYoke(pos.X(),pos.Y(),pos.Z());
}



bool absolute_inECALfv_front(double x, double y, double z){
    double r= sqrt(pow(z-centerZ,2) + pow(y-centerY,2));
    if(r <20000 || r> 2250) return false;
    if(abs(x)>1920) return false; //atanu: what is this 192 cm?
    if(z>(centerZ) ) return false;
    if(atan(abs((centerZ-z)/(y-centerY)))<(7.5*TMath::Pi()/180.)) return false;
    return true;
}


bool inECALfv_front(double x, double y, double z){
    if(inSTT(x,y,z)) return false;
    if(z>(centerZ) ) return false;
    if(x>1690 || x<-1690) return false;
    //  if(y> (centerY+2000) || y<(centerY-2000)) return false;  
    return true;
}

bool inECALorSTT(double x, double y, double z){
    double r= sqrt(pow(z-centerZ,2) + pow(y-centerY,2));
    if(r>=2000 && r< 2250 && abs(x)< 2150) return true;  // 224.924258209
    if(r<2000 && abs(x)< 1920) return true;
    return false;
}

bool inECALbarrel(const TVector3 &pos){
    double x=pos.X();
    double y=pos.Y();
    double z=pos.Z();
    double r=sqrt((y-centerY)*(y-centerY)+(z-centerZ)*(z-centerZ));
    if(r<2000 || r>2250) return false;
    if(abs(x)>2150) return false;
    return true;

}

double Attenuation(double d, int planeID)
{
    /*
      dE/dx attenuation - Ea=p1*exp(-d/atl1)+(1.-p1)*exp(-d/atl2)
      d    distance from photocatode - 2 cells/cell; d1 and d2
      atl1  50. cm
      atl2  430 cm planes 1-2    innermost plane is 1
      380 cm plane 3
      330 cm planes 4-5
      p1   0.35
    */
    const double p1 = 0.35;
    const double alt1 = 500.;
    double alt2 = 0.0;

    switch (planeID) {
    case 0:
    case 1:
	alt2 = 4300.0;
	break;

    case 2:
	alt2 = 3800.0;
	break;

    case 3:
    case 4:
	alt2 = 3300.0;
	break;
    
    case 5:
	alt2 = 3300.0 + 620.0;
	break;

    default:
	// std::cout << "planeID out if range" << std::endl;
	alt2 = -999.0;
	break;
    }

    return p1 * TMath::Exp(-d / alt1) + (1. - p1) * TMath::Exp(-d / alt2);
}

double E2PE(double E)
{
    // Average number of photoelectrons = 25*Ea(MeV)
    const double e2p2 = 25.;
    return e2p2*E;
}


void showAll(){
    std::cout<<"============================================="<<std::endl;
    for (std::vector<TG4Trajectory>::iterator
	     t = event->Trajectories.begin();
	 t != event->Trajectories.end(); ++t) {
	std::cout << "   Traj " << t->TrackId;
	std::cout << " " << t->ParentId;
	std::cout << " " << t->Name;
	std::cout << " " << t->Points.size();
	std::cout<< " E:"<<t->GetInitialMomentum().E();
	std::cout<<" beginpro:"<<t->Points.begin()->Process<<" "<<t->Points.begin()->Subprocess<<" endpro:"<<(t->Points.end()-1)->Process<<" "<<(t->Points.end()-1)->Subprocess;
	std::cout << std::endl;
    }
    for (auto d = event->SegmentDetectors.begin();
	 d != event->SegmentDetectors.end(); ++d) {
	std::cout << "   detector: " << d->first;
	std::cout << " " << d->second.size();
	int count = 10;
	std::cout << " up to " << count << " segments";
	std::cout << std::endl;
	//    if(d->first!="Straw") continue;
	int i=0;
        for (std::vector<TG4HitSegment>::iterator
             h = d->second.begin();
             h != d->second.end();
             ++h) {
            std::cout << "      "<<i;
            i++;
            std::cout << " P: " << h->PrimaryId<<" "<<h->Contrib[0];
            std::cout << " E: " << h->EnergyDeposit;
            std::cout << " S: " << h->SecondaryDeposit;
            std::cout << " C: " << h->Contrib.size()<<"->";
            for(unsigned long j=0;j<h->Contrib.size();j++){
            std::cout<<" "<<h->Contrib[j];
            }
            //      std::cout<<" name:"<<h->GetVolName();
            //            std::cout << " L: " << h->TrackLength;
            TLorentzVector mid= (h->Start+h->Stop)*0.5;
            TString name=geo->FindNode(mid.X(),mid.Y(),mid.Z())->GetName();
            std::cout<<" "<<name;
            std::cout<<" start:"<<h->Start.X()<<" "<<h->Start.Y()<<" "<<h->Start.Z()<<" "<<h->Start.T()<<" endT:"<<h->Stop.T();
            //      if((h+1)!= d->second.end() && (h+1)->Start.T()<h->Start.T()) std::cout<<"   !!!!!!! time reverted";
            std::cout<<std::endl;
        }
    }

    std::cout<<"============================================="<<std::endl;
}




std::vector<std::string> makefilelist(std::string st,int Nfilelist=0){
    // if Nfilelist is 0, then the default means input all the lines/files  i have.
    std::vector<std::string> files;
    files.clear();

    std::ifstream filelist(st.c_str());
    //count how many lines in the filelistlist
    int num=std::count(std::istreambuf_iterator<char>(filelist), std::istreambuf_iterator<char>(), '\n');

    if(Nfilelist==0)
	Nfilelist=num;
    else if(Nfilelist>num)
	std::cout<<"we don't have that many filelist, please change the  number."<<std::endl;
    //the following close and reopen is important, cause if you didn't close, right now the pointer is at the end of the filelistlist
    filelist.close();
    filelist.open(st.c_str());

    std::string onefile;
    for(int i=0;i<Nfilelist;i++){
	getline(filelist,onefile);
	files.push_back(onefile);
    }
    filelist.close();
    return files;
}//////////////////////////////////////////////////////////////////






bool findEvis_inecal(bool interact_inecal, bool isbkg, int trackid, double intX, double intY, double intZ, std::map<int, std::pair<int,double> > &Id_npe_earliestT, double &ecalTdiff, std::vector<int> DaughterIds){
    //  Id_Evis.clear();
    //just added this for loop for debugging: atanu 
    Id_npe_earliestT.clear();
  
    double Tstart=9999999;
    double Tend=-999999;
    ////// for muon, only consider muon's own hits, for pion, need to consider all its daughters' hits
    unsigned int ihit;
    int nhit;

    if(!isbkg){ // mu
        ihit=ecalMap[trackid].first;
        nhit=ecalMap[trackid].second;
    }
    else{  // pion
        ihit=0;
        //nhit=event->SegmentDetectors["EMCalSci"].size();
        nhit=event->SegmentDetectors["EMCalSci"].size();
    }

    for(unsigned int i=ihit; i<(ihit+nhit); i++){
	//const TG4HitSegment& h = event->SegmentDetectors["EMCalSci"].at(i);
	const TG4HitSegment& h = event->SegmentDetectors["EMCalSci"].at(i);
	double de=h.EnergyDeposit;
	double x = 0.5*(h.Start.X()+h.Stop.X());
	double y = 0.5*(h.Start.Y()+h.Stop.Y());
	double z = 0.5*(h.Start.Z()+h.Stop.Z());

	if(isbkg  && h.PrimaryId!=trackid && h.Contrib[0]!=trackid && std::find(DaughterIds.begin(), DaughterIds.end(), h.PrimaryId)==DaughterIds.end() && std::find(DaughterIds.begin(), DaughterIds.end(), h.Contrib[0])==DaughterIds.end()) continue;
    
	//    double dis2int=sqrt(pow(intX-x,2)+pow(intY-y,2)+pow(intZ-z,2));
	double dis2int=sqrt(pow(intY-y,2)+pow(intZ-z,2));
	if(isbkg && DaughterIds.size()>0 && dis2int>600) { continue;} //atanu: what is this 600?

	TGeoNode* node = geo->FindNode(x,y,z);
	TString slabstr = node->GetName();
	TString modstr=geo->GetMother()->GetName();
	//    std::cout<<"modstr:"<<modstr<<std::endl;
	int id, modID, slabID, planeID, cellID;
	double d1,d2;
	//std::cout<<"slabstr:"<<slabstr<<std::endl;
	if(slabstr.Contains("volECALActiveSlab") == true)
    {
	
		TObjArray* obj1 = slabstr.Tokenize("_");  //volECALActiveSlab_125_PV_0
		TObjArray* obj2 = modstr.Tokenize("_");  //ECAL_lv_PV_19

		modID  = ((TObjString*) obj2->At(3))->GetString().Atoi();
		slabID = ((TObjString*) obj1->At(1))->GetString().Atoi();
     
		delete obj1;
		delete obj2;

		planeID = slabID/40;

		if (planeID > 4) planeID = 4;
        
        
		double Pmaster[3]={x,y,z};
		double Plocal[3];
		geo->GetCurrentNavigator()->MasterToLocal(Pmaster,Plocal);
		TGeoTrd2* trd = (TGeoTrd2*) node->GetVolume()->GetShape();

		double dx1 = trd->GetDx1();  // shorter one along circumferential
		double dx2 = trd->GetDx2();  // longer one along circumferential
		double dz  = trd->GetDz();   // half thickness , along radial
		double dy1 = trd->GetDy1();  // along axial/fiber , same as dy2
		d1 = dy1 + Plocal[1];
		d2 = dy1 - Plocal[1];

		double dx = (dx2 - dx1) / dz * Plocal[2];
		double dis= Plocal[0]>0? (dx1+dx2)/2. + Plocal[0] - dx/2.: (dx1+dx2)/2. + Plocal[0] + dx/2.;
		double cellw = (dx1+dx2) / 12.;
		cellID = dis / cellw;  // cell ID increase counterclockwise, from 0 to 11, then 0 to 11 
		//	if(DaughterIds.size()>0)  std::cout<<"trackid:"<<trackid<<"  modID:"<<modID<<" slabID:"<<slabID<<" planeID:"<<planeID<<" cellID:"<<cellID<<std::endl;
    }
	else if(slabstr.Contains("vol_endECALActiveSlab") == true)
    {
		///// absolutely no endcap hits
		return false;

		TObjArray* obja = slabstr.Tokenize("_");
		modID  = x>0?30:40;
		slabID = ((TObjString*) obja->At(1))->GetString().Atoi();

		delete obja;

		planeID = slabID/40;
		if (planeID > 4) planeID = 4;
		double Pmaster[3]={x,y,z};
		double Plocal[3];
		//      std::cout<<"x:"<<x<<" y:"<<y<<" z:"<<z<<std::endl;
		geo->GetCurrentNavigator()->MasterToLocal(Pmaster,Plocal);

		TGeoTube* tub = (TGeoTube*) node->GetVolume()->GetShape();
		double rmax = tub->GetRmax();
		cellID = int((Plocal[0]/rmax + 1.) * 45);	 
		// 0: larger--> smaller Z 
		// 1: smaller cellId -> smaller Z

    }
	else 
    { 
        continue;
    }
	//    std::cout<<" "<<id;
	hit_count_test[planeID]++;
    //std::cout << "SlabID: " << slabID << ", count[" << planeID << "]: " << hit_count_test[planeID] << ", cellID: " << cellID << ", modID: " << modID << ", id: " << id << ", d1: " << d1 << ", d2: " << d2 << "\n";
	id = cellID + 100 * planeID + 1000 * modID;
	double en1 = de * Attenuation(d1, planeID);
	double en2 = de * Attenuation(d2, planeID);

	double ave_pe1 = E2PE(en1);
	double ave_pe2 = E2PE(en2);

	int pe1 = ran->Poisson(ave_pe1);
	int pe2 = ran->Poisson(ave_pe2);
	int npe=pe1+pe2;
	double t=(h.Start.T()+h.Stop.T())*0.5; //  + ran->Gaus(0,0.26);

	if(Id_npe_earliestT.find(id)!=Id_npe_earliestT.end()) {
	    Id_npe_earliestT[id].first+= npe;
	    if(t<Id_npe_earliestT[id].second) Id_npe_earliestT[id].second=t;
	}
	else {
	    Id_npe_earliestT[id].first = npe;
	    Id_npe_earliestT[id].second=t;
	}
    
	/*
	  if(Id_Evis.find(id)==Id_Evis.end())
	  Id_Evis[id]= h.EnergyDeposit;
	  else
	  Id_Evis[id]+= h.EnergyDeposit;
	*/
    }

    ecalTdiff=Tend-Tstart;
    for(auto it = Id_npe_earliestT.begin(); it != Id_npe_earliestT.end(); ) {
	if(it->second.first <2.5)
	    it = Id_npe_earliestT.erase(it);
	else
	    ++it;
    }
  

    if(Id_npe_earliestT.size()==0) return false;
    else return true;

}


std::map <int, float> getInfo(std::map<int, std::pair<int, double> > Id_npe_earliestT, double &earliestCellE, double &earliestT, double *layer_ecal_Evis, double *layer_ecal_NcellECAL, double *layer_span, double *layer_dis, double &cellECALEmax, double &cellECALEmin, double &cellECALEavg, double &cellECALEr, double &nCelltot){
    //std::cout << "getInfo: ";
    std::vector<std::set<int> >   layer_modCellids;
    double layer_Etimedis[5];
    double layer_Etimedis2[5];
    double layer_disavg[5];
    double layer_earliestT[5];
    std::set<int> emptyset;

    for(int i=0;i<5;i++){
        layer_ecal_Evis[i]=0;
        layer_ecal_NcellECAL[i]=0;
        layer_span[i]=0;
        layer_modCellids.push_back(emptyset);
        layer_Etimedis[i]=0;
        layer_Etimedis2[i]=0; 
    }
    
    cellECALEmax=-9999;
    cellECALEmin=9999;
    nCelltot=0;
    cellECALEavg=0;  
  
    earliestT=99999999;

    for(auto &cellECAL:Id_npe_earliestT)
    {
        int id=cellECAL.first;
        int planeId=(id%1000)/100;
        int modId=id/1000;
        int cellECALId=id%100;
        int modCellId=modId*12+cellECALId;
        
        double cellECALcalE=cellECAL.second.first/npe1MeV;
	//    myECALgeo->AddHit(modId, planeId,cellECALId);
        if(cellECAL.second.second<earliestT) 
        { 
            earliestT=cellECAL.second.second; 
            earliestCellE=cellECALcalE;
        }
        layer_ecal_Evis[planeId]+=cellECALcalE; //cellECAL.second;
        cellECALEavg+=cellECALcalE; // cellECAL.second;
        if(cellECALcalE>cellECALEmax) cellECALEmax=cellECALcalE; //cellECAL.second;
        if(cellECALcalE<cellECALEmin) cellECALEmin=cellECALcalE; //cellECAL.second;
        layer_ecal_NcellECAL[planeId]++;    
        nCelltot++;
        layer_modCellids[planeId].insert(modCellId);
        layer_Etimedis[planeId]+=modCellId*cellECALcalE; //cellECAL.second;
    }
  
    cellECALEavg/=(nCelltot*1.0);
    cellECALEr=(cellECALEmax-cellECALEmin)/(cellECALEmax+cellECALEmin);

    for(int i=0;i<5;i++)
    {
        //    std::cout<<"###i: "<<i;
        //    for(auto p:layer_modCellids[i])
        //      std::cout<<" "<<p;
        //    std::cout<<std::endl;
        if(layer_modCellids[i].size()!=0){
            int a=*layer_modCellids[i].begin();
            int b=*layer_modCellids[i].rbegin();
            layer_span[i]=(a>b?(a-b):(b-a));
            layer_span[i]++;   
        }
        else
            layer_span[i]=0;
        }
        for(int i=0;i<5;i++){    
            layer_span[i]*=widths[i];
        }
        ///////
        for(int i=0;i<5;i++){
            layer_disavg[i]=layer_Etimedis[i]/layer_ecal_Evis[i];
        }

        for(auto &cellECAL: Id_npe_earliestT){
            int id=cellECAL.first;
            int planeId=(id%1000)/100;
            int modId=id/1000;
            int cellECALId=id%100;
            int modCellId=modId*12+cellECALId;
            //    if(cellECAL.second<0.1) continue;
                //std::cout<<"planeId:"<<planeId<<" modCellId:"<<modCellId<<" cellECALe:"<<cellECAL.second<<std::endl;
            double cellECALcalE=cellECAL.second.first/npe1MeV;
            layer_Etimedis2[planeId]+=cellECALcalE*pow(modCellId-layer_disavg[planeId],2);
        }

        for(int i=0;i<5;i++){
            layer_dis[i]=layer_Etimedis2[i]/layer_ecal_Evis[i];
            layer_dis[i]*=widths[i];
            //    std::cout<<"i:"<<i<<" dis:"<<layer_dis[i]<<std::endl;
        }
        int latestECALLayer=-1;
        std::map <int, float> layer_energy_ecal;
        for(int i=0;i<5;i++){
            if(layer_ecal_Evis[i]>0) { 
                latestECALLayer=i; 
                //h_layer_ecal_Evis->Fill(latestECALLayer, layer_ecal_Evis[i]);
        }
    }
    layer_energy_ecal[latestECALLayer] = layer_ecal_Evis[latestECALLayer];
    return layer_energy_ecal;
}





void getMuSigma(double *Id_Evis, double &mu, double &sigma){
    mu=0;
    sigma=0;
    double n=0.;
    for(int i=0;i<5;i++){
	if(Id_Evis[i]==0) continue;
	mu+=Id_Evis[i];
	n+=1.0;
    }
    mu/=n;
    for(int i=0;i<5;i++){
	if(Id_Evis[i]==0) continue;
	sigma+=pow(Id_Evis[i]-mu,2);
    }
    sigma=sqrt(sigma/n);
    //  mu=(Id_Evis[0]+Id_Evis[1]+Id_Evis[2]+Id_Evis[3]+Id_Evis[4])/5.;
    //  sigma=sqrt((pow(Id_Evis[0]-mu,2)+pow(Id_Evis[1]-mu,2)+pow(Id_Evis[2]-mu,2)+pow(Id_Evis[3]-mu,2)+pow(Id_Evis[4]-mu,2))/5.0);
  
}



void getRMaxMin(double *Id_Evis, double &r, double &max, double &min){
    max=-999;
    min=999999;
    for(int i=1;i<5;i++){
	if(Id_Evis[i]==0) continue;  //<--- this is important
    
	if(Id_Evis[i]>max) max=Id_Evis[i];
	if(Id_Evis[i]<min) min=Id_Evis[i];
    }
    r=(max-min)/(max+min);  
}




void organizeHits(){
    sttMap.clear();
    ecalMap.clear();
    int pretrackid;
    int posttrackid;
    int nhit;
    int istart;

    if(event->SegmentDetectors["Straw"].size()>0){
	pretrackid=event->SegmentDetectors["Straw"].begin()->Contrib[0];
	nhit=1;
	istart=0;
	posttrackid=pretrackid;
	for(unsigned int i=1; i<event->SegmentDetectors["Straw"].size(); i++){
	    posttrackid=event->SegmentDetectors["Straw"].at(i).Contrib[0];
	    //      std::cout<<"posttrackid:"<<posttrackid<<" nhit:"<<nhit<<std::endl;
	    if(posttrackid==pretrackid) { nhit++;continue;}
	    if(sttMap.find(pretrackid) ==sttMap.end())
		sttMap[pretrackid]= std::make_pair(istart,nhit);
	    if(sttMap.find(posttrackid) ==sttMap.end()){
		nhit=1;
		istart=i;
	    }
	    pretrackid=posttrackid;
	}
	if(sttMap.find(posttrackid) ==sttMap.end())
	    sttMap[posttrackid]= std::make_pair(istart,nhit);
    }

    for(auto it = sttMap.begin(); it != sttMap.end(); ) {
	if(it->second.second <4)
	    it = sttMap.erase(it);
	else
	    ++it;
    }

    if(event->SegmentDetectors["EMCalSci"].size()>0){
	pretrackid=event->SegmentDetectors["EMCalSci"].begin()->Contrib[0];
	nhit=1;
	istart=0;
	posttrackid=pretrackid;
	for(unsigned long i=1; i<event->SegmentDetectors["EMCalSci"].size(); i++){
	    posttrackid=event->SegmentDetectors["EMCalSci"].at(i).Contrib[0];
	    //      std::cout<<"posttrackid:"<<posttrackid<<" nhit:"<<nhit<<std::endl;
	    if(posttrackid==pretrackid) { nhit++;continue;}
	    if(ecalMap.find(pretrackid) ==ecalMap.end())
		ecalMap[pretrackid]= std::make_pair(istart,nhit);
	    if(ecalMap.find(posttrackid) ==ecalMap.end()){
		nhit=1;
		istart=i;
	    }
	    pretrackid=posttrackid;
	}
	if(ecalMap.find(posttrackid) ==ecalMap.end())
	    ecalMap[posttrackid]= std::make_pair(istart,nhit);
    }

}




void getVertCoord(const std::vector<double>& z_v, std::vector<double>& y_v,  int sign, double  zc, double yc, double r)
{
    y_v.clear();
    int forward = z_v[1] - z_v[0] > 0 ? 1 : -1;
    double dy_sq, dy;

    dy_sq = r*r - (z_v[0] - zc) * (z_v[0] - zc);
    //  std::cout<<"dy_sq:"<<dy_sq<<std::endl;
    if (dy_sq < 0.) dy_sq = 0.;

    dy = TMath::Sqrt(dy_sq);
    y_v.push_back( yc - forward*sign * dy);

    for (unsigned int i = 1; i < z_v.size(); i++) {
	//    if ((z_v[i] - z_v[i - 1]) * forward > 0.) {
	forward = z_v[i] - z_v[i-1] > 0 ? 1 : -1;
	dy_sq =r*r - (z_v[i] - zc) * (z_v[i] - zc);
	//      std::cout<<"dy_sq:"<<dy_sq<<std::endl;
	if (dy_sq < 0.) dy_sq = 0.;

	dy = TMath::Sqrt(dy_sq);

	y_v.push_back( yc - forward * sign * dy);
	//    } else {
	//      break;
	//    }
    }
}






bool  sttreconstructable3(int trackid, TVector3 &p3, TVector3 &initPos, double &r, double &zc, double &yc, double &b, double &err, double chi2_cr[]){
    //  massrecoSucceed=true;
    //  std::cout<<"trackid----------------------------:"<<trackid<<"            ientry:"<<ientry<<std::endl;
    double sandr=2400;
    double sttr=2000;
    std::vector<double> y_h;
    std::vector<double> z_h;
    std::vector<double> x_v;
    std::vector<double> y_v;
    std::vector<double> z_v;
    std::vector<double> rho;
    std::vector<double> t_h;
    std::vector<double> t_v;
    unsigned int ihit=sttMap[trackid].first;
    int nhit=sttMap[trackid].second;
    TLorentzVector prePos, postPos;
  
    //  double dy,dz,dx;
    TG4HitSegment  h= event->SegmentDetectors["Straw"].at(ihit);
    unsigned int i=(ihit+1);
    if( (event->SegmentDetectors["Straw"].at(ihit+1).Start.T()<h.Start.T() || event->SegmentDetectors["Straw"].at(ihit+1).Stop.T()<h.Stop.T() ) && h.Contrib.size()>1)
	{ h= event->SegmentDetectors["Straw"].at(ihit+1); i=(ihit+2);}
    //  const TG4HitSegment& hseg = ev->SegmentDetectors["Straw"].at(j);
    TLorentzVector mid= (h.Start+h.Stop)*0.5;
    prePos=mid;
    TString name=geo->FindNode(mid.X(),mid.Y(),mid.Z())->GetName();
    bool firstHor;
    if(name.Contains("horizontal")){
	y_h.push_back(mid.Y());
	z_h.push_back(mid.Z());
	t_h.push_back(mid.T());
	//    std::cout<<"mid.Z():"<<mid.Z()<<" mid.Y():"<<mid.Y()<<std::endl;
	//    ma->DrawMarker(mid.Z(),mid.Y());
	firstHor=true;
    }
    else if(name.Contains("vv") ||name.Contains("ver") ) {   //STT_gra_42_ST_ver_ST_air_lv_PV_0
	x_v.push_back(mid.X());
	z_v.push_back(mid.Z());
	t_v.push_back(mid.T());
	firstHor=false;
    }
    else {
	std::cout<<"----------> its not horizontal or ver, but name:"<<name<<std::endl;
    }

    for( ;i<(ihit+nhit);i++){
	h=event->SegmentDetectors["Straw"].at(i);
	postPos= (h.Start+h.Stop)*0.5;
	if(postPos.T()< prePos.T()) { // the time reversed hits are usually bad hits, break it
	    //      if((i-ihit)*1.0<=0.5*nhit) std::cout<<"trackid:"<<trackid<<" time reverse, cut! ihit:"<<ihit<<" nhit+ihit:"<<nhit+ihit<<" i:"<<i<<std::endl;
	    if((i-ihit)*1.0<0.5*nhit && nhit>15) std::cout<<"thistrack has >15hits but break befor half,mayneed lookinto!!!nhit: "<<nhit<<" i-ihit:"<<i-ihit<<" trackid:"<<trackid<<std::endl;
	    break;}
	if(h.EnergyDeposit<250E-6) continue;

	name=geo->FindNode(postPos.X(),postPos.Y(),postPos.Z())->GetName();
	if(name.Contains("horizontal")){
	    y_h.push_back(postPos.Y());
	    z_h.push_back(postPos.Z());
	    t_h.push_back(postPos.T());
	    //      std::cout<<"mid.Z():"<<mid.Z()<<" mid.Y():"<<mid.Y()<<std::endl;
	    //      postPos.Print();
	    //      ma->DrawMarker(postPos.Z(),postPos.Y());
	}  
	else if(name.Contains("vv") ||name.Contains("ver") ) {   //STT_gra_42_ST_ver_ST_air_lv_PV_0
	    x_v.push_back(postPos.X());
	    z_v.push_back(postPos.Z());
	    t_v.push_back(postPos.T());
	}
	else {
	    std::cout<<"----------> its not horizontal or ver, but name:"<<name<<std::endl;
	}
    
	prePos=postPos;
    }// for

    int n_h = z_h.size();
    int n_v = z_v.size();
    //  std::cout<<"n_h:"<<n_h<<std::endl;
    if(n_h <= 4) {
	return false;
    }
    int pdg=event->Trajectories[trackid].PDGCode;
    double charge=dbpdg->GetParticle(pdg)->Charge()/3.;

    int sign= charge>0?1:-1;
    int clockwise=charge>0?-1:1;
    //  double err,chi2_cr;
    //  std::cout<<"test0000"<<std::endl;
    fitCircle(n_h, z_h, y_h, zc, yc, r, err, chi2_cr);

    //  std::cout<<"ientry:"<<ientry<<"  trackid:"<<trackid<<"   err:"<<err<<"   chi2_cr:"<<chi2_cr<<std::endl;
    //  std::cout<<"test0001"<<" size:"<<z_v.size()<<std::endl;
    if(z_v.size()<3) return false;
  
    getVertCoord(z_v, y_v, sign, zc, yc, r);
    //  std::cout<<"y_v.size():"<<y_v.size()<<std::endl;  
    if (y_v.size() <= 2) {
	return false;
    }

  
    double dphi;

    double cos = clockwise * (y_v[0] - yc) / r;
    double sin = -clockwise * (z_v[0] - zc) / r;

  
    for (unsigned int k = 0; k < y_v.size(); k++) {
        dphi= clockwise*(TMath::ATan2(y_v[0]-yc,z_v[0]-zc) - TMath::ATan2(y_v[k]-yc,z_v[k]-zc));
        if(dphi<0) dphi+=TMath::Pi()*2;
        rho.push_back(dphi*r);
    }
    
    double cov[2][2];
    double chi2_ln;
    double a; 
    int linearres=fitLinear(y_v.size(), rho, x_v, a, b, cov, chi2_ln);
    if(linearres!=0) return false;
    //  std::cout<<"a:"<<a<<" x_v[0]:"<<x_v[0]<<std::endl;

    double Pyz= r* 0.299792458 * B;
    double Px= Pyz * b;
    double z0,y0;
    if(event->Trajectories[trackid].ParentId==-1){
        z0=event->Primaries[0].Position.Z();
        y0=event->Primaries[0].Position.Y();
    }
    else {
        if(firstHor){
            z0=z_h[0];
            y0=y_h[0];
        }
        else{
            z0=z_v[0];
            y0=y_v[0];
        }
    }
    initPos.SetXYZ(x_v[0], y_v[0], z_v[0]);

    double r0z = z0 - zc;
    double r0y = y0 - yc;
    double ang_yz = TMath::ATan2(r0z, -r0y);
    double Py = sign* Pyz * TMath::Sin(ang_yz);
    double Pz =  sign*Pyz * TMath::Cos(ang_yz);

    double P=sqrt(Pyz*Pyz+Px*Px);
    p3.SetXYZ(Px,Py,Pz);
    return true;
}




bool sttreconstructable2(int trackid, TVector3 &p3){
    std::vector<double> y_h;
    std::vector<double> z_h;
    std::vector<double> x_v;
    std::vector<double> y_v;
    std::vector<double> z_v;
    std::vector<double> rho;
    std::vector<double> t_h;
    std::vector<double> t_v;
    unsigned int ihit=sttMap[trackid].first;
    int nhit=sttMap[trackid].second;
    TLorentzVector prePos, postPos;
  
    TG4HitSegment  h= event->SegmentDetectors["Straw"].at(ihit);
    unsigned int i=(ihit+1);
    if( (event->SegmentDetectors["Straw"].at(ihit+1).Start.T()<h.Start.T() || event->SegmentDetectors["Straw"].at(ihit+1).Stop.T()<h.Stop.T() ) && h.Contrib.size()>1)
	{ h= event->SegmentDetectors["Straw"].at(ihit+1); i=(ihit+2);}
    TLorentzVector mid= (h.Start+h.Stop)*0.5;
    prePos=mid;
    TString name=geo->FindNode(mid.X(),mid.Y(),mid.Z())->GetName();
    bool firstHor;
    if(name.Contains("horizontal")){
	y_h.push_back(mid.Y());
	z_h.push_back(mid.Z());
	t_h.push_back(mid.T());
	firstHor=true;
    }
    else if(name.Contains("vv") ||name.Contains("ver") ) {   //STT_gra_42_ST_ver_ST_air_lv_PV_0
	x_v.push_back(mid.X());
	z_v.push_back(mid.Z());
	t_v.push_back(mid.T());
	firstHor=false;
    }
    else {
	std::cout<<"----------> its not horizontal or ver, but name:"<<name<<std::endl;
    }

    for( ;i<(ihit+nhit);i++){
	h=event->SegmentDetectors["Straw"].at(i);
    
	if(postPos.T()< prePos.T()) { // the time reversed hits are usually bad hits, break it
	    if((i-ihit)*1.0<0.5*nhit && nhit>15) std::cout<<"thistrack has >15hits but break befor half,mayneed lookinto!!!nhit: "<<nhit<<" i-ihit:"<<i-ihit<<" trackid:"<<trackid<<std::endl;
	    break;}
	if(h.EnergyDeposit<250E-6) continue;
	postPos= (h.Start+h.Stop)*0.5;
	name=geo->FindNode(postPos.X(),postPos.Y(),postPos.Z())->GetName();
	if(name.Contains("horizontal")){
	    y_h.push_back(postPos.Y());
	    z_h.push_back(postPos.Z());
	}  
	else if(name.Contains("vv") || name.Contains("ver")) {   //STT_gra_42_ST_ver_ST_air_lv_PV_0
	    x_v.push_back(postPos.X());
	    z_v.push_back(postPos.Z());
	}
	else {

	}
    
	prePos=postPos;
    }// for

    int n_h = z_h.size();
    int n_v = z_v.size();
    if(n_h <= 4) {
	return false;
    }
    int pdg=event->Trajectories[trackid].PDGCode;
    int sign= pdg>0?1:-1;
    int clockwise=pdg>0?-1:1;
    double zc,yc,r,err,chi2_cr[6];
    fitCircle(n_h, z_h, y_h, zc, yc, r, err, chi2_cr);
    getVertCoord(z_v, y_v, sign, zc, yc, r);
    if (y_v.size() <= 2) {
	return false;
    }

    double dphi= clockwise*(TMath::ATan2(y_h[0]-yc,z_h[0]-zc) - TMath::ATan2(y_h[n_h-1]-yc,z_h[n_h-1]-zc));
    if(dphi<0) dphi+=TMath::Pi()*2;
    double disyz=dphi*r;
  

    double cos = clockwise * (y_v[0] - yc) / r;
    double sin = -clockwise * (z_v[0] - zc) / r;


    for (unsigned int k = 0; k < y_v.size(); k++) {
	rho.push_back(z_v[k] * cos + y_v[k] * sin);
    }
  
    double cov[2][2];
    double chi2_ln;
    double a,b;
    int linearres=fitLinear(y_v.size(), rho, x_v, a, b, cov, chi2_ln);
    if(linearres!=0) return false;
  
    double Pyz= r* 0.299792458 * B;
    double Px= Pyz * b;
    double z0,y0;
    if(event->Trajectories[trackid].ParentId==-1){
	z0=event->Primaries[0].Position.Z();
	y0=event->Primaries[0].Position.Y();
    }
  
    double disx=disyz*b;
  
    double dis=sqrt(disx*disx+disyz*disyz);
  
    double r0z = z0 - zc;
    double r0y = y0 - yc;
    double ang_yz = TMath::ATan2(r0z, -r0y);
    double Py = sign* Pyz * TMath::Sin(ang_yz);
    double Pz =  sign*Pyz * TMath::Cos(ang_yz);

    double P=sqrt(Pyz*Pyz+Px*Px);

    p3.SetXYZ(Px,Py,Pz);
}



bool sttreconstructable(int trackid, TVector3 &p3){
    int nYhit=0;
    int nXhit=0;
    TLorentzVector prePos, postPos;

    unsigned int ihit=sttMap[trackid].first;
    int nhit=sttMap[trackid].second;

    double Lyz=0;
    double L=0;
    double Lx=0;
    double dy,dz,dx;
    TG4HitSegment  h= event->SegmentDetectors["Straw"].at(ihit);
    unsigned int i=(ihit+1);
    if( (event->SegmentDetectors["Straw"].at(ihit+1).Start.T()<h.Start.T() || event->SegmentDetectors["Straw"].at(ihit+1).Stop.T()<h.Stop.T() ) && h.Contrib.size()>1)
	{ h= event->SegmentDetectors["Straw"].at(ihit+1); i=(ihit+2);}
    TLorentzVector mid= (h.Start+h.Stop)*0.5;
    prePos=mid;
    TString name=geo->FindNode(mid.X(),mid.Y(),mid.Z())->GetName();
    if(name.Contains("horizontal")) nYhit++;
    else nXhit++;
    for( ;i<(ihit+nhit);i++){
	h=event->SegmentDetectors["Straw"].at(i);
	postPos= (h.Start+h.Stop)*0.5;
	if(postPos.T()< prePos.T()) { // the time reversed hits are usually bad hits, break it
	    if((i-ihit)*1.0<0.5*nhit && nhit>15) std::cout<<"thistrack has >15hits but break befor half,mayneed lookinto!!!nhit: "<<nhit<<" i-ihit:"<<i-ihit<<" trackid:"<<trackid<<std::endl;
	    break;}
	if(h.EnergyDeposit<250E-6) continue;
	postPos= (h.Start+h.Stop)*0.5;
	dx= postPos.X()-prePos.X();
	dy= postPos.Y()-prePos.Y();
	dz= postPos.Z()-prePos.Z();
	name=geo->FindNode(postPos.X(),postPos.Y(),postPos.Z())->GetName();
	if(name.Contains("horizontal")) nYhit++;
	else nXhit++;
	Lyz+= sqrt(dy*dy+dz*dz);
	L+= sqrt(dx*dx+dy*dy+dz*dz);
	prePos=postPos;
    }

    if(nYhit<4) return false;
  
    TVector3 initP=event->Trajectories[trackid].InitialMomentum.Vect();
    double Pt=sqrt(initP.Y()*initP.Y()+initP.Z()*initP.Z());
    double Px=initP.X();
    double P=initP.Mag();
    double dipAng=atan(Px/Pt);
    double thetaYZ=TMath::ATan2(initP.Y(),initP.Z()); /// <------ 

    Lx=sqrt(L*L-Lyz*Lyz);
    L/=1000;
    Lyz/=1000.; //mm-> m
    Lx/=1000.; //mm-> m
    Pt/=1000.;  // Mev-->GeV
    Px/=1000.;
    P/=1000.;
    double dPt2Pt=sqrt(pow(sigmas*Pt/0.3/B/L/L*sqrt(720./(nYhit+4)),2)+pow(0.045/B/sqrt(L*x0),2));
    double Pt_smear=Pt*ran->Gaus(1, dPt2Pt);
    while(Pt_smear<=0){
	Pt_smear=Pt*ran->Gaus(1, dPt2Pt);
    }
    double sigma_dipAng=13.6E-3/P*sqrt(L/x0)*(1+0.038*log(L/x0)); // from pdg
    double dipAng_smear=dipAng + ran->Gaus(0,sigma_dipAng);
    double Px_smear=Pt*tan(dipAng_smear);
    double sigma_thetaYZ=13.6E-3/P*sqrt(Lyz/x0)*(1+0.038*log(Lyz/x0)); 
    double thetaYZ_smear=thetaYZ + ran->Gaus(0,sigma_thetaYZ);
    double Py_smear=Pt_smear*sin(thetaYZ_smear);
    double Pz_smear=Pt_smear*cos(thetaYZ_smear);
    double P_smear=sqrt(Pt_smear*Pt_smear+Px_smear*Px_smear);
  
    p3.SetXYZ(Px_smear*1000,Py_smear*1000,Pz_smear*1000);
    return true;
}




int getDaughters(int trackid, std::vector<int> &daughterIds, std::vector<std::string> &daughterNames){
    daughterIds.clear();
    daughterNames.clear();
    int nDaughter=0;
    std::vector<int> ddids;
    std::vector<std::string> ddnames;
    for(int i=(trackid+1);i<event->Trajectories.size();i++){
		if(event->Trajectories[i].ParentId==trackid){
			nDaughter++;
			daughterNames.push_back(event->Trajectories[i].Name);
			daughterIds.push_back(event->Trajectories[i].TrackId);
			nDaughter+=getDaughters(event->Trajectories[i].TrackId, ddids, ddnames);
			daughterIds.insert(daughterIds.end(), ddids.begin(), ddids.end());
			daughterNames.insert( daughterNames.end(), ddnames.begin(), ddnames.end());
		}
    }
    return nDaughter;
}




bool Interact_InECAL(bool &endInSTT, int trackid, double &x, double &y, double &z, std::vector<int> &daughterIds, std::vector<std::string> &daughterNames){
    endInSTT=false;
    daughterIds.clear();

    if(inSTT(event->Trajectories[trackid].Points.rbegin()->Position.Vect())) { endInSTT=true; return false;}
    if(!inECALbarrel(event->Trajectories[trackid].Points.rbegin()->Position.Vect())) { return false;}
  
    int ndaughter=getDaughters(trackid, daughterIds, daughterNames);

    if(ndaughter==0) return false;
    x=event->Trajectories[trackid].Points.rbegin()->Position.X();
    y=event->Trajectories[trackid].Points.rbegin()->Position.Y();
    z=event->Trajectories[trackid].Points.rbegin()->Position.Z();

    return true;
}



bool getPosP_enteringECAL(int trackid, double &dis, double &t1, double &t2, double &p1, double &p2, double &radius){
    //  std::cout<<"-------------------------- start to draw markers -----------------------"<<std::endl;
    double sandr=240;
    double sttr=200;
  
    dis=0;
    if(!inSTT(event->Trajectories[trackid].Points[0].Position.Vect())){
	std::cout<<"it start point not in STT, wrong, check"<<std::endl; return false;}
  
    if(event->Primaries.begin()->GetPosition().Vect()!=event->Trajectories[trackid].Points[0].Position.Vect()){
	std::cout<<"the first point is not vtx,check"<<std::endl; return false;
    }

    p1=event->Trajectories[trackid].Points[0].Momentum.Mag();
    t1=event->Trajectories[trackid].Points[0].Position.T();
    int imark=4;

    std::vector<double> ys;
    std::vector<double> zs;
    ys.push_back(event->Trajectories[trackid].Points[0].Position.Y()/10);
    zs.push_back(event->Trajectories[trackid].Points[0].Position.Z()/10);

    if(debug>=3) { 
	std::cout<<"first point: x: "<<event->Trajectories[trackid].Points[0].Position.X()<<" Y:"<<event->Trajectories[trackid].Points[0].Position.Y()<<" z:"<<event->Trajectories[trackid].Points[0].Position.Z()<<std::endl;
	event->Trajectories[trackid].Points[0].Momentum.Print();
    }

    std::string savename="marks_i"+std::to_string(ientry)+"_trkid"+std::to_string(trackid)+".pdf";
    for(int i=1;i<event->Trajectories[trackid].Points.size();i++){
        ys.push_back(event->Trajectories[trackid].Points[i].Position.Y()/10);
        zs.push_back(event->Trajectories[trackid].Points[i].Position.Z()/10);    

        if(debug>=3) {
            std::cout<<"point:"<<i<<"  x: "<<event->Trajectories[trackid].Points[i].Position.X()<<" Y:"<<event->Trajectories[trackid].Points[i].Position.Y()<<" z:"<<event->Trajectories[trackid].Points[i].Position.Z()<<std::endl;
            event->Trajectories[trackid].Points[i].Momentum.Print();
        }
        double dx=(event->Trajectories[trackid].Points[i].Position.Vect()-event->Trajectories[trackid].Points[i-1].Position.Vect()).Mag();
		dis+=dx;
		if(!inSTT(event->Trajectories[trackid].Points[i].Position.Vect())) { 
			double yc,zc, r, err, chi2[6];
			int rc=fitCircle( ys.size(), zs, ys, zc, yc, r, err, chi2);
			t2=event->Trajectories[trackid].Points[i].Position.T(); 
			p2=event->Trajectories[trackid].Points[i].Momentum.Mag(); 
			radius=r;
		  
			return true;
		}
    }
    return false;
}




bool findRecoMass(double &recomass, int trackid, double earliestT, const TVector3 &initP){
    double dis,t1,t2,p1,p2, r;
    bool good=getPosP_enteringECAL(trackid, dis, t1, t2, p1, p2,r);
    if(!good) { std::cout<<"cannot find Pos_enteringECAL, check"<<std::endl; return false;}
    int pdg=event->Trajectories[trackid].PDGCode;
    double m=dbpdg->GetParticle(pdg)->Mass()*1000;  // MeV
    double charge=dbpdg->GetParticle(pdg)->Charge()/3.; 
    double vtxTtrue=event->Primaries.begin()->GetPosition().T();
    double vtxT=vtxTtrue + ran->Gaus(0,1);
    double deltaT=t2 - vtxT;  //ns
    double deltaTtrue=t2-vtxT;
    deltaT=deltaTtrue;
    TVector3 endpos;  // cm

    double beta=dis/(t2-t1)/300.;
    double gamma=1./sqrt(1-beta*beta);
    recomass= (p1+p2)/2./beta/gamma;

    /////// method2 //////
    double P=r*3*0.6;
    recomass=P/beta/gamma;
  
    return true;
}



bool getRecoMass(double &mreco, double &mreco2, double dis2ecal, double p, double t0, double tecal, double cellE){
    double t0reco=t0+ran->Gaus(0,0.26); 
    double sigma_t=0.054/sqrt(cellE/1000)+0.05;
    h_sigma_ecalt->Fill(sigma_t);

    //  sigma_t=0.26;
    double tecalreco=tecal+ran->Gaus(0,sigma_t);
    double dt=tecalreco-t0reco;
    double beta=dis2ecal/dt/300;
    double beta2=dis2ecal/(tecal-t0)/300;
  
    if(beta>=1 || beta<=0 ) return false;
    double gamma=1/sqrt(1-beta*beta);
    double gamma2=1/sqrt(1-beta2*beta2);
    mreco=p/beta/gamma;
    mreco2=p/beta2/gamma2;
    return true;
}



bool gettrklengthECAL(double &lenECAL, int trackid, int lastlayer,  double r, double zc, double yc, const TVector3 &initPos, double b){
    int pdg=event->Trajectories[trackid].PDGCode;
    double charge=dbpdg->GetParticle(pdg)->Charge()/3.;
  
    extmuid=new extrapolatorECAL(B);
    extmuid->setRZYC_charge_pos_b(r, zc, yc, charge, initPos, b);
    TVector3 endPos;
    bool extrap_succeed;
    double dis2ecal2,dis2ecal1;
    extrap_succeed=extmuid->extrapolate2ECALlayer(lastlayer, dis2ecal2,endPos);
  
    if(!extrap_succeed) {  
        return false;}
        extrap_succeed=extmuid->extrapolate2ECALlayer(200.0, dis2ecal1,endPos); 
        if(!extrap_succeed) { std::cout<<"the second extrapolation wrong !!!!!!!"<<std::endl; return false;
    }
  
    lenECAL=(dis2ecal2-dis2ecal1)*10.;
    return true;
}



void fillYokeInfo(int isurface, double x, double y, double z, const TVector3 & p3){
    double phi=TMath::ATan2(y-centerY, z-centerZ)*180./TMath::Pi();
    double phiP=TMath::ATan2(p3.Y(), p3.Z())*180./TMath::Pi() ;
    double thetaXP=TMath::ASin(p3.X()/p3.Mag())*180./TMath::Pi();
  
    hp_Yoke[Btype][isurface]->Fill(p3.Mag());
    hphiPerp[Btype][isurface]->Fill(phiP-phi);
    hthetaXP[Btype][isurface]->Fill(thetaXP);
    hphi_Yoke[Btype][isurface]->Fill(phi);
}



void getYokeSurfaceInfo(int trackid, int &iOuter, int &iInner){
    iOuter=-1;
    iInner=-1;
    double yokeBarrelRmax=3300;
    double yokeBarrelRmin=2930;
    double yokeBarrelX=4300;
    double endx=event->Trajectories[trackid].Points.rbegin()->Position.X();
    double endy=event->Trajectories[trackid].Points.rbegin()->Position.Y();
    double endz=event->Trajectories[trackid].Points.rbegin()->Position.Z();
    double r0=sqrt(pow(endy-centerY,2) + pow(endz- centerZ, 2));
    if(r0< yokeBarrelRmin) return;

    double r;
    int nP=event->Trajectories[trackid].Points.size();
    for(int i=(nP-1); i>0 ; i--){
	double x=event->Trajectories[trackid].Points[i].Position.X();
	double y=event->Trajectories[trackid].Points[i].Position.Y();
	double z=event->Trajectories[trackid].Points[i].Position.Z();
	r=sqrt(pow(y-centerY,2) + pow(z-centerZ, 2));
	if(abs(r-yokeBarrelRmax)<0.001 && abs(x)<yokeBarrelX/2) {
	    iOuter=i; fillYokeInfo(1, x, y, z, event->Trajectories[trackid].Points[i].Momentum); continue;
	}
	if(abs(r-yokeBarrelRmin)<0.001 && abs(x)<yokeBarrelX/2) {
	    iInner=i;  fillYokeInfo(0, x, y, z, event->Trajectories[trackid].Points[i].Momentum);   break;
	}
	if(r<yokeBarrelRmin) break;
    
    }

    if(iOuter!=-1 && iInner==-1) std::cout<<"###### weird, iOuter not -1 but iInner is 1"<<std::endl;

}



void getMuPi_kinematics(std::string file_name, int entry_num, bool &Passed){
    if(debug>=3)  showAll();
    organizeHits();
  
    int nsttTrack=sttMap.size();
  
    for(auto it = sttMap.begin(); it != sttMap.end(); it++) 
    {
        int trackid=it->first;
        // only for 
        if(event->Trajectories[trackid].ParentId!=-1) continue;

        std::string name=event->Trajectories[trackid].Name;
        BpionNoIC5=false;
        if (name == "mu-")
        {
            mu_count ++;
        }
        else if (name == "pi-")
        {
            pi_count++;
        }

        if(name!="mu-" && name!="pi-")
        //if(name!="mu-" ) //just for test
            continue;
        //std::cout << "SKIPPING PIONS JUST FOR A TEST: ATANU\n";

        if(name=="mu+" || name=="mu-")
            Btype=1;
        else
            Btype=0;

        double trueP=event->Trajectories[trackid].InitialMomentum.P();
        double trueE=event->Trajectories[trackid].InitialMomentum.E();

        htrueP[Btype][0]->Fill(trueP);


        TVector3 p3, initPos;
        double rad, zc, yc, b;
        double err, chi2_cir[6];
        if(!sttreconstructable3(trackid,p3, initPos, rad, zc, yc, b, err, chi2_cir)) continue;
        //std::cout << "Line # : " << __LINE__ << "\n";
        //std::cout<<"reconstructable in STT"<<std::endl;
        htrueP[Btype][1]->Fill(trueP);
        
        TVector3 endpos;
        bool isBkg=(Btype==0);
        
        std::vector<int> DaughterIds;
        std::vector<std::string> daughterNames;
        double intX,intY,intZ;
        
        daughterNames.clear();
        bool endinSTT;
        bool interact_inecal=Interact_InECAL(endinSTT, trackid, intX, intY, intZ, DaughterIds, daughterNames); // have daughters or not
        if(endinSTT) continue;
        htrueP[Btype][2]->Fill(trueP);

        std::map<int, std::pair<int,double> > Id_npe_earliestT;

        double ecalTdiff;

        bool haveECALhits=findEvis_inecal(interact_inecal, isBkg, trackid, intX, intY, intZ, Id_npe_earliestT, ecalTdiff, DaughterIds);
        if(!haveECALhits) continue;

        //std::cout<<"haveECALhits pass"<<std::endl;
        htrueP[Btype][3]->Fill(trueP);

        chi2_cir[3]*=1000000;
        chi2_cir[4]*=100000;
        chi2_cir[5]*=1E12;

        for(int i=0;i<6;i++){
            hchi2_cir[Btype][i]->Fill(chi2_cir[i]);
        }

        herr_cir[Btype]->Fill(err);
        if(isBkg && chi2_cir[1]>110 ) { /*std::cout<<"ientry:"<<ientry<<"  trackid:"<<trackid<<"  name:"<<name<<" chi2_cir:"<<chi2_cir[0]<<" err:"<<err<<" chi2_cir[1]:"<<chi2_cir[1]<<" chi2_cir[2]:"<<chi2_cir[2]<<" chi2_cir[3]:"<<chi2_cir[3]<<std::endl; */ continue;}
        
        htrueP[Btype][4]->Fill(trueP);

        double layer_ecal_Evis[5];
        double layer_Evis[5];
        double layer_Ncell[5];
        double layer_Span[5];
        double layer_Dis[5];
        double cellEmax,cellEmin, cellEavg, cellEr, cellNtot;

        std::string titlename="ientry: "+std::to_string(ientry)+"  "+name+" -> trkid: "+std::to_string(trackid);

        double earliestT, earliestCellE;
        std::map < int, float>  layer_energy_ecal=getInfo(Id_npe_earliestT, earliestCellE, earliestT, layer_ecal_Evis, layer_Ncell, layer_Span, layer_Dis, cellEmax, cellEmin, cellEavg, cellEr, cellNtot);
        //std::cout << "layer_energy_ecal size: "  << layer_energy_ecal.size() << "\n";
        int latestECALLayer;
        float vis_energy_ecal;
        double mreco,mreco2;
        
        for (std::map <int, float>::iterator it = layer_energy_ecal.begin(); it != layer_energy_ecal.end(); ++it)
        {
            latestECALLayer = it->first;
            vis_energy_ecal = it->second;
            if(interact_inecal){
                hcate[Btype][0]->Fill(latestECALLayer/4);
                hcateIntECAL[Btype][0]->Fill(latestECALLayer);
                if (Btype == 1) sig_count++;
                if (Btype == 0) bkg_count++;
                h_layer_Evis_IntECAL[Btype][0]->Fill(latestECALLayer, vis_energy_ecal);
            }
            else {
                //if(latestECALLayer == 4)std::cout << file_name << "\t" << entry_num << "\t" << trackid << "\t" << Btype << "\n";
                hcate[Btype][0]->Fill(latestECALLayer/4+2);
                if (Btype == 1) sig_count++;
                if (Btype == 0) bkg_count++;
                hcateNoIntECAL[Btype][0]->Fill(latestECALLayer);
                h_layer_Evis_NoIntECAL[Btype][0]->Fill(latestECALLayer, vis_energy_ecal);
            }
        }

        layer_energy_ecal.clear();

        if((name=="pi+" || name=="pi-") && !interact_inecal && latestECALLayer==4 ) {   BpionNoIC5=true;}
        //    htrueP[Btype][5]->Fill(trueP);

        if(!isBkg){
            hsig_E_llay->Fill(trueP,latestECALLayer);
            hsig_llay->Fill(latestECALLayer);

        } else{
            hbkg_llay->Fill(latestECALLayer);
            hbkg_E_llay->Fill(trueP,latestECALLayer);
        }
        
        double ecalLen, P, p2len;
        //    initPos.Print();
        if(latestECALLayer!=4){
            bool extrapwell=gettrklengthECAL(ecalLen, trackid, latestECALLayer, rad, zc, yc, initPos, b);
            if(!extrapwell) { 

            std::cout<<" extrap return false, ientry:"<<ientry<<"  trackid:"<<trackid<<" name:"<<name<<" latestECALLayer:"<<latestECALLayer<<" circlefitting err:"<<err<<" chi2_cir:"<<chi2_cir[0]<<std::endl; 
            if(err>15 || chi2_cir[0] >15000) { std::cout<<"-----> it probabaly have elastic scattering in the STT"<<std::endl; continue; }
            std::cout << "Line # : " << __LINE__ << "\n";
            double r02center=sqrt(pow(zc-centerZ,2)+ pow(yc-centerY,2));
            if((r02center+rad)<2000) { std::cout<<"------> the circle simply doesnot reach ECAL, --> ientry:"<<ientry<<"  trackid:"<<trackid<<std::endl; continue;}
            //std::cout << "Line # : " << __LINE__ << "\n";
            if((r02center+rad)>2230) { std::cout<<"------>the circle outer layer is out of ECAL, weird, check!!!"<<std::endl; continue;}

            int pdg=event->Trajectories[trackid].PDGCode;
            double charge=dbpdg->GetParticle(pdg)->Charge()/3.;
            extmuid=new extrapolatorECAL(B);
            extmuid->setRZYC_charge_pos_b(rad, zc, yc, charge, initPos, b);
            TVector3 endPos;
            bool extrap_succeed;
            double dis2ecal2,dis2ecal1;
            dis2ecal2=extmuid->extrapolate2outermost(endPos);
          

            extrap_succeed=extmuid->extrapolate2ECALlayer(200.0, dis2ecal1,endPos);
            if(!extrap_succeed) {
                std::cout<<" ----> cannot find 200 crossing point, must be wrong"<<std::endl;
                continue;
            }

            ecalLen = dis2ecal2-dis2ecal1;
            if(ecalLen<0) { std::cout<<" -----> minus ecal track length, wrong !!!"<<std::endl; continue;}
            std::cout<<" ---->it finally find its ecal tracklength!!: ecalLen:"<<ecalLen<<std::endl;
            }
            P=p3.Mag();
            p2len=P/ecalLen;   // cm;
        }
       
        if(interact_inecal){
            hcate[Btype][1]->Fill(latestECALLayer/4);
            hcateIntECAL[Btype][1]->Fill(latestECALLayer);
            h_layer_Evis_IntECAL[Btype][1]->Fill(latestECALLayer, vis_energy_ecal);
        }
        else {
            hcate[Btype][1]->Fill(latestECALLayer/4+2);
            hcateNoIntECAL[Btype][1]->Fill(latestECALLayer);
            h_layer_Evis_NoIntECAL[Btype][1]->Fill(latestECALLayer, vis_energy_ecal);
        }


        BP=P;
        Becallen=ecalLen;
        BE=trueE;
        BLlayer=latestECALLayer;
        Bmreco=mreco;
        Btrackid=trackid;

        BcellEmax=cellEmax;
        BcellEr=cellEr;
        BcellNtot=cellNtot;
        BcellEmin=cellEmin;
        BcellEavg=cellEavg;
        BcellEr=cellEr;
        BecalTdiff=ecalTdiff;

        ////////////////
        double mu,sigma, r, max,min;
        getMuSigma(layer_Evis, mu , sigma);
        getRMaxMin(layer_Evis, r, max, min);

        BlayerEmean=mu;
        BlayerErms=sigma;
        BlayerEr=r;
        BlayerEL4=layer_Evis[4];
        BlayerEL3=layer_Evis[3];
        BlayerEmax=max;
        BlayerEmin=min;

        getMuSigma(layer_Ncell, mu , sigma);
        getRMaxMin(layer_Ncell, r, max, min);



        BlayerNcellL0=layer_Ncell[0];
        BlayerNcellL1=layer_Ncell[1];
        BlayerNcellL2=layer_Ncell[2];
        BlayerNcellL3=layer_Ncell[3];
        BlayerNcellL4=layer_Ncell[4];
        BlayerNcellmax=max;
        BlayerNcellmin=min;
        BlayerNcellr=r;
        BlayerNcellmean=mu;
        //  std::cout<<"BlayerNcellL0:"<<BlayerNcellL0<<" BlayerNcellL1:"<<BlayerNcellL1<<std::endl;
        nntree->Fill();
        //    getMuSigma(layer_Span, mu , sigma);
        //    getRMaxMin(layer_Span, r, max, min);

        /////////////////////////////

        double params[10];
        params[0] = BcellEmax;
        params[1] = BcellNtot;
        //    params[2] = cellEavg;
        params[2] = BcellEr;
        params[3] = BlayerEmean;
        params[4] = BlayerErms;
        params[5] = BlayerEr;
        params[6] = BlayerEL4;
        params[7] = BlayerEmax;
        params[8] = BlayerEmin;
        params[9] = BlayerNcellmax;

        double paramsLnot4[8];
        paramsLnot4[0] = BcellEmax;
        paramsLnot4[1] = BcellNtot;
        paramsLnot4[2] = BlayerEmean;
        paramsLnot4[3] = BlayerEmax;
        paramsLnot4[4] = BlayerEmin;
        paramsLnot4[5] = BlayerEr;
        paramsLnot4[6] = BP;
        paramsLnot4[7] = Becallen;

        double nn;
        if(latestECALLayer==4){
            nn=mytrainL4->Value(0,params);
        }
        else {
            nn=mytrainLnot4->Value(0,paramsLnot4);
            
        }
       

        nnHist->Fill(nn); 

        if(nn>ecal_cut){
            Passed = true;
            if( interact_inecal){
            hcate[Btype][2]->Fill(latestECALLayer/4);
            hcateIntECAL[Btype][2]->Fill(latestECALLayer);
            h_layer_Evis_IntECAL[Btype][2]->Fill(latestECALLayer, vis_energy_ecal);
            }
            else {
            
            hcate[Btype][2]->Fill(latestECALLayer/4+2);
            hcateNoIntECAL[Btype][2]->Fill(latestECALLayer);
            h_layer_Evis_IntECAL[Btype][2]->Fill(latestECALLayer, vis_energy_ecal);
            }
        }
        
        if(nn>ecal_cut) htrueP[Btype][5]->Fill(trueP);
        if(nn>ecal_cut && latestECALLayer==4) htrueP[Btype][6]->Fill(trueP);

        int iOuter,iInner;
        getYokeSurfaceInfo(trackid, iOuter,iInner);
        if(nn>ecal_cut && iInner>-1)    htrueP[Btype][7]->Fill(trueP);
        if(nn>ecal_cut && iOuter>-1)    htrueP[Btype][8]->Fill(trueP);
        
        if(iOuter>-1){
            htrueP[Btype][9]->Fill(trueP);      
        }
        else if(iInner>-1){
            htrueP[Btype][10]->Fill(trueP);
        }
        else if(nn>ecal_cut){
            htrueP[Btype][11]->Fill(trueP);
        }
    }

}




int main(int argc, char *argv[]){
  if(argc<7) { std::cout<<"need: listfile, startfile#, nfiles, ecal_cut, emi_cut"<<std::endl; return 0;}
  
  std::vector<std::string> files=makefilelist(argv[1]); //fhc_stt_cc_list.txt"); //edep_fhc_stt_boundarypts_list.txt");
  int startfile=std::atoi(argv[2]);
  int nfile=std::atoi(argv[3]);
  const char *outfile=argv[4];
  std::string full_out_path(argv[4]);
  int last_hash_pos = full_out_path.find_last_of("/");
  std::string output_dir = full_out_path.substr(0, last_hash_pos) + "/";
  std::ofstream temp_log_file;
  double *ptr_ecal_cut = &ecal_cut;
  double *ptr_emi_cut = &emi_cut;
  *ptr_ecal_cut = std::atof(argv[5]);
  *ptr_emi_cut = std::atof(argv[6]);
    std::cout << "LIST FILE : " << argv[1] << "\n";
    std::cout << "StartFILE : " << startfile << "\n";
    std::cout << "NFiles    : " << nfile << "\n";
    std::cout << "Ecal cut  :  " << ecal_cut << "\n";
    std::cout << "EMI  cut  :  " << emi_cut << "\n";
    std::cout << "Output dir:  " << output_dir << "\n";

  

    int testStartEntry=-1;
    int testNEntry=-1;
    //if(argc>=6) { testStartEntry=std::atoi(argv[5]);}
    //if(argc==7) { testNEntry=std::atoi(argv[6]);}

      TFile *file;  
    //  TG4Event* event=NULL;
    TTree* gEDepSimTree = NULL;
    TTree* rootrackerTree;
    TBranch * brEvtVtx;
    double      EvtVtx[4];
    double x,y,z;

    ran=new TRandom3(0); /// <set it to 0 so everytime it will run with different seed

    TFile *outf=new TFile(outfile,"recreate");
    //  TTree *nntree;
    nntree=new TTree("nntree","variables for nn analysis");
    nntree->Branch("ifile", &Bifile, "ifile/I");
    nntree->Branch("ientry", &Bientry, "ientry/I");
    nntree->Branch("trackid", &Btrackid, "trackid/I");
  
    nntree->Branch("E", &BE, "E/D");
    nntree->Branch("pionNoIC5", &BpionNoIC5, "pionNoIC5/O");
    nntree->Branch("P", &BP, "P/D");
    nntree->Branch("ecallen", &Becallen, "ecallen/D");
    nntree->Branch("type", &Btype, "type/O");
    nntree->Branch("mreco", &Bmreco, "mreco/D");
    nntree->Branch("BLlayer", &BLlayer, "BLlayer/I");
    nntree->Branch("BFlayer", &BFlayer, "BFlayer/I");
    nntree->Branch("BIsMagnet", &BIsMagnet, "BIsMagnet/O");
    nntree->Branch("cellEmax", &BcellEmax, "cellEmax/D");
    nntree->Branch("cellEavg",&BcellEavg,"cellEavg/D");
    nntree->Branch("cellEr", &BcellEr, "cellEr/D");
    nntree->Branch("cellEmin", &BcellEmin, "cellEmin/D");
    nntree->Branch("cellNtot", &BcellNtot, "cellNtot/D");
    nntree->Branch("ecalTdiff",&BecalTdiff,"ecalTdiff/D");
    nntree->Branch("layerEmean", &BlayerEmean, "layerEmean/D");
    nntree->Branch("layerErms", &BlayerErms, "layerErms/D");
    nntree->Branch("layerEr", &BlayerEr, "layerEr/D");
    nntree->Branch("layerEL4", &BlayerEL4, "layerEL4/D");
    nntree->Branch("layerEL3", &BlayerEL3, "layerEL3/D");
    nntree->Branch("layerEmax", &BlayerEmax, "layerEmax/D");
    nntree->Branch("layerEmin", &BlayerEmin, "layerEmin/D");
    nntree->Branch("layerNcellL0", &BlayerNcellL0, "layerNcellL0/D"); 
    nntree->Branch("layerNcellL1", &BlayerNcellL1, "layerNcellL1/D");
    nntree->Branch("layerNcellL2", &BlayerNcellL2, "layerNcellL2/D");
    nntree->Branch("layerNcellL3", &BlayerNcellL3, "layerNcellL3/D");
    nntree->Branch("layerNcellL4", &BlayerNcellL4, "layerNcellL4/D");
    nntree->Branch("layerNcellmax", &BlayerNcellmax, "layerNcellmax/D");
    nntree->Branch("layerNcellmin", &BlayerNcellmin, "layerNcellmin/D");
    nntree->Branch("layerNcellr", &BlayerNcellr, "layerNcellr/D");
    nntree->Branch("layerNcellmean", &BlayerNcellmean, "layerNcellmean/D");
  
    std::string partype[2]={"bkg","sig"};
    std::string surf[2]={"inner","outer"};

    for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
	    hp_Yoke[i][j]=new TH1F(Form("hp_Yoke_%s_%s",partype[i].c_str(), surf[j].c_str()), "",100,0,5000);
	    hphi_Yoke[i][j]=new TH1F(Form("hphi_Yoke_%s_%s",partype[i].c_str(), surf[j].c_str()),"",200,-180,180);
	    hphiPerp[i][j]=new TH1F(Form("hphiPerp_%s_%s",partype[i].c_str(), surf[j].c_str()),"",100,-90,90);
	    hthetaXP[i][j]=new TH1F(Form("hthetaXP_%s_%s",partype[i].c_str(), surf[j].c_str()),"",100,-90,90);

	}
    }

    for(int i=0;i<2;i++){
	for(int j=0;j<12;j++){
	    htrueP[i][j]=new TH1F(Form("htrueP_%s_%d",partype[i].c_str(), j), "", 500,0,5000);
	}

	for(int j=0;j<3;j++){
	    hcate[i][j]=new TH1I(Form("hcate_%s_%d",partype[i].c_str(), j),"",4,0,4);
	    hcateIntECAL[i][j]=new TH1I(Form("hcateIntECAL_%s_%d",partype[i].c_str(), j),"",5,0,5);
	    hcateNoIntECAL[i][j]=new TH1I(Form("hcateNoIntECAL_%s_%d",partype[i].c_str(), j),"",5,0,5);
	    h_layer_Evis_IntECAL[i][j]=new TProfile(Form("h_layer_Evis_IntECAL_%s_%d",partype[i].c_str(), j),"",5,0,5);
	    h_layer_Evis_NoIntECAL[i][j]=new TProfile(Form("h_layer_Evis_NoIntECAL_%s_%d",partype[i].c_str(), j),"",5,0,5);
	}
	hchi2_cir[i][0]=new TH1F(Form("hchi2v0_cir_%s",partype[i].c_str()),"",800,0, 40000);
	hchi2_cir[i][1]=new TH1F(Form("hchi2v1_cir_%s",partype[i].c_str()),"",800,0, 1);
	hchi2_cir[i][2]=new TH1F(Form("hchi2v2_cir_%s",partype[i].c_str()),"",800,0, 5);
	hchi2_cir[i][3]=new TH1F(Form("hchi2v3_cir_%s",partype[i].c_str()),"",800,0, 150);
	hchi2_cir[i][4]=new TH1F(Form("hchi2v4_cir_%s",partype[i].c_str()),"",800,0, 60);
	hchi2_cir[i][5]=new TH1F(Form("hchi2v5_cir_%s",partype[i].c_str()),"",800,0, 1000);

	herr_cir[i]=new TH1F(Form("herr_cir_%s",partype[i].c_str()),"",400,0, 100);
    }
    hsig_P2len=new TH1F("hsig_P2len","", 100,0, 20);
    hbkg_P2len=new TH1F("hbkg_P2len","", 100,0, 20);
  
    hsig_P_len=new TH2F("hsig_P_len","", 50,100,800, 50,0, 400);
    hbkg_P_len=new TH2F("hbkg_P_len","", 50,100,800, 50,0, 400);

    h_sigma_ecalt=new TH1F("h_sigma_ecalt","",200,0,4);
    hsig_E_llay=new TH2F("hsig_E_llay","",200,0, 800, 5, 0,5);
    hbkg_E_llay=new TH2F("hbkg_E_llay","",200,0, 800, 5, 0, 5);
  
    hsig_mreco2_llay=new TH2F("hsig_mreco2_llay","",200,0,500,5,0,5);
    hbkg_mreco2_llay=new TH2F("hbkg_mreco2_llay","",200,0,500,5,0,5);
    hsig_mreco_llay=new TH2F("hsig_mreco_llay","",200,0,500,5,0,5);
    hbkg_mreco_llay=new TH2F("hbkg_mreco_llay","",200,0,500,5,0,5);

    hsig_ecalTdiff=new TH1F("hsig_ecalTdiff","",100,0,20);
    hbkg_ecalTdiff=new TH1F("hbkg_ecalTdiff","",100,0,20);
  

    hsig_crossNlayer=new TH1I("hsig_crossNlayer","",6,0,6);
    hbkg_crossNlayer=new TH1I("hbkg_crossNlayer","",6,0,6);

    hsig_cellEmax=new TH1F("hsig_cellEmax","",100,0,50);
    hsig_cellEmin=new TH1F("hsig_cellEmin","",100,0,10);
    hsig_cellEavg=new TH1F("hsig_cellEavg","",100,0,20);
    hsig_cellEr=new TH1F("hsig_cellEr","",100,0,1);
    hsig_cellNtot=new TH1F("hsig_cellNtot","",25,0,25);
    hbkg_cellEmax=new TH1F("hbkg_cellEmax","",100,0,50);
    hbkg_cellEmin=new TH1F("hbkg_cellEmin","",100,0,10);
    hbkg_cellEavg=new TH1F("hbkg_cellEavg","",100,0,20);
    hbkg_cellEr=new TH1F("hbkg_cellEr","",100,0,1);
    hbkg_cellNtot=new TH1F("hbkg_cellNtot","",25,0,25);
  

    hsig_E_id=new TH2F("hsig_E_id","",100,0,40, 5,0,5);
    hbkg_E_id=new TH2F("hbkg_E_id","",100,0,40, 5,0,5);
    hsig_Ncell_id=new TH2F("hsig_Ncell_id","",10,0,10, 5,0,5);
    hbkg_Ncell_id=new TH2F("hbkg_Ncell_id","",10,0,10, 5,0,5);
    hsig_Span_id=new TH2F("hsig_Span_id","",60,0,60, 5,0,5);
    hbkg_Span_id=new TH2F("hbkg_Span_id","",60,0,60, 5,0,5);
    hsig_Dis_id=new TH2F("hsig_Dis_id","",100,0,5, 5,0,5);
    hbkg_Dis_id=new TH2F("hbkg_Dis_id","",100,0,5, 5,0,5);
    /////////
    hsig_Eavg=new TH1F("hsig_Eavg","",100,0,30);
    hsig_Esigma=new TH1F("hsig_Esigma","",50,0,30);
    hsig_Er=new TH1F("hsig_Er","",50,0,1);
    hsig_Emax=new TH1F("hsig_Emax","",100,0,60);
    hsig_Emin=new TH1F("hsig_Emin","",100,0,20);

    hbkg_Eavg=new TH1F("hbkg_Eavg","",100,0,30);
    hbkg_Esigma=new TH1F("hbkg_Esigma","",50,0,30);
    hbkg_Er=new TH1F("hbkg_Er","",50,0,1);
    hbkg_Emax=new TH1F("hbkg_Emax","",100,0,60);
    hbkg_Emin=new TH1F("hbkg_Emin","",100,0,20);
    ///////
    hsig_Ncellavg=new TH1F("hsig_Ncellavg","",100,0,5);
    hsig_Ncellsigma=new TH1F("hsig_Ncellsigma","",50,0,3);
    hsig_Ncellr=new TH1F("hsig_Ncellr","",50,0,1);
    hsig_Ncellmax=new TH1F("hsig_Ncellmax","",10,0,10);
    hsig_Ncellmin=new TH1F("hsig_Ncellmin","",10,0,10);

    hbkg_Ncellavg=new TH1F("hbkg_Ncellavg","",100,0,5);
    hbkg_Ncellsigma=new TH1F("hbkg_Ncellsigma","",50,0,3);
    hbkg_Ncellr=new TH1F("hbkg_Ncellr","",50,0,1);
    hbkg_Ncellmax=new TH1F("hbkg_Ncellmax","",10,0,10);
    hbkg_Ncellmin=new TH1F("hbkg_Ncellmin","",10,0,10);
    /////////
    hsig_Spanavg=new TH1F("hsig_Spanavg","",100,0,25);
    hsig_Spansigma=new TH1F("hsig_Spansigma","",50,0,20);
    hsig_Spanr=new TH1F("hsig_Spanr","",50,0,1);
    hsig_Spanmax=new TH1F("hsig_Spanmax","",50,0,30);
    hsig_Spanmin=new TH1F("hsig_Spanmin","",50,0,20);
    hbkg_Spanavg=new TH1F("hbkg_Spanavg","",100,0,25);
    hbkg_Spansigma=new TH1F("hbkg_Spansigma","",50,0,20);
    hbkg_Spanr=new TH1F("hbkg_Spanr","",50,0,1);
    hbkg_Spanmax=new TH1F("hbkg_Spanmax","",50,0,30);
    hbkg_Spanmin=new TH1F("hbkg_Spanmin","",50,0,20);
    ///////////////
    hsig_llay=new TH1F("hsig_llay","",5,0,5);
    hbkg_llay=new TH1F("hbkg_llay","", 5,0,5);

    TH2F *hvtxXY=new TH2F("hvtxXY","",320,-1800,1400,390,-1500,2400);
    TH2 *hvtxZY=new TH2F("hvtxZY","",400,-800,3200,390,-1500, 2400);
    TH3 *hvtxXYZ=new TH3F("hvtxXYZ","",64,-1800,1400, 78,-1500, 2400, 80,-800,3200);
  
    hvtxXY2=new TH2F("hvtxXY2","",320,-1800,1400,390,-1500,2400);
    hvtxZY2=new TH2F("hvtxZY2","",400,-800,3200,390,-1500, 2400);
    hvtxXYZ2=new TH3F("hvtxXYZ2","",64,-1800,1400, 78,-1500, 2400, 80,-800,3200);

    hvtxXY3=new TH2F("hvtxXY3","",320,-1800,1400,390,-1500,2400);
    hvtxZY3=new TH2F("hvtxZY3","",400,-800,3200,390,-1500, 2400);
    hvtxXYZ3=new TH3F("hvtxXYZ3","",64,-1800,1400, 78,-1500, 2400, 80,-800,3200);

    TH2F *hvtxXY_sig=new TH2F("hvtxXY_sig","",320,-1800,1400,390,-1500,2400);
    TH2 *hvtxZY_sig=new TH2F("hvtxZY_sig","",400,-800,3200,390,-1500, 2400);



    nnHist = new TH1F("nnHist","nnHist",100,-1.5,1.5);


    dbpdg=new TDatabasePDG();
    extmuid=new extrapolatorECAL(0.6);

  
    std::ifstream myinfile;
    std::string line;
    myinfile.open("badevent2.txt");
    int Ifile, Ientry, Itrackid;
    double nn;
    for(int aa = 0;aa<21;aa++){
        if(getline(myinfile,line)){
            std::istringstream iss(line);
            iss>>nn>>Ifile>>Ientry>>Itrackid;
            fileentry_trk.insert(Ifile*1000000 + Ientry*100 + Itrackid);
        }
    }
  
    mytrainL4=new nnTrainedchi110_ECAL();
    mytrainLnot4=new nnTrainednotL4_chi110_ECAL();
    //opening a temporary log file to list the file name index and events that passed the ecal cut
    temp_log_file.open(output_dir + "passed_log.txt", std::ios::out); 
    for(ifile=startfile ;ifile<nfile+startfile;ifile++){
    
	//    myECALgeo=new ecalgeo();
	//    myECALgeo->Init(0,false,"ecalgeo_"+std::to_string(ifile)+".pdf");

	Bifile=ifile;
	std::cout<<"files[ifile]:"<<files[ifile]<<std::endl;
	file=new TFile(files[ifile].c_str());
	gEDepSimTree = (TTree*) file->Get("EDepSimEvents");
	geo = (TGeoManager*) file->Get("EDepSimGeometry");
	gEDepSimTree->SetBranchAddress("Event",&event);
	int nentry=gEDepSimTree->GetEntries();
	cout<<"*******-----------------ifile:"<<ifile<<" "<<files[ifile]<<" nentry:"<<nentry<<std::endl;
	rootrackerTree=(TTree*)file->Get("DetSimPassThru/gRooTracker");
	brEvtVtx   = rootrackerTree -> GetBranch ("EvtVtx");
	brEvtVtx    -> SetAddress (EvtVtx);
    
	int startEntry=(testStartEntry!=-1)?testStartEntry:0;
	int endplusEntry=(testNEntry!=-1)?(startEntry+testNEntry):nentry;
	for(int i=startEntry;i<endplusEntry;i++){
	    if(i%500==0) 
		std::cout<<"ientry:"<<i<<std::endl;
	    if(debug>=1) std::cout<<"---------ientry:"<<i<<std::endl;
	    ientry=i;
	    Bientry=ientry;
	    gEDepSimTree->GetEntry(i);
	    rootrackerTree->GetEntry(i);

	    TLorentzVector vtx=event->Primaries.begin()->GetPosition();
    //getMuPi_kinematics();
	    if(!inFV(vtx.X(),vtx.Y(),vtx.Z())) continue;
	    //std::cout<<"in fiducial"<<std::endl;
	    //      getEdep_inecal(i, event, crossECAL);

    //for debugging .. comment this for loop
    /* 
    for (auto d = event->SegmentDetectors.begin();
                     d != event->SegmentDetectors.end(); ++d)
                { cout << d->first << endl;} 
            continue;	
    */




    if(debug>=3) showAll();
	    //showAll(); //for debugging, comment later: Atanu
       bool passed = false;
	   getMuPi_kinematics(files[ifile], nentry, passed);
       std::string base_filename = files[ifile].substr(files[ifile].find_last_of("/") + 1);
        if(passed == true) 
        {   
            temp_log_file << base_filename.substr(8,3) << "\t" << i << "\n";
        }

	}
	file->Close();
	//    delete myECALgeo;

    }
    /////////////////

    /*
      TCanvas *can=new TCanvas("can","",1);
      TString pdfname=argv[5];
      gStyle->SetOptStat(0);
      can->Print(pdfname+"[");
      can->Print(pdfname+"]");
    */
    outf->Write();
    outf->Close();
    temp_log_file.close();

    std::cout << "mu count: " << mu_count << "[sig_count: " << sig_count << ", bkg_count: " << bkg_count << "], pi count: " << pi_count << "\n";

}
