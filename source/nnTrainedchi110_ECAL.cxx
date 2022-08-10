#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EMI_BETA_00/source/nnTrainedchi110_ECAL.h"
#include <cmath>

double nnTrainedchi110_ECAL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9) {
   input0 = (in0 - 87.4034)/181.711;
   input1 = (in1 - 8.22389)/5.65478;
   input2 = (in2 - 0.651882)/0.272834;
   input3 = (in3 - 3.1675e-310)/1;
   input4 = (in4 - 0)/1;
   input5 = (in5 - 0.999789)/0.000640848;
   input6 = (in6 - 6.94429e-310)/1;
   input7 = (in7 - 6.94463e-310)/1;
   input8 = (in8 - 6.6435e-314)/1;
   input9 = (in9 - 2.16351)/1.59237;
   switch(index) {
     case 0:
         return neuron0x35f2ac0();
     default:
         return 0.;
   }
}

double nnTrainedchi110_ECAL::Value(int index, double* input) {
   input0 = (input[0] - 87.4034)/181.711;
   input1 = (input[1] - 8.22389)/5.65478;
   input2 = (input[2] - 0.651882)/0.272834;
   input3 = (input[3] - 3.1675e-310)/1;
   input4 = (input[4] - 0)/1;
   input5 = (input[5] - 0.999789)/0.000640848;
   input6 = (input[6] - 6.94429e-310)/1;
   input7 = (input[7] - 6.94463e-310)/1;
   input8 = (input[8] - 6.6435e-314)/1;
   input9 = (input[9] - 2.16351)/1.59237;
   switch(index) {
     case 0:
         return neuron0x35f2ac0();
     default:
         return 0.;
   }
}

double nnTrainedchi110_ECAL::neuron0x35f4b20() {
   return input0;
}

double nnTrainedchi110_ECAL::neuron0x361ead0() {
   return input1;
}

double nnTrainedchi110_ECAL::neuron0x361ee10() {
   return input2;
}

double nnTrainedchi110_ECAL::neuron0x361f150() {
   return input3;
}

double nnTrainedchi110_ECAL::neuron0x361f490() {
   return input4;
}

double nnTrainedchi110_ECAL::neuron0x36225a0() {
   return input5;
}

double nnTrainedchi110_ECAL::neuron0x36228e0() {
   return input6;
}

double nnTrainedchi110_ECAL::neuron0x3622c20() {
   return input7;
}

double nnTrainedchi110_ECAL::neuron0x3622f60() {
   return input8;
}

double nnTrainedchi110_ECAL::neuron0x36232a0() {
   return input9;
}

double nnTrainedchi110_ECAL::input0x35ee290() {
   double input = 1.90499;
   input += synapse0x35f4ae0();
   input += synapse0x361f870();
   input += synapse0x35ee540();
   input += synapse0x35ee580();
   input += synapse0x35ee5c0();
   input += synapse0x35ee600();
   input += synapse0x35ee640();
   input += synapse0x35ee680();
   input += synapse0x35ee6c0();
   input += synapse0x35ee700();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x35ee290() {
   double input = input0x35ee290();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x35ee740() {
   double input = -2.0474;
   input += synapse0x35eea80();
   input += synapse0x35eeac0();
   input += synapse0x35eeb00();
   input += synapse0x35eeb40();
   input += synapse0x35eeb80();
   input += synapse0x35eebc0();
   input += synapse0x35eec00();
   input += synapse0x361f6b0();
   input += synapse0x361cca0();
   input += synapse0x361cce0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x35ee740() {
   double input = input0x35ee740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x35eed50() {
   double input = 0.74156;
   input += synapse0x35ef090();
   input += synapse0x35ef0d0();
   input += synapse0x35ef110();
   input += synapse0x35ef150();
   input += synapse0x35ef190();
   input += synapse0x35ef1d0();
   input += synapse0x35ef210();
   input += synapse0x35ef250();
   input += synapse0x35ef290();
   input += synapse0x35ef2d0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x35eed50() {
   double input = input0x35eed50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x35ef310() {
   double input = -0.807788;
   input += synapse0x35ef650();
   input += synapse0x35ef690();
   input += synapse0x35ef6d0();
   input += synapse0x35eec40();
   input += synapse0x35eec80();
   input += synapse0x35eecc0();
   input += synapse0x35eed00();
   input += synapse0x35ef920();
   input += synapse0x35ef960();
   input += synapse0x35ef9a0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x35ef310() {
   double input = input0x35ef310();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x35ef9e0() {
   double input = -0.815878;
   input += synapse0x35efd20();
   input += synapse0x35efd60();
   input += synapse0x35efda0();
   input += synapse0x35efde0();
   input += synapse0x35efe20();
   input += synapse0x35efe60();
   input += synapse0x35efea0();
   input += synapse0x35efee0();
   input += synapse0x35eff20();
   input += synapse0x35eff60();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x35ef9e0() {
   double input = input0x35ef9e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x35effa0() {
   double input = 5.89325;
   input += synapse0x35f02e0();
   input += synapse0x35f0320();
   input += synapse0x35f0360();
   input += synapse0x35f03a0();
   input += synapse0x35f03e0();
   input += synapse0x35f0420();
   input += synapse0x35f0460();
   input += synapse0x35f04a0();
   input += synapse0x35f04e0();
   input += synapse0x35f0520();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x35effa0() {
   double input = input0x35effa0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x35f0560() {
   double input = 5.04175;
   input += synapse0x361caf0();
   input += synapse0x361cb30();
   input += synapse0x35f09b0();
   input += synapse0x35f09f0();
   input += synapse0x35f0a30();
   input += synapse0x35f4d40();
   input += synapse0x3620350();
   input += synapse0x3624040();
   input += synapse0x361f700();
   input += synapse0x3620560();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x35f0560() {
   double input = input0x35f0560();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x361e8f0() {
   double input = -0.431483;
   input += synapse0x361ea80();
   input += synapse0x35ef8c0();
   input += synapse0x35f0e80();
   input += synapse0x35f0ec0();
   input += synapse0x35f0f00();
   input += synapse0x35f0f40();
   input += synapse0x35f0f80();
   input += synapse0x35f0fc0();
   input += synapse0x35f1000();
   input += synapse0x35f1040();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x361e8f0() {
   double input = input0x361e8f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x35f1080() {
   double input = 0.825084;
   input += synapse0x35f13c0();
   input += synapse0x35f1400();
   input += synapse0x35f1440();
   input += synapse0x35f1480();
   input += synapse0x35f14c0();
   input += synapse0x35f1500();
   input += synapse0x35f1540();
   input += synapse0x35f1580();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x35f1080() {
   double input = input0x35f1080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x35f15c0() {
   double input = 0.931797;
   input += synapse0x35f1900();
   input += synapse0x35f1940();
   input += synapse0x35f1980();
   input += synapse0x35f19c0();
   input += synapse0x35f1a00();
   input += synapse0x35f1a40();
   input += synapse0x35f1a80();
   input += synapse0x35f1ac0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x35f15c0() {
   double input = input0x35f15c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x35f1b00() {
   double input = -1.11886;
   input += synapse0x35f1e40();
   input += synapse0x35f1e80();
   input += synapse0x35f1ec0();
   input += synapse0x35f1f00();
   input += synapse0x35f1f40();
   input += synapse0x35f1f80();
   input += synapse0x35f1fc0();
   input += synapse0x35f2000();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x35f1b00() {
   double input = input0x35f1b00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x35f2040() {
   double input = 0.672025;
   input += synapse0x35f2380();
   input += synapse0x35f23c0();
   input += synapse0x35f2400();
   input += synapse0x35f2440();
   input += synapse0x35f2480();
   input += synapse0x35f24c0();
   input += synapse0x35f2500();
   input += synapse0x35f2540();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x35f2040() {
   double input = input0x35f2040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x35f2580() {
   double input = 1.05526;
   input += synapse0x35f28c0();
   input += synapse0x35f2900();
   input += synapse0x35f2940();
   input += synapse0x35f2980();
   input += synapse0x35f29c0();
   input += synapse0x35f2a00();
   input += synapse0x35f2a40();
   input += synapse0x35f2a80();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x35f2580() {
   double input = input0x35f2580();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x35f2ac0() {
   double input = 0.133414;
   input += synapse0x35f2e00();
   input += synapse0x35f2e40();
   input += synapse0x35f2e80();
   input += synapse0x35f2ec0();
   input += synapse0x35f2f00();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x35f2ac0() {
   double input = input0x35f2ac0();
   return (input * 1)+0;
}

double nnTrainedchi110_ECAL::synapse0x35f4ae0() {
   return (neuron0x35f4b20()*0.193443);
}

double nnTrainedchi110_ECAL::synapse0x361f870() {
   return (neuron0x361ead0()*-1.3854);
}

double nnTrainedchi110_ECAL::synapse0x35ee540() {
   return (neuron0x361ee10()*-0.120851);
}

double nnTrainedchi110_ECAL::synapse0x35ee580() {
   return (neuron0x361f150()*0.459552);
}

double nnTrainedchi110_ECAL::synapse0x35ee5c0() {
   return (neuron0x361f490()*-0.322304);
}

double nnTrainedchi110_ECAL::synapse0x35ee600() {
   return (neuron0x36225a0()*0.172732);
}

double nnTrainedchi110_ECAL::synapse0x35ee640() {
   return (neuron0x36228e0()*0.376185);
}

double nnTrainedchi110_ECAL::synapse0x35ee680() {
   return (neuron0x3622c20()*0.308866);
}

double nnTrainedchi110_ECAL::synapse0x35ee6c0() {
   return (neuron0x3622f60()*0.0640556);
}

double nnTrainedchi110_ECAL::synapse0x35ee700() {
   return (neuron0x36232a0()*-3.67847);
}

double nnTrainedchi110_ECAL::synapse0x35eea80() {
   return (neuron0x35f4b20()*3.49681);
}

double nnTrainedchi110_ECAL::synapse0x35eeac0() {
   return (neuron0x361ead0()*0.178443);
}

double nnTrainedchi110_ECAL::synapse0x35eeb00() {
   return (neuron0x361ee10()*0.944293);
}

double nnTrainedchi110_ECAL::synapse0x35eeb40() {
   return (neuron0x361f150()*-0.216501);
}

double nnTrainedchi110_ECAL::synapse0x35eeb80() {
   return (neuron0x361f490()*-0.237796);
}

double nnTrainedchi110_ECAL::synapse0x35eebc0() {
   return (neuron0x36225a0()*-0.799852);
}

double nnTrainedchi110_ECAL::synapse0x35eec00() {
   return (neuron0x36228e0()*-0.284052);
}

double nnTrainedchi110_ECAL::synapse0x361f6b0() {
   return (neuron0x3622c20()*0.259683);
}

double nnTrainedchi110_ECAL::synapse0x361cca0() {
   return (neuron0x3622f60()*0.401974);
}

double nnTrainedchi110_ECAL::synapse0x361cce0() {
   return (neuron0x36232a0()*1.85341);
}

double nnTrainedchi110_ECAL::synapse0x35ef090() {
   return (neuron0x35f4b20()*1.52481);
}

double nnTrainedchi110_ECAL::synapse0x35ef0d0() {
   return (neuron0x361ead0()*0.660594);
}

double nnTrainedchi110_ECAL::synapse0x35ef110() {
   return (neuron0x361ee10()*0.623166);
}

double nnTrainedchi110_ECAL::synapse0x35ef150() {
   return (neuron0x361f150()*-0.254843);
}

double nnTrainedchi110_ECAL::synapse0x35ef190() {
   return (neuron0x361f490()*0.259805);
}

double nnTrainedchi110_ECAL::synapse0x35ef1d0() {
   return (neuron0x36225a0()*-0.296996);
}

double nnTrainedchi110_ECAL::synapse0x35ef210() {
   return (neuron0x36228e0()*-0.1443);
}

double nnTrainedchi110_ECAL::synapse0x35ef250() {
   return (neuron0x3622c20()*-0.141768);
}

double nnTrainedchi110_ECAL::synapse0x35ef290() {
   return (neuron0x3622f60()*0.169816);
}

double nnTrainedchi110_ECAL::synapse0x35ef2d0() {
   return (neuron0x36232a0()*1.04947);
}

double nnTrainedchi110_ECAL::synapse0x35ef650() {
   return (neuron0x35f4b20()*1.61959);
}

double nnTrainedchi110_ECAL::synapse0x35ef690() {
   return (neuron0x361ead0()*0.782603);
}

double nnTrainedchi110_ECAL::synapse0x35ef6d0() {
   return (neuron0x361ee10()*2.46497);
}

double nnTrainedchi110_ECAL::synapse0x35eec40() {
   return (neuron0x361f150()*0.200183);
}

double nnTrainedchi110_ECAL::synapse0x35eec80() {
   return (neuron0x361f490()*0.299707);
}

double nnTrainedchi110_ECAL::synapse0x35eecc0() {
   return (neuron0x36225a0()*0.801523);
}

double nnTrainedchi110_ECAL::synapse0x35eed00() {
   return (neuron0x36228e0()*-0.0461382);
}

double nnTrainedchi110_ECAL::synapse0x35ef920() {
   return (neuron0x3622c20()*0.467891);
}

double nnTrainedchi110_ECAL::synapse0x35ef960() {
   return (neuron0x3622f60()*0.44266);
}

double nnTrainedchi110_ECAL::synapse0x35ef9a0() {
   return (neuron0x36232a0()*1.7767);
}

double nnTrainedchi110_ECAL::synapse0x35efd20() {
   return (neuron0x35f4b20()*3.34982);
}

double nnTrainedchi110_ECAL::synapse0x35efd60() {
   return (neuron0x361ead0()*0.335033);
}

double nnTrainedchi110_ECAL::synapse0x35efda0() {
   return (neuron0x361ee10()*-1.37652);
}

double nnTrainedchi110_ECAL::synapse0x35efde0() {
   return (neuron0x361f150()*0.0441896);
}

double nnTrainedchi110_ECAL::synapse0x35efe20() {
   return (neuron0x361f490()*0.0382869);
}

double nnTrainedchi110_ECAL::synapse0x35efe60() {
   return (neuron0x36225a0()*0.140575);
}

double nnTrainedchi110_ECAL::synapse0x35efea0() {
   return (neuron0x36228e0()*0.28809);
}

double nnTrainedchi110_ECAL::synapse0x35efee0() {
   return (neuron0x3622c20()*-0.0164984);
}

double nnTrainedchi110_ECAL::synapse0x35eff20() {
   return (neuron0x3622f60()*0.363038);
}

double nnTrainedchi110_ECAL::synapse0x35eff60() {
   return (neuron0x36232a0()*1.46741);
}

double nnTrainedchi110_ECAL::synapse0x35f02e0() {
   return (neuron0x35f4b20()*0.0129151);
}

double nnTrainedchi110_ECAL::synapse0x35f0320() {
   return (neuron0x361ead0()*-0.00706435);
}

double nnTrainedchi110_ECAL::synapse0x35f0360() {
   return (neuron0x361ee10()*-4.87627);
}

double nnTrainedchi110_ECAL::synapse0x35f03a0() {
   return (neuron0x361f150()*0.130518);
}

double nnTrainedchi110_ECAL::synapse0x35f03e0() {
   return (neuron0x361f490()*-0.19018);
}

double nnTrainedchi110_ECAL::synapse0x35f0420() {
   return (neuron0x36225a0()*-0.127775);
}

double nnTrainedchi110_ECAL::synapse0x35f0460() {
   return (neuron0x36228e0()*-0.151726);
}

double nnTrainedchi110_ECAL::synapse0x35f04a0() {
   return (neuron0x3622c20()*0.278097);
}

double nnTrainedchi110_ECAL::synapse0x35f04e0() {
   return (neuron0x3622f60()*0.233895);
}

double nnTrainedchi110_ECAL::synapse0x35f0520() {
   return (neuron0x36232a0()*0.0176056);
}

double nnTrainedchi110_ECAL::synapse0x361caf0() {
   return (neuron0x35f4b20()*0.487687);
}

double nnTrainedchi110_ECAL::synapse0x361cb30() {
   return (neuron0x361ead0()*-0.0638174);
}

double nnTrainedchi110_ECAL::synapse0x35f09b0() {
   return (neuron0x361ee10()*-3.81649);
}

double nnTrainedchi110_ECAL::synapse0x35f09f0() {
   return (neuron0x361f150()*0.141635);
}

double nnTrainedchi110_ECAL::synapse0x35f0a30() {
   return (neuron0x361f490()*0.13849);
}

double nnTrainedchi110_ECAL::synapse0x35f4d40() {
   return (neuron0x36225a0()*-0.0431897);
}

double nnTrainedchi110_ECAL::synapse0x3620350() {
   return (neuron0x36228e0()*-0.214198);
}

double nnTrainedchi110_ECAL::synapse0x3624040() {
   return (neuron0x3622c20()*-0.183492);
}

double nnTrainedchi110_ECAL::synapse0x361f700() {
   return (neuron0x3622f60()*0.110751);
}

double nnTrainedchi110_ECAL::synapse0x3620560() {
   return (neuron0x36232a0()*-1.72152);
}

double nnTrainedchi110_ECAL::synapse0x361ea80() {
   return (neuron0x35f4b20()*0.323847);
}

double nnTrainedchi110_ECAL::synapse0x35ef8c0() {
   return (neuron0x361ead0()*-0.25015);
}

double nnTrainedchi110_ECAL::synapse0x35f0e80() {
   return (neuron0x361ee10()*-2.00548);
}

double nnTrainedchi110_ECAL::synapse0x35f0ec0() {
   return (neuron0x361f150()*0.243489);
}

double nnTrainedchi110_ECAL::synapse0x35f0f00() {
   return (neuron0x361f490()*0.0609737);
}

double nnTrainedchi110_ECAL::synapse0x35f0f40() {
   return (neuron0x36225a0()*0.403725);
}

double nnTrainedchi110_ECAL::synapse0x35f0f80() {
   return (neuron0x36228e0()*-0.189769);
}

double nnTrainedchi110_ECAL::synapse0x35f0fc0() {
   return (neuron0x3622c20()*0.222021);
}

double nnTrainedchi110_ECAL::synapse0x35f1000() {
   return (neuron0x3622f60()*0.475571);
}

double nnTrainedchi110_ECAL::synapse0x35f1040() {
   return (neuron0x36232a0()*-0.901933);
}

double nnTrainedchi110_ECAL::synapse0x35f13c0() {
   return (neuron0x35ee290()*0.670265);
}

double nnTrainedchi110_ECAL::synapse0x35f1400() {
   return (neuron0x35ee740()*-0.541717);
}

double nnTrainedchi110_ECAL::synapse0x35f1440() {
   return (neuron0x35eed50()*-0.155668);
}

double nnTrainedchi110_ECAL::synapse0x35f1480() {
   return (neuron0x35ef310()*-0.639642);
}

double nnTrainedchi110_ECAL::synapse0x35f14c0() {
   return (neuron0x35ef9e0()*-0.648363);
}

double nnTrainedchi110_ECAL::synapse0x35f1500() {
   return (neuron0x35effa0()*2.47676);
}

double nnTrainedchi110_ECAL::synapse0x35f1540() {
   return (neuron0x35f0560()*2.48269);
}

double nnTrainedchi110_ECAL::synapse0x35f1580() {
   return (neuron0x361e8f0()*-0.246716);
}

double nnTrainedchi110_ECAL::synapse0x35f1900() {
   return (neuron0x35ee290()*-1.21873);
}

double nnTrainedchi110_ECAL::synapse0x35f1940() {
   return (neuron0x35ee740()*-3.4813);
}

double nnTrainedchi110_ECAL::synapse0x35f1980() {
   return (neuron0x35eed50()*-1.10206);
}

double nnTrainedchi110_ECAL::synapse0x35f19c0() {
   return (neuron0x35ef310()*-2.06225);
}

double nnTrainedchi110_ECAL::synapse0x35f1a00() {
   return (neuron0x35ef9e0()*2.34395);
}

double nnTrainedchi110_ECAL::synapse0x35f1a40() {
   return (neuron0x35effa0()*5.79084);
}

double nnTrainedchi110_ECAL::synapse0x35f1a80() {
   return (neuron0x35f0560()*4.90379);
}

double nnTrainedchi110_ECAL::synapse0x35f1ac0() {
   return (neuron0x361e8f0()*1.16319);
}

double nnTrainedchi110_ECAL::synapse0x35f1e40() {
   return (neuron0x35ee290()*-0.674918);
}

double nnTrainedchi110_ECAL::synapse0x35f1e80() {
   return (neuron0x35ee740()*-0.285765);
}

double nnTrainedchi110_ECAL::synapse0x35f1ec0() {
   return (neuron0x35eed50()*-0.655296);
}

double nnTrainedchi110_ECAL::synapse0x35f1f00() {
   return (neuron0x35ef310()*-0.000284331);
}

double nnTrainedchi110_ECAL::synapse0x35f1f40() {
   return (neuron0x35ef9e0()*-1.02001);
}

double nnTrainedchi110_ECAL::synapse0x35f1f80() {
   return (neuron0x35effa0()*-0.355026);
}

double nnTrainedchi110_ECAL::synapse0x35f1fc0() {
   return (neuron0x35f0560()*-1.23207);
}

double nnTrainedchi110_ECAL::synapse0x35f2000() {
   return (neuron0x361e8f0()*-0.71267);
}

double nnTrainedchi110_ECAL::synapse0x35f2380() {
   return (neuron0x35ee290()*-0.202843);
}

double nnTrainedchi110_ECAL::synapse0x35f23c0() {
   return (neuron0x35ee740()*-0.221356);
}

double nnTrainedchi110_ECAL::synapse0x35f2400() {
   return (neuron0x35eed50()*0.957144);
}

double nnTrainedchi110_ECAL::synapse0x35f2440() {
   return (neuron0x35ef310()*-0.0220467);
}

double nnTrainedchi110_ECAL::synapse0x35f2480() {
   return (neuron0x35ef9e0()*0.647398);
}

double nnTrainedchi110_ECAL::synapse0x35f24c0() {
   return (neuron0x35effa0()*1.60011);
}

double nnTrainedchi110_ECAL::synapse0x35f2500() {
   return (neuron0x35f0560()*0.678348);
}

double nnTrainedchi110_ECAL::synapse0x35f2540() {
   return (neuron0x361e8f0()*0.119523);
}

double nnTrainedchi110_ECAL::synapse0x35f28c0() {
   return (neuron0x35ee290()*1.03306);
}

double nnTrainedchi110_ECAL::synapse0x35f2900() {
   return (neuron0x35ee740()*0.589995);
}

double nnTrainedchi110_ECAL::synapse0x35f2940() {
   return (neuron0x35eed50()*0.475455);
}

double nnTrainedchi110_ECAL::synapse0x35f2980() {
   return (neuron0x35ef310()*-0.17285);
}

double nnTrainedchi110_ECAL::synapse0x35f29c0() {
   return (neuron0x35ef9e0()*1.09185);
}

double nnTrainedchi110_ECAL::synapse0x35f2a00() {
   return (neuron0x35effa0()*0.704409);
}

double nnTrainedchi110_ECAL::synapse0x35f2a40() {
   return (neuron0x35f0560()*1.22245);
}

double nnTrainedchi110_ECAL::synapse0x35f2a80() {
   return (neuron0x361e8f0()*0.213156);
}

double nnTrainedchi110_ECAL::synapse0x35f2e00() {
   return (neuron0x35f1080()*-1.20832);
}

double nnTrainedchi110_ECAL::synapse0x35f2e40() {
   return (neuron0x35f15c0()*2.45863);
}

double nnTrainedchi110_ECAL::synapse0x35f2e80() {
   return (neuron0x35f1b00()*0.0382438);
}

double nnTrainedchi110_ECAL::synapse0x35f2ec0() {
   return (neuron0x35f2040()*-0.356328);
}

double nnTrainedchi110_ECAL::synapse0x35f2f00() {
   return (neuron0x35f2580()*-0.0452615);
}

