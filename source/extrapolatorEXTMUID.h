

// yz plane is curve plane
// B direction : +x
// use cm

#include "TArc.h"
#include "TMath.h"
#include "TCanvas.h"
#include "TArrow.h"

class extrapolatorEXTMUID{

private:
  double r;
  int clockwise;
  double yc; //y coordinate of the center of curvature in the global coordinate system
  double zc; //z ...
  double B;
  
  //  double vyz; // cm/ns
  //  double vx; // cm/ns
  //  double vy;
  //  double vz;
  //  double v; // cm/ns
  //  double dt;
  //  double beta;
  double initPhi;  //<--- phi=0 is z positive axis
  double endPhi;
  double dPhi;
  TVector3 initPos;
  TVector3 initMom;
  //  double Mass;
  double Cha;
  double   px2pyz;
  //  TVector3 curPos;
  
 
public:
  extrapolatorEXTMUID(double bfield){B=bfield;}
  void setPosMomCha(const TVector3 &pos, const TVector3 &mom,  double charge);
  void setRZYC_charge_pos_b(double R, double ZC, double YC, double charge, const TVector3 &pos, double Px2pyz);
  void Go(double len, TVector3 &pos);
  bool extrapolate2EXTMUIDlayer(double rr, double &trklength, TVector3 &pos);
  bool extrapolate2EXTMUIDlayer(int extmuidlayer, double &trklength, TVector3 &pos);
  double extrapolate2outermost(TVector3 &pos);
  void plot(const char *name);
  double gettrklength();

};

void extrapolatorEXTMUID::setRZYC_charge_pos_b(double R, double ZC, double YC, double charge, const TVector3 &pos, double Px2pyz){
  r=R/10.;  //r is the radius of curvature of the track 
  zc=ZC/10.;
  yc=YC/10.;
  Cha=charge;
  clockwise=Cha>0?1:-1;
  initPos=pos*0.1;
  px2pyz=Px2pyz;
  initPhi=TMath::ATan2(initPos.Y()-yc, initPos.Z()-zc)*180./TMath::Pi();
}

void extrapolatorEXTMUID::setPosMomCha(const TVector3 &pos, const TVector3 &mom,  double charge){
  initPos=pos*0.1; //from mm to cm
  initMom=mom; // MeV
  Cha=charge;
  clockwise=Cha>0?1:-1;

  double P=mom.Mag();
  //  double e_SI  = 1.602176487e-19;
  double cspeed = 299792458.;
  //  double P_SI=P*e_SI/cspeed;
  r =  P*1E6/cspeed/abs(charge)/B*100;
  //from MeV to eV, from m to cm;
  double pyz=sqrt(mom.Z()*mom.Z()+mom.Y()*mom.Y());  
  double dyc=clockwise*mom.Z()/pyz*r;
  double dzc=-clockwise*mom.Y()/pyz*r;
  yc=dyc+initPos.Y();
  zc=dzc+initPos.Z();  
  initPhi=TMath::ATan2(-dyc, -dzc)*180./TMath::Pi();
  px2pyz=mom.X()/pyz;
  //  std::cout<<"initPhi:"<<initPhi<<"     yc:"<<yc<<"     zc:"<<zc<<std::endl;
}


void extrapolatorEXTMUID::Go(double lenyz, TVector3 &pos){
  dPhi=lenyz/r*180./TMath::Pi();
  double dx=px2pyz*lenyz;  // dt*vx;
  endPhi=initPhi+clockwise*dPhi;

  double y=r*sin(endPhi*TMath::Pi()/180.)+yc;
  double z=r*cos(endPhi*TMath::Pi()/180.)+zc;
  double x=dx+initPos.X();
  pos.SetXYZ(x,y,z);
}

void extrapolatorEXTMUID::plot(const char* name){
  //double emi_thickness = 21.9/10.; 
  double sttr=200;
  double thickness[1]={2.19};
   //double r6[2];
   double r6[1];
  //r6[0]=330+0.05;
  r6[0]=330;
  r6[1]=r6[0]+thickness[0];
//  r6[2]=r6[1]+thickness[1]; //15 cm passive layer
//  r6[3]=r6[2]+thickness[2];
  
  double centerY=-238.473;  // cm
  double centerZ=2391; // cm
  
  //double sandr=240;  //what is this???? Why 240???
  //double sandr = 330 + +0.05 + 2; // 19 = 2 + 15 + 2
  double sandr = 330 + 2; // 19 = 2 + 15 + 2
  TCanvas *can_extrap=new TCanvas("can_extrap","",600,600);
  can_extrap->Range(centerZ-sandr,centerY-sandr,centerZ+sandr,centerY+sandr);

  TArc sttcir(centerZ,centerY, sttr);
  sttcir.SetFillStyle(0);
  sttcir.Draw();
  for(int i=0;i<1;i++){
    sttcir.DrawArc(centerZ,centerY, r6[i+1]);
  }


  if(clockwise==-1) 
    sttcir.DrawArc(zc,yc, r, endPhi, initPhi);    
  else 
    sttcir.DrawArc(zc,yc, r, initPhi, endPhi);

  double dirZ=-1.*clockwise*sin(initPhi*TMath::Pi()/180.)*50;
  double dirY=clockwise*cos(initPhi*TMath::Pi()/180.)*50;
  TArrow ar(initPos.Z(), initPos.Y(), initPos.Z()+dirZ, initPos.Y()+dirY);
  ar.Draw();
  
  can_extrap->Print(name);
}


double extrapolatorEXTMUID::gettrklength(){
  return dPhi*TMath::Pi()/180.*r*sqrt(1+px2pyz*px2pyz);
}






double extrapolatorEXTMUID::extrapolate2outermost(TVector3 &pos){
  double centerY=-238.473;  // cm
  double centerZ=2391; // cm
  
  endPhi=TMath::ATan2(yc-centerY, zc-centerZ)*180./TMath::Pi();
  dPhi=clockwise*(endPhi-initPhi);
  if(dPhi<0) dPhi+=360.;
  double dx=px2pyz*r*dPhi/180.*TMath::Pi();
  
  double y=r*sin(endPhi*TMath::Pi()/180.)+yc;
  double z=r*cos(endPhi*TMath::Pi()/180.)+zc;
  double x=dx+initPos.X();
  pos.SetXYZ(x,y,z);
  return gettrklength();
  
}


bool  extrapolatorEXTMUID::extrapolate2EXTMUIDlayer(int extmuidlayer, double &trklength, TVector3 &pos){
  double thickness[3]={2.};
  double r6[2];
  //r6[0]=sttr;
  //r6[0]=330+0.05;
  r6[0]=330;
  r6[1]=r6[0]+thickness[0];
//  r6[2]=r6[1]+thickness[1]; 
//  r6[3]=r6[2]+thickness[2];
 
  double rr=(r6[extmuidlayer]+r6[extmuidlayer+1])/2.;
  return extrapolate2EXTMUIDlayer(rr,trklength, pos);
}




bool  extrapolatorEXTMUID::extrapolate2EXTMUIDlayer(double rr, double &trklength , TVector3 &pos){
  double r1; 
  double centerY=-238.473;  // cm
  double centerZ=2391; // cm
  
  r1=sqrt(pow(initPos.Y()-centerY,2)+pow(initPos.Z()-centerZ,2));
  if(r1>=200) { /*std::cout<<"the initial pooint is outside the STT,return false!"<<std::endl; */return false;}
  double c2c=sqrt(pow(yc-centerY,2)+pow(zc-centerZ,2));
  if( (c2c+r)<330) { /*std::cout<<" this circle will not cross extmuid , r too small"<<std::endl; */return false;}

  double nlayers = (2.+15.+2.)/2; //Bing was using a constant = 5 for this, that I couldn't understand! I thought, it's probably the # of ECAL layers, in extmuid case, widths are different for scint and iron, so 3 cannot be used, therefore
                                  //let's divide the whole extmuid into layers of size = width of the scint layer (= 2cmm)
  double low=0;                     
  double high=800;
  double width, start, diff=1000;
  //width=TMath::Min((high-low)/5., r/2) ;
  width=TMath::Min((high-low)/nlayers, r/2) ;

  double diff_change;//while(true) never ends so putting this step..atanu
  int while_count = 0;
  while(true){
      start=low+width;
      diff_change = 0;
      for(int i=0;i<13;i++){
        Go(start,pos);
        r1=sqrt(pow(pos.Y()-centerY,2)+pow(pos.Z()-centerZ,2));
        if(r1>=rr) { diff=r1-rr;  high=start; low=start-width; /*std::cout<<"start:"<<start<<"  width:"<<width<<" r1:"<<r1<<" rr:"<<rr<<" diff:"<<diff<<std::endl; */ break;}
        start+=width;
      }
      if(r1<rr) { std::cout<<"something is wrong, r1(" << r1<<") < rr(" << rr << ") start:" << start <<" r1: "<< r1 <<std::endl; return false;}
      if(diff<0.5) break;
      //width=(high-low)/5.;
      width=(high-low)/nlayers;
      while_count++;
      if(while_count > 100){return false;}
  }
  trklength=gettrklength();
  return true;

}
