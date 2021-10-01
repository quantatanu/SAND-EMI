

// yz plane is curve plane
// B direction : +x
// use cm

#include "TArc.h"
#include "TMath.h"
#include "TCanvas.h"
#include "TArrow.h"

class extrapolatorECAL{

private:
  double r;
  int clockwise;
  double yc;
  double zc;
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
  extrapolatorECAL(double bfield){B=bfield;}
  void setPosMomCha(const TVector3 &pos, const TVector3 &mom,  double charge);
  void setRZYC_charge_pos_b(double R, double ZC, double YC, double charge, const TVector3 &pos, double Px2pyz);
  void Go(double len, TVector3 &pos);
  bool extrapolate2ECALlayer(double rr, double &trklength, TVector3 &pos);
  bool extrapolate2ECALlayer(int ecallayer, double &trklength, TVector3 &pos);
  double extrapolate2outermost(TVector3 &pos);
  void plot(const char *name);
  double gettrklength();

};

void extrapolatorECAL::setRZYC_charge_pos_b(double R, double ZC, double YC, double charge, const TVector3 &pos, double Px2pyz){
  r=R/10.;   
  zc=ZC/10.;
  yc=YC/10.;
  Cha=charge;
  clockwise=Cha>0?1:-1;
  initPos=pos*0.1;
  px2pyz=Px2pyz;
  initPhi=TMath::ATan2(initPos.Y()-yc, initPos.Z()-zc)*180./TMath::Pi();
}

void extrapolatorECAL::setPosMomCha(const TVector3 &pos, const TVector3 &mom,  double charge){
  initPos=pos*0.1; //from mm to cm
  initMom=mom; // MeV
  //  Mass=mass;   // MeV
  Cha=charge;
  clockwise=Cha>0?1:-1;

  //  double E=sqrt(mom.Mag2() + Mass*Mass);
  double P=mom.Mag();
  /*
  beta=P/E;
  v=beta*30.;
  vx=v*mom.X()/mom.Mag();
  vy=v*mom.Y()/mom.Mag();
  vz=v*mom.Z()/mom.Mag();
  vyz=sqrt(vy*vy+vz*vz);
  */

  //r=mv/qb
  //  double e_SI  = 1.602176487e-19;
  double cspeed= 3E8;
  //  double P_SI=P*e_SI/cspeed;
  r=  P*1E6/cspeed/abs(charge)/B*100;
  //from MeV to eV, from m to cm;
  //  std::cout<<"mass:"<<mass<<"  charge:"<<charge<<"   initMom:"<<P<<"   beta:"<<beta<<"    v:"<<v<<"    r:"<<r<<" vx:"<<vx<<" vy:"<<vy<<" vz:"<<vz<<std::endl;
  double pyz=sqrt(mom.Z()*mom.Z()+mom.Y()*mom.Y());  
  //  double dyc=clockwise?(-vz/vyz*r): (vz/vyz*r);
  //  double dzc=clockwise?(vy/vyz*r): (-vy/vyz*r);
  double dyc=clockwise*mom.Z()/pyz*r;
  double dzc=-clockwise*mom.Y()/pyz*r;
  yc=dyc+initPos.Y();
  zc=dzc+initPos.Z();  
  initPhi=TMath::ATan2(-dyc, -dzc)*180./TMath::Pi();
  px2pyz=mom.X()/pyz;
  //  std::cout<<"initPhi:"<<initPhi<<"     yc:"<<yc<<"     zc:"<<zc<<std::endl;
}


void extrapolatorECAL::Go(double lenyz, TVector3 &pos){

  //  double t=len/v;
  //  double dyz=t*vyz;
  //  double dx=t*vx;
  dPhi=lenyz/r*180./TMath::Pi();
  //  dt=lenyz/vyz;
  double dx=px2pyz*lenyz;  // dt*vx;
  endPhi=initPhi+clockwise*dPhi;

  double y=r*sin(endPhi*TMath::Pi()/180.)+yc;
  double z=r*cos(endPhi*TMath::Pi()/180.)+zc;
  double x=dx+initPos.X();
  //  std::cout<<"dphi:"<<dphi<<" endPhi:"<<endPhi<<" y:"<<y<<" z:"<<z<<std::endl;
  pos.SetXYZ(x,y,z);
  
}

void extrapolatorECAL::plot(const char* name){
  
  double sttr=200;
  double thickness[5]={4.4,4.4,4.4,4.4,5.28};
  double r6[6];
  r6[0]=sttr;
  r6[1]=r6[0]+thickness[0];
  r6[2]=r6[1]+thickness[1];
  r6[3]=r6[2]+thickness[2];
  r6[4]=r6[3]+thickness[3];
  r6[5]=r6[4]+thickness[4];
  
  double centerY=-238.473;  // cm
  double centerZ=2391; // cm
  
  double sandr=240;
  TCanvas *can_extrap=new TCanvas("can_extrap","",600,600);
  can_extrap->Range(centerZ-sandr,centerY-sandr,centerZ+sandr,centerY+sandr);

  TArc sttcir(centerZ,centerY, sttr);
  sttcir.SetFillStyle(0);
  sttcir.Draw();
  for(int i=0;i<5;i++){
    //    sttcir.SetFillStyle(4000);
    sttcir.DrawArc(centerZ,centerY, r6[i+1]);
  }
  //  sttcir.SetFillStyle(4000);
  /// you cannot save as a pdf, if pdf, the larger arc will cover the smaller one
  // sae as a png


  if(clockwise==-1) 
    sttcir.DrawArc(zc,yc, r, endPhi, initPhi);    
  else 
    sttcir.DrawArc(zc,yc, r, initPhi, endPhi);

  double dirZ=-1.*clockwise*sin(initPhi*TMath::Pi()/180.)*50;
  double dirY=clockwise*cos(initPhi*TMath::Pi()/180.)*50;
  //  double dirY=vy/vyz*50;
  //  double dirZ=vz/vyz*50;
  //  std::cout<<"dirY:"<<dirY<<" dirZ:"<<dirZ<<std::endl;
  TArrow ar(initPos.Z(), initPos.Y(), initPos.Z()+dirZ, initPos.Y()+dirY);
  ar.Draw();
  
  can_extrap->Print(name);
  
}
double extrapolatorECAL::gettrklength(){
  return dPhi*TMath::Pi()/180.*r*sqrt(1+px2pyz*px2pyz);
}

double extrapolatorECAL::extrapolate2outermost(TVector3 &pos){
  double centerY=-238.473;  // cm
  double centerZ=2391; // cm
  
  endPhi=TMath::ATan2(yc-centerY, zc-centerZ)*180./TMath::Pi();
  dPhi=clockwise*(endPhi-initPhi);
  if(dPhi<0) dPhi+=360.;
  double dx=px2pyz*r*dPhi/180.*TMath::Pi();
  
  double y=r*sin(endPhi*TMath::Pi()/180.)+yc;
  double z=r*cos(endPhi*TMath::Pi()/180.)+zc;
  double x=dx+initPos.X();
  //  std::cout<<"dphi:"<<dphi<<" endPhi:"<<endPhi<<" y:"<<y<<" z:"<<z<<std::endl;
  pos.SetXYZ(x,y,z);
  return gettrklength();
  
}
bool  extrapolatorECAL::extrapolate2ECALlayer(int ecallayer, double &trklength, TVector3 &pos){
  double sttr=200;
  double thickness[5]={4.4,4.4,4.4,4.4,5.28};
  double r6[6];
  r6[0]=sttr;
  r6[1]=r6[0]+thickness[0];
  r6[2]=r6[1]+thickness[1];
  r6[3]=r6[2]+thickness[2];
  r6[4]=r6[3]+thickness[3];
  r6[5]=r6[4]+thickness[4];
 
  double rr=(r6[ecallayer]+r6[ecallayer+1])/2.;

  return extrapolate2ECALlayer(rr,trklength, pos);

}

bool  extrapolatorECAL::extrapolate2ECALlayer(double rr, double &trklength , TVector3 &pos){
  /*
  double sttr=200;
  double thickness[5]={4.4,4.4,4.4,4.4,5.28};
  double r6[6];
  r6[0]=sttr;
  r6[1]=r6[0]+thickness[0];
  r6[2]=r6[1]+thickness[1];
  r6[3]=r6[2]+thickness[2];
  r6[4]=r6[3]+thickness[3];
  r6[5]=r6[4]+thickness[4];
  */
  //  double rr=(r6[ilayer]+r6[ilayer+1])/2.;
  
  double r1; 
  double centerY=-238.473;  // cm
  double centerZ=2391; // cm
  
  r1=sqrt(pow(initPos.Y()-centerY,2)+pow(initPos.Z()-centerZ,2));
  
  if(r1>=200) { /*std::cout<<"the initial pooint is in ecal now, return false!"<<std::endl; */return false;}
  
  double c2c=sqrt(pow(yc-centerY,2)+pow(zc-centerZ,2));
  if( (c2c+r)<200) { /*std::cout<<" this circle will not cross ecal , r too small"<<std::endl; */return false;}

  double low=0;
  double high=800;
  double width, start, diff=1000;
  width=TMath::Min((high-low)/5., r/2) ;
  //  std::cout<<"width:"<<width<<" r:"<<r<<std::endl;
  while(true){

    start=low+width;

    for(int i=0;i<13;i++){
      //      std::cout<<"i:"<<i<<"  start:"<<start<<" r1:"<<r1<<std::endl;
      Go(start,pos);
      r1=sqrt(pow(pos.Y()-centerY,2)+pow(pos.Z()-centerZ,2));
      if(r1>=rr) { diff=r1-rr;  high=start; low=start-width; /*std::cout<<"start:"<<start<<"  width:"<<width<<" r1:"<<r1<<" rr:"<<rr<<" diff:"<<diff<<std::endl; */ break;}
      start+=width;
    }
    if(r1<rr) { std::cout<<"something is wrong, r1<rr"<<" start:"<<start<<" r1:"<<r1<<std::endl; return false;}
    if(diff<0.5) break;
    width=(high-low)/5.;
  }
  trklength=gettrklength();
  //  std::cout<<"^^^^^^^^^^^^^^^^^ r1:"<<r1<<" rr:"<<rr<<std::endl;
  return true;

}
