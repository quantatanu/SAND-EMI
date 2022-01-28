#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EMI_BETA_00/source/nnTrainedchi110_EXTMUID.h"
#include <cmath>

double nnTrainedchi110_EXTMUID::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6) {
   input0 = (in0 - 1.19311)/5.66312;
   input1 = (in1 - 1.19311)/5.66312;
   input2 = (in2 - 1.20901)/5.67754;
   input3 = (in3 - -1.002)/5.84574e-07;
   input4 = (in4 - 1.20901)/5.67754;
   input5 = (in5 - 1.01769)/0.156946;
   input6 = (in6 - 1.01769)/0.156946;
   switch(index) {
     case 0:
         return neuron0x2d2c800();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::Value(int index, double* input) {
   input0 = (input[0] - 1.19311)/5.66312;
   input1 = (input[1] - 1.19311)/5.66312;
   input2 = (input[2] - 1.20901)/5.67754;
   input3 = (input[3] - -1.002)/5.84574e-07;
   input4 = (input[4] - 1.20901)/5.67754;
   input5 = (input[5] - 1.01769)/0.156946;
   input6 = (input[6] - 1.01769)/0.156946;
   switch(index) {
     case 0:
         return neuron0x2d2c800();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::neuron0x2c44640() {
   return input0;
}

double nnTrainedchi110_EXTMUID::neuron0x2c44980() {
   return input1;
}

double nnTrainedchi110_EXTMUID::neuron0x2c40de0() {
   return input2;
}

double nnTrainedchi110_EXTMUID::neuron0x2c41120() {
   return input3;
}

double nnTrainedchi110_EXTMUID::neuron0x2c41a10() {
   return input4;
}

double nnTrainedchi110_EXTMUID::neuron0x2c41d50() {
   return input5;
}

double nnTrainedchi110_EXTMUID::neuron0x2c42090() {
   return input6;
}

double nnTrainedchi110_EXTMUID::input0x2d32d50() {
   double input = 0.163731;
   input += synapse0x2c44c20();
   input += synapse0x2c44b10();
   input += synapse0x2c413d0();
   input += synapse0x2d33000();
   input += synapse0x2d33040();
   input += synapse0x2d33080();
   input += synapse0x2d330c0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2d32d50() {
   double input = input0x2d32d50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2d33100() {
   double input = -0.367227;
   input += synapse0x2d33440();
   input += synapse0x2d33480();
   input += synapse0x2d334c0();
   input += synapse0x2d33500();
   input += synapse0x2d33540();
   input += synapse0x2d33580();
   input += synapse0x2d335c0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2d33100() {
   double input = input0x2d33100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2d33600() {
   double input = -0.0171355;
   input += synapse0x2d33940();
   input += synapse0x2d33980();
   input += synapse0x2d339c0();
   input += synapse0x2c3fa10();
   input += synapse0x2c3fa50();
   input += synapse0x2c423d0();
   input += synapse0x2c42410();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2d33600() {
   double input = input0x2d33600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2d33b10() {
   double input = 0.572503;
   input += synapse0x2d2c1c0();
   input += synapse0x2d2c200();
   input += synapse0x2d2c240();
   input += synapse0x2d2c280();
   input += synapse0x2d2c2c0();
   input += synapse0x2d2c300();
   input += synapse0x2d2c340();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2d33b10() {
   double input = input0x2d33b10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2d2c380() {
   double input = -0.294309;
   input += synapse0x2d2c6c0();
   input += synapse0x2d2c700();
   input += synapse0x2d2c740();
   input += synapse0x2d2c780();
   input += synapse0x2d2c7c0();
   input += synapse0x2d33ca0();
   input += synapse0x2d33ce0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2d2c380() {
   double input = input0x2d2c380();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2d2ca10() {
   double input = -0.916943;
   input += synapse0x2d2cd50();
   input += synapse0x2d2cd90();
   input += synapse0x2d2cdd0();
   input += synapse0x2d2ce10();
   input += synapse0x2d2ce50();
   input += synapse0x2d2ce90();
   input += synapse0x2d2ced0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2d2ca10() {
   double input = input0x2d2ca10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2d2cf10() {
   double input = 0.283251;
   input += synapse0x2d2d250();
   input += synapse0x2d2d290();
   input += synapse0x2d2d2d0();
   input += synapse0x2d2d310();
   input += synapse0x2d2d350();
   input += synapse0x2d2d390();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2d2cf10() {
   double input = input0x2d2cf10();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2d2d3d0() {
   double input = 0.242217;
   input += synapse0x2d2d710();
   input += synapse0x2d2d750();
   input += synapse0x2d2d790();
   input += synapse0x2d2d7d0();
   input += synapse0x2d2d810();
   input += synapse0x2d2d850();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2d2d3d0() {
   double input = input0x2d2d3d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2d2d890() {
   double input = -0.509404;
   input += synapse0x2d2dbd0();
   input += synapse0x2d2dc10();
   input += synapse0x2d2dc50();
   input += synapse0x2d2dc90();
   input += synapse0x2d2dcd0();
   input += synapse0x2d2dd10();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2d2d890() {
   double input = input0x2d2d890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2d2dd50() {
   double input = 0.487553;
   input += synapse0x2c3f860();
   input += synapse0x2c3f8a0();
   input += synapse0x2d2e090();
   input += synapse0x2d2e0d0();
   input += synapse0x2d2e110();
   input += synapse0x2c44c60();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2d2dd50() {
   double input = input0x2d2dd50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x2d2c800() {
   double input = 0.735986;
   input += synapse0x2c44be0();
   input += synapse0x2c44200();
   input += synapse0x2d32250();
   input += synapse0x2c3ff10();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x2d2c800() {
   double input = input0x2d2c800();
   return (input * 1)+0;
}

double nnTrainedchi110_EXTMUID::synapse0x2c44c20() {
   return (neuron0x2c44640()*-0.661746);
}

double nnTrainedchi110_EXTMUID::synapse0x2c44b10() {
   return (neuron0x2c44980()*-0.735578);
}

double nnTrainedchi110_EXTMUID::synapse0x2c413d0() {
   return (neuron0x2c40de0()*-0.373972);
}

double nnTrainedchi110_EXTMUID::synapse0x2d33000() {
   return (neuron0x2c41120()*0.422919);
}

double nnTrainedchi110_EXTMUID::synapse0x2d33040() {
   return (neuron0x2c41a10()*-0.877954);
}

double nnTrainedchi110_EXTMUID::synapse0x2d33080() {
   return (neuron0x2c41d50()*-3.33833);
}

double nnTrainedchi110_EXTMUID::synapse0x2d330c0() {
   return (neuron0x2c42090()*-2.92541);
}

double nnTrainedchi110_EXTMUID::synapse0x2d33440() {
   return (neuron0x2c44640()*-0.444292);
}

double nnTrainedchi110_EXTMUID::synapse0x2d33480() {
   return (neuron0x2c44980()*-0.262462);
}

double nnTrainedchi110_EXTMUID::synapse0x2d334c0() {
   return (neuron0x2c40de0()*0.361862);
}

double nnTrainedchi110_EXTMUID::synapse0x2d33500() {
   return (neuron0x2c41120()*0.022676);
}

double nnTrainedchi110_EXTMUID::synapse0x2d33540() {
   return (neuron0x2c41a10()*0.0372739);
}

double nnTrainedchi110_EXTMUID::synapse0x2d33580() {
   return (neuron0x2c41d50()*0.0225379);
}

double nnTrainedchi110_EXTMUID::synapse0x2d335c0() {
   return (neuron0x2c42090()*0.237819);
}

double nnTrainedchi110_EXTMUID::synapse0x2d33940() {
   return (neuron0x2c44640()*0.0740638);
}

double nnTrainedchi110_EXTMUID::synapse0x2d33980() {
   return (neuron0x2c44980()*0.233637);
}

double nnTrainedchi110_EXTMUID::synapse0x2d339c0() {
   return (neuron0x2c40de0()*-0.0936398);
}

double nnTrainedchi110_EXTMUID::synapse0x2c3fa10() {
   return (neuron0x2c41120()*-0.485791);
}

double nnTrainedchi110_EXTMUID::synapse0x2c3fa50() {
   return (neuron0x2c41a10()*-0.0694683);
}

double nnTrainedchi110_EXTMUID::synapse0x2c423d0() {
   return (neuron0x2c41d50()*-0.462477);
}

double nnTrainedchi110_EXTMUID::synapse0x2c42410() {
   return (neuron0x2c42090()*-0.737108);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2c1c0() {
   return (neuron0x2c44640()*-0.442337);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2c200() {
   return (neuron0x2c44980()*-0.196971);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2c240() {
   return (neuron0x2c40de0()*-0.924362);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2c280() {
   return (neuron0x2c41120()*0.0917587);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2c2c0() {
   return (neuron0x2c41a10()*-0.788221);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2c300() {
   return (neuron0x2c41d50()*-0.178016);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2c340() {
   return (neuron0x2c42090()*-0.138182);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2c6c0() {
   return (neuron0x2c44640()*0.95861);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2c700() {
   return (neuron0x2c44980()*0.817965);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2c740() {
   return (neuron0x2c40de0()*0.344484);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2c780() {
   return (neuron0x2c41120()*-0.00638719);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2c7c0() {
   return (neuron0x2c41a10()*0.0755092);
}

double nnTrainedchi110_EXTMUID::synapse0x2d33ca0() {
   return (neuron0x2c41d50()*0.13773);
}

double nnTrainedchi110_EXTMUID::synapse0x2d33ce0() {
   return (neuron0x2c42090()*-0.0313085);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2cd50() {
   return (neuron0x2c44640()*0.229175);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2cd90() {
   return (neuron0x2c44980()*0.0619694);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2cdd0() {
   return (neuron0x2c40de0()*-0.462897);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2ce10() {
   return (neuron0x2c41120()*0.305787);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2ce50() {
   return (neuron0x2c41a10()*0.120988);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2ce90() {
   return (neuron0x2c41d50()*0.136914);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2ced0() {
   return (neuron0x2c42090()*0.127408);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2d250() {
   return (neuron0x2d32d50()*-0.237987);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2d290() {
   return (neuron0x2d33100()*-0.768586);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2d2d0() {
   return (neuron0x2d33600()*-1.11932);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2d310() {
   return (neuron0x2d33b10()*0.482866);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2d350() {
   return (neuron0x2d2c380()*0.31892);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2d390() {
   return (neuron0x2d2ca10()*-0.154883);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2d710() {
   return (neuron0x2d32d50()*-0.134707);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2d750() {
   return (neuron0x2d33100()*-0.767166);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2d790() {
   return (neuron0x2d33600()*-1.30806);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2d7d0() {
   return (neuron0x2d33b10()*0.901176);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2d810() {
   return (neuron0x2d2c380()*0.34619);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2d850() {
   return (neuron0x2d2ca10()*-0.211799);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2dbd0() {
   return (neuron0x2d32d50()*0.992946);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2dc10() {
   return (neuron0x2d33100()*0.64141);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2dc50() {
   return (neuron0x2d33600()*1.1557);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2dc90() {
   return (neuron0x2d33b10()*-1.33993);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2dcd0() {
   return (neuron0x2d2c380()*-0.49886);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2dd10() {
   return (neuron0x2d2ca10()*0.915193);
}

double nnTrainedchi110_EXTMUID::synapse0x2c3f860() {
   return (neuron0x2d32d50()*-0.866512);
}

double nnTrainedchi110_EXTMUID::synapse0x2c3f8a0() {
   return (neuron0x2d33100()*-0.831925);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2e090() {
   return (neuron0x2d33600()*-1.06684);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2e0d0() {
   return (neuron0x2d33b10()*2.11722);
}

double nnTrainedchi110_EXTMUID::synapse0x2d2e110() {
   return (neuron0x2d2c380()*0.935964);
}

double nnTrainedchi110_EXTMUID::synapse0x2c44c60() {
   return (neuron0x2d2ca10()*-1.27496);
}

double nnTrainedchi110_EXTMUID::synapse0x2c44be0() {
   return (neuron0x2d2cf10()*0.291089);
}

double nnTrainedchi110_EXTMUID::synapse0x2c44200() {
   return (neuron0x2d2d3d0()*0.143405);
}

double nnTrainedchi110_EXTMUID::synapse0x2d32250() {
   return (neuron0x2d2d890()*-2.76878);
}

double nnTrainedchi110_EXTMUID::synapse0x2c3ff10() {
   return (neuron0x2d2dd50()*2.71532);
}

