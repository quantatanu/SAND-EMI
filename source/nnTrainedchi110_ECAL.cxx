#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EMI_BETA_00/source/nnTrainedchi110_ECAL.h"
#include <cmath>

double nnTrainedchi110_ECAL::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9) {
   input0 = (in0 - 51.7072)/75.7756;
   input1 = (in1 - 8.07728)/4.80397;
   input2 = (in2 - 0.675069)/0.257907;
   input3 = (in3 - 3.18025e-310)/1;
   input4 = (in4 - 0)/1;
   input5 = (in5 - 0.999761)/0.00124939;
   input6 = (in6 - 6.94128e-310)/1;
   input7 = (in7 - 6.94299e-310)/1;
   input8 = (in8 - 6.78357e-314)/1;
   input9 = (in9 - 2.11993)/1.35047;
   switch(index) {
     case 0:
         return neuron0x44d1b50();
     default:
         return 0.;
   }
}

double nnTrainedchi110_ECAL::Value(int index, double* input) {
   input0 = (input[0] - 51.7072)/75.7756;
   input1 = (input[1] - 8.07728)/4.80397;
   input2 = (input[2] - 0.675069)/0.257907;
   input3 = (input[3] - 3.18025e-310)/1;
   input4 = (input[4] - 0)/1;
   input5 = (input[5] - 0.999761)/0.00124939;
   input6 = (input[6] - 6.94128e-310)/1;
   input7 = (input[7] - 6.94299e-310)/1;
   input8 = (input[8] - 6.78357e-314)/1;
   input9 = (input[9] - 2.11993)/1.35047;
   switch(index) {
     case 0:
         return neuron0x44d1b50();
     default:
         return 0.;
   }
}

double nnTrainedchi110_ECAL::neuron0x43e3320() {
   return input0;
}

double nnTrainedchi110_ECAL::neuron0x43e35d0() {
   return input1;
}

double nnTrainedchi110_ECAL::neuron0x43e3910() {
   return input2;
}

double nnTrainedchi110_ECAL::neuron0x43e5f90() {
   return input3;
}

double nnTrainedchi110_ECAL::neuron0x43e62d0() {
   return input4;
}

double nnTrainedchi110_ECAL::neuron0x43e2570() {
   return input5;
}

double nnTrainedchi110_ECAL::neuron0x43e28b0() {
   return input6;
}

double nnTrainedchi110_ECAL::neuron0x44d4660() {
   return input7;
}

double nnTrainedchi110_ECAL::neuron0x44d49a0() {
   return input8;
}

double nnTrainedchi110_ECAL::neuron0x44d4ce0() {
   return input9;
}

double nnTrainedchi110_ECAL::input0x44d5020() {
   double input = 0.654568;
   input += synapse0x43e65f0();
   input += synapse0x44d52d0();
   input += synapse0x44d5310();
   input += synapse0x44d5350();
   input += synapse0x44d5390();
   input += synapse0x44d53d0();
   input += synapse0x44d5410();
   input += synapse0x44d5450();
   input += synapse0x44d5490();
   input += synapse0x44d54d0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x44d5020() {
   double input = input0x44d5020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x44d5510() {
   double input = 0.47789;
   input += synapse0x44cdb50();
   input += synapse0x44cdb90();
   input += synapse0x44cdbd0();
   input += synapse0x44cdc10();
   input += synapse0x44cdc50();
   input += synapse0x44cdc90();
   input += synapse0x44cdcd0();
   input += synapse0x43e3d70();
   input += synapse0x43e6630();
   input += synapse0x43e13a0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x44d5510() {
   double input = input0x44d5510();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x44cde20() {
   double input = 0.991338;
   input += synapse0x44ce160();
   input += synapse0x44ce1a0();
   input += synapse0x44ce1e0();
   input += synapse0x44ce220();
   input += synapse0x44ce260();
   input += synapse0x44ce2a0();
   input += synapse0x44ce2e0();
   input += synapse0x44ce320();
   input += synapse0x44ce360();
   input += synapse0x44ce3a0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x44cde20() {
   double input = input0x44cde20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x44ce3e0() {
   double input = -1.55448;
   input += synapse0x44ce720();
   input += synapse0x44ce760();
   input += synapse0x44ce7a0();
   input += synapse0x43e13e0();
   input += synapse0x44cdd10();
   input += synapse0x44cdd50();
   input += synapse0x44cdd90();
   input += synapse0x44cddd0();
   input += synapse0x44ce9f0();
   input += synapse0x44cea30();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x44ce3e0() {
   double input = input0x44ce3e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x44cea70() {
   double input = -0.52089;
   input += synapse0x44cedb0();
   input += synapse0x44cedf0();
   input += synapse0x44cee30();
   input += synapse0x44cee70();
   input += synapse0x44ceeb0();
   input += synapse0x44ceef0();
   input += synapse0x44cef30();
   input += synapse0x44cef70();
   input += synapse0x44cefb0();
   input += synapse0x44ceff0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x44cea70() {
   double input = input0x44cea70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x44cf030() {
   double input = -1.17112;
   input += synapse0x44cf370();
   input += synapse0x44cf3b0();
   input += synapse0x44cf3f0();
   input += synapse0x44cf430();
   input += synapse0x44cf470();
   input += synapse0x44cf4b0();
   input += synapse0x44cf4f0();
   input += synapse0x44cf530();
   input += synapse0x44cf570();
   input += synapse0x44cf5b0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x44cf030() {
   double input = input0x44cf030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x44cf5f0() {
   double input = 0.414792;
   input += synapse0x43e11f0();
   input += synapse0x43e1230();
   input += synapse0x44cfa40();
   input += synapse0x44cfa80();
   input += synapse0x44cfac0();
   input += synapse0x44d3cc0();
   input += synapse0x43e5cd0();
   input += synapse0x43e6500();
   input += synapse0x43e6540();
   input += synapse0x43e6580();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x44cf5f0() {
   double input = input0x44cf5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x43e5db0() {
   double input = 4.23636;
   input += synapse0x43e5f40();
   input += synapse0x44ce990();
   input += synapse0x44cff10();
   input += synapse0x44cff50();
   input += synapse0x44cff90();
   input += synapse0x44cffd0();
   input += synapse0x44d0010();
   input += synapse0x44d0050();
   input += synapse0x44d0090();
   input += synapse0x44d00d0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x43e5db0() {
   double input = input0x43e5db0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x44d0110() {
   double input = -0.0180915;
   input += synapse0x44d0450();
   input += synapse0x44d0490();
   input += synapse0x44d04d0();
   input += synapse0x44d0510();
   input += synapse0x44d0550();
   input += synapse0x44d0590();
   input += synapse0x44d05d0();
   input += synapse0x44d0610();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x44d0110() {
   double input = input0x44d0110();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x44d0650() {
   double input = 2.57865;
   input += synapse0x44d0990();
   input += synapse0x44d09d0();
   input += synapse0x44d0a10();
   input += synapse0x44d0a50();
   input += synapse0x44d0a90();
   input += synapse0x44d0ad0();
   input += synapse0x44d0b10();
   input += synapse0x44d0b50();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x44d0650() {
   double input = input0x44d0650();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x44d0b90() {
   double input = 1.80723;
   input += synapse0x44d0ed0();
   input += synapse0x44d0f10();
   input += synapse0x44d0f50();
   input += synapse0x44d0f90();
   input += synapse0x44d0fd0();
   input += synapse0x44d1010();
   input += synapse0x44d1050();
   input += synapse0x44d1090();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x44d0b90() {
   double input = input0x44d0b90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x44d10d0() {
   double input = -0.0265361;
   input += synapse0x44d1410();
   input += synapse0x44d1450();
   input += synapse0x44d1490();
   input += synapse0x44d14d0();
   input += synapse0x44d1510();
   input += synapse0x44d1550();
   input += synapse0x44d1590();
   input += synapse0x44d15d0();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x44d10d0() {
   double input = input0x44d10d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x44d1610() {
   double input = -0.433243;
   input += synapse0x44d1950();
   input += synapse0x44d1990();
   input += synapse0x44d19d0();
   input += synapse0x44d1a10();
   input += synapse0x44d1a50();
   input += synapse0x44d1a90();
   input += synapse0x44d1ad0();
   input += synapse0x44d1b10();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x44d1610() {
   double input = input0x44d1610();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_ECAL::input0x44d1b50() {
   double input = -0.523955;
   input += synapse0x44d1e90();
   input += synapse0x44d1ed0();
   input += synapse0x44d1f10();
   input += synapse0x44d1f50();
   input += synapse0x44d1f90();
   return input;
}

double nnTrainedchi110_ECAL::neuron0x44d1b50() {
   double input = input0x44d1b50();
   return (input * 1)+0;
}

double nnTrainedchi110_ECAL::synapse0x43e65f0() {
   return (neuron0x43e3320()*0.841104);
}

double nnTrainedchi110_ECAL::synapse0x44d52d0() {
   return (neuron0x43e35d0()*0.579044);
}

double nnTrainedchi110_ECAL::synapse0x44d5310() {
   return (neuron0x43e3910()*-0.662803);
}

double nnTrainedchi110_ECAL::synapse0x44d5350() {
   return (neuron0x43e5f90()*0.162884);
}

double nnTrainedchi110_ECAL::synapse0x44d5390() {
   return (neuron0x43e62d0()*0.0936173);
}

double nnTrainedchi110_ECAL::synapse0x44d53d0() {
   return (neuron0x43e2570()*-0.151642);
}

double nnTrainedchi110_ECAL::synapse0x44d5410() {
   return (neuron0x43e28b0()*0.0208246);
}

double nnTrainedchi110_ECAL::synapse0x44d5450() {
   return (neuron0x44d4660()*0.393154);
}

double nnTrainedchi110_ECAL::synapse0x44d5490() {
   return (neuron0x44d49a0()*0.145357);
}

double nnTrainedchi110_ECAL::synapse0x44d54d0() {
   return (neuron0x44d4ce0()*-0.114465);
}

double nnTrainedchi110_ECAL::synapse0x44cdb50() {
   return (neuron0x43e3320()*-3.20842);
}

double nnTrainedchi110_ECAL::synapse0x44cdb90() {
   return (neuron0x43e35d0()*-2.50905);
}

double nnTrainedchi110_ECAL::synapse0x44cdbd0() {
   return (neuron0x43e3910()*-0.728301);
}

double nnTrainedchi110_ECAL::synapse0x44cdc10() {
   return (neuron0x43e5f90()*0.338253);
}

double nnTrainedchi110_ECAL::synapse0x44cdc50() {
   return (neuron0x43e62d0()*-0.200639);
}

double nnTrainedchi110_ECAL::synapse0x44cdc90() {
   return (neuron0x43e2570()*-0.592814);
}

double nnTrainedchi110_ECAL::synapse0x44cdcd0() {
   return (neuron0x43e28b0()*-0.269557);
}

double nnTrainedchi110_ECAL::synapse0x43e3d70() {
   return (neuron0x44d4660()*0.164846);
}

double nnTrainedchi110_ECAL::synapse0x43e6630() {
   return (neuron0x44d49a0()*-0.277356);
}

double nnTrainedchi110_ECAL::synapse0x43e13a0() {
   return (neuron0x44d4ce0()*-2.18737);
}

double nnTrainedchi110_ECAL::synapse0x44ce160() {
   return (neuron0x43e3320()*-1.55559);
}

double nnTrainedchi110_ECAL::synapse0x44ce1a0() {
   return (neuron0x43e35d0()*-0.170047);
}

double nnTrainedchi110_ECAL::synapse0x44ce1e0() {
   return (neuron0x43e3910()*0.916512);
}

double nnTrainedchi110_ECAL::synapse0x44ce220() {
   return (neuron0x43e5f90()*-0.336131);
}

double nnTrainedchi110_ECAL::synapse0x44ce260() {
   return (neuron0x43e62d0()*-0.288614);
}

double nnTrainedchi110_ECAL::synapse0x44ce2a0() {
   return (neuron0x43e2570()*1.77638);
}

double nnTrainedchi110_ECAL::synapse0x44ce2e0() {
   return (neuron0x43e28b0()*-0.0342861);
}

double nnTrainedchi110_ECAL::synapse0x44ce320() {
   return (neuron0x44d4660()*-0.0242604);
}

double nnTrainedchi110_ECAL::synapse0x44ce360() {
   return (neuron0x44d49a0()*-0.496311);
}

double nnTrainedchi110_ECAL::synapse0x44ce3a0() {
   return (neuron0x44d4ce0()*-2.591);
}

double nnTrainedchi110_ECAL::synapse0x44ce720() {
   return (neuron0x43e3320()*1.72228);
}

double nnTrainedchi110_ECAL::synapse0x44ce760() {
   return (neuron0x43e35d0()*0.198707);
}

double nnTrainedchi110_ECAL::synapse0x44ce7a0() {
   return (neuron0x43e3910()*-0.339164);
}

double nnTrainedchi110_ECAL::synapse0x43e13e0() {
   return (neuron0x43e5f90()*0.327509);
}

double nnTrainedchi110_ECAL::synapse0x44cdd10() {
   return (neuron0x43e62d0()*-0.19176);
}

double nnTrainedchi110_ECAL::synapse0x44cdd50() {
   return (neuron0x43e2570()*0.265329);
}

double nnTrainedchi110_ECAL::synapse0x44cdd90() {
   return (neuron0x43e28b0()*0.065663);
}

double nnTrainedchi110_ECAL::synapse0x44cddd0() {
   return (neuron0x44d4660()*-0.130396);
}

double nnTrainedchi110_ECAL::synapse0x44ce9f0() {
   return (neuron0x44d49a0()*0.387787);
}

double nnTrainedchi110_ECAL::synapse0x44cea30() {
   return (neuron0x44d4ce0()*2.52606);
}

double nnTrainedchi110_ECAL::synapse0x44cedb0() {
   return (neuron0x43e3320()*3.03592);
}

double nnTrainedchi110_ECAL::synapse0x44cedf0() {
   return (neuron0x43e35d0()*3.40455);
}

double nnTrainedchi110_ECAL::synapse0x44cee30() {
   return (neuron0x43e3910()*2.06544);
}

double nnTrainedchi110_ECAL::synapse0x44cee70() {
   return (neuron0x43e5f90()*-0.163094);
}

double nnTrainedchi110_ECAL::synapse0x44ceeb0() {
   return (neuron0x43e62d0()*0.108346);
}

double nnTrainedchi110_ECAL::synapse0x44ceef0() {
   return (neuron0x43e2570()*0.429779);
}

double nnTrainedchi110_ECAL::synapse0x44cef30() {
   return (neuron0x43e28b0()*0.276943);
}

double nnTrainedchi110_ECAL::synapse0x44cef70() {
   return (neuron0x44d4660()*-0.111793);
}

double nnTrainedchi110_ECAL::synapse0x44cefb0() {
   return (neuron0x44d49a0()*-0.141463);
}

double nnTrainedchi110_ECAL::synapse0x44ceff0() {
   return (neuron0x44d4ce0()*3.91872);
}

double nnTrainedchi110_ECAL::synapse0x44cf370() {
   return (neuron0x43e3320()*3.56269);
}

double nnTrainedchi110_ECAL::synapse0x44cf3b0() {
   return (neuron0x43e35d0()*0.180192);
}

double nnTrainedchi110_ECAL::synapse0x44cf3f0() {
   return (neuron0x43e3910()*1.58765);
}

double nnTrainedchi110_ECAL::synapse0x44cf430() {
   return (neuron0x43e5f90()*0.460771);
}

double nnTrainedchi110_ECAL::synapse0x44cf470() {
   return (neuron0x43e62d0()*-0.383695);
}

double nnTrainedchi110_ECAL::synapse0x44cf4b0() {
   return (neuron0x43e2570()*-1.65227);
}

double nnTrainedchi110_ECAL::synapse0x44cf4f0() {
   return (neuron0x43e28b0()*0.357569);
}

double nnTrainedchi110_ECAL::synapse0x44cf530() {
   return (neuron0x44d4660()*0.122569);
}

double nnTrainedchi110_ECAL::synapse0x44cf570() {
   return (neuron0x44d49a0()*0.0223431);
}

double nnTrainedchi110_ECAL::synapse0x44cf5b0() {
   return (neuron0x44d4ce0()*-0.346194);
}

double nnTrainedchi110_ECAL::synapse0x43e11f0() {
   return (neuron0x43e3320()*-0.217151);
}

double nnTrainedchi110_ECAL::synapse0x43e1230() {
   return (neuron0x43e35d0()*0.548756);
}

double nnTrainedchi110_ECAL::synapse0x44cfa40() {
   return (neuron0x43e3910()*-0.932803);
}

double nnTrainedchi110_ECAL::synapse0x44cfa80() {
   return (neuron0x43e5f90()*-0.426456);
}

double nnTrainedchi110_ECAL::synapse0x44cfac0() {
   return (neuron0x43e62d0()*-0.220337);
}

double nnTrainedchi110_ECAL::synapse0x44d3cc0() {
   return (neuron0x43e2570()*-0.50945);
}

double nnTrainedchi110_ECAL::synapse0x43e5cd0() {
   return (neuron0x43e28b0()*0.39451);
}

double nnTrainedchi110_ECAL::synapse0x43e6500() {
   return (neuron0x44d4660()*0.270613);
}

double nnTrainedchi110_ECAL::synapse0x43e6540() {
   return (neuron0x44d49a0()*-0.223534);
}

double nnTrainedchi110_ECAL::synapse0x43e6580() {
   return (neuron0x44d4ce0()*-0.250653);
}

double nnTrainedchi110_ECAL::synapse0x43e5f40() {
   return (neuron0x43e3320()*-4.96513);
}

double nnTrainedchi110_ECAL::synapse0x44ce990() {
   return (neuron0x43e35d0()*-1.03565);
}

double nnTrainedchi110_ECAL::synapse0x44cff10() {
   return (neuron0x43e3910()*-3.42725);
}

double nnTrainedchi110_ECAL::synapse0x44cff50() {
   return (neuron0x43e5f90()*-0.0527004);
}

double nnTrainedchi110_ECAL::synapse0x44cff90() {
   return (neuron0x43e62d0()*-0.206853);
}

double nnTrainedchi110_ECAL::synapse0x44cffd0() {
   return (neuron0x43e2570()*3.03648);
}

double nnTrainedchi110_ECAL::synapse0x44d0010() {
   return (neuron0x43e28b0()*-0.229561);
}

double nnTrainedchi110_ECAL::synapse0x44d0050() {
   return (neuron0x44d4660()*0.377142);
}

double nnTrainedchi110_ECAL::synapse0x44d0090() {
   return (neuron0x44d49a0()*0.407853);
}

double nnTrainedchi110_ECAL::synapse0x44d00d0() {
   return (neuron0x44d4ce0()*0.704783);
}

double nnTrainedchi110_ECAL::synapse0x44d0450() {
   return (neuron0x44d5020()*0.545996);
}

double nnTrainedchi110_ECAL::synapse0x44d0490() {
   return (neuron0x44d5510()*0.540876);
}

double nnTrainedchi110_ECAL::synapse0x44d04d0() {
   return (neuron0x44cde20()*-0.470187);
}

double nnTrainedchi110_ECAL::synapse0x44d0510() {
   return (neuron0x44ce3e0()*-1.0251);
}

double nnTrainedchi110_ECAL::synapse0x44d0550() {
   return (neuron0x44cea70()*0.795944);
}

double nnTrainedchi110_ECAL::synapse0x44d0590() {
   return (neuron0x44cf030()*-0.719913);
}

double nnTrainedchi110_ECAL::synapse0x44d05d0() {
   return (neuron0x44cf5f0()*0.109645);
}

double nnTrainedchi110_ECAL::synapse0x44d0610() {
   return (neuron0x43e5db0()*1.33991);
}

double nnTrainedchi110_ECAL::synapse0x44d0990() {
   return (neuron0x44d5020()*0.876521);
}

double nnTrainedchi110_ECAL::synapse0x44d09d0() {
   return (neuron0x44d5510()*2.05015);
}

double nnTrainedchi110_ECAL::synapse0x44d0a10() {
   return (neuron0x44cde20()*4.11787);
}

double nnTrainedchi110_ECAL::synapse0x44d0a50() {
   return (neuron0x44ce3e0()*-3.06331);
}

double nnTrainedchi110_ECAL::synapse0x44d0a90() {
   return (neuron0x44cea70()*-2.25321);
}

double nnTrainedchi110_ECAL::synapse0x44d0ad0() {
   return (neuron0x44cf030()*-1.89722);
}

double nnTrainedchi110_ECAL::synapse0x44d0b10() {
   return (neuron0x44cf5f0()*0.960113);
}

double nnTrainedchi110_ECAL::synapse0x44d0b50() {
   return (neuron0x43e5db0()*6.39295);
}

double nnTrainedchi110_ECAL::synapse0x44d0ed0() {
   return (neuron0x44d5020()*0.925574);
}

double nnTrainedchi110_ECAL::synapse0x44d0f10() {
   return (neuron0x44d5510()*0.655445);
}

double nnTrainedchi110_ECAL::synapse0x44d0f50() {
   return (neuron0x44cde20()*-0.413914);
}

double nnTrainedchi110_ECAL::synapse0x44d0f90() {
   return (neuron0x44ce3e0()*0.66835);
}

double nnTrainedchi110_ECAL::synapse0x44d0fd0() {
   return (neuron0x44cea70()*-1.18017);
}

double nnTrainedchi110_ECAL::synapse0x44d1010() {
   return (neuron0x44cf030()*0.161318);
}

double nnTrainedchi110_ECAL::synapse0x44d1050() {
   return (neuron0x44cf5f0()*0.649545);
}

double nnTrainedchi110_ECAL::synapse0x44d1090() {
   return (neuron0x43e5db0()*2.51555);
}

double nnTrainedchi110_ECAL::synapse0x44d1410() {
   return (neuron0x44d5020()*0.00111952);
}

double nnTrainedchi110_ECAL::synapse0x44d1450() {
   return (neuron0x44d5510()*-0.760899);
}

double nnTrainedchi110_ECAL::synapse0x44d1490() {
   return (neuron0x44cde20()*-0.282096);
}

double nnTrainedchi110_ECAL::synapse0x44d14d0() {
   return (neuron0x44ce3e0()*0.436104);
}

double nnTrainedchi110_ECAL::synapse0x44d1510() {
   return (neuron0x44cea70()*-1.11049);
}

double nnTrainedchi110_ECAL::synapse0x44d1550() {
   return (neuron0x44cf030()*-0.196069);
}

double nnTrainedchi110_ECAL::synapse0x44d1590() {
   return (neuron0x44cf5f0()*-0.0852267);
}

double nnTrainedchi110_ECAL::synapse0x44d15d0() {
   return (neuron0x43e5db0()*-0.0893125);
}

double nnTrainedchi110_ECAL::synapse0x44d1950() {
   return (neuron0x44d5020()*0.440201);
}

double nnTrainedchi110_ECAL::synapse0x44d1990() {
   return (neuron0x44d5510()*-0.580194);
}

double nnTrainedchi110_ECAL::synapse0x44d19d0() {
   return (neuron0x44cde20()*-0.747396);
}

double nnTrainedchi110_ECAL::synapse0x44d1a10() {
   return (neuron0x44ce3e0()*0.449634);
}

double nnTrainedchi110_ECAL::synapse0x44d1a50() {
   return (neuron0x44cea70()*0.551037);
}

double nnTrainedchi110_ECAL::synapse0x44d1a90() {
   return (neuron0x44cf030()*0.0134414);
}

double nnTrainedchi110_ECAL::synapse0x44d1ad0() {
   return (neuron0x44cf5f0()*0.28622);
}

double nnTrainedchi110_ECAL::synapse0x44d1b10() {
   return (neuron0x43e5db0()*-0.15201);
}

double nnTrainedchi110_ECAL::synapse0x44d1e90() {
   return (neuron0x44d0110()*0.128666);
}

double nnTrainedchi110_ECAL::synapse0x44d1ed0() {
   return (neuron0x44d0650()*0.931486);
}

double nnTrainedchi110_ECAL::synapse0x44d1f10() {
   return (neuron0x44d0b90()*0.516947);
}

double nnTrainedchi110_ECAL::synapse0x44d1f50() {
   return (neuron0x44d10d0()*-0.131827);
}

double nnTrainedchi110_ECAL::synapse0x44d1f90() {
   return (neuron0x44d1610()*-0.00328224);
}

