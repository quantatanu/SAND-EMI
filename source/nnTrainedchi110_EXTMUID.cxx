#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EMI_BETA_00/source/nnTrainedchi110_EXTMUID.h"
#include <cmath>

double nnTrainedchi110_EXTMUID::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6) {
   input0 = (in0 - 1.3878)/6.32764;
   input1 = (in1 - 1.3878)/6.32764;
   input2 = (in2 - 1.41125)/6.40648;
   input3 = (in3 - -1.002)/2.61276e-06;
   input4 = (in4 - 1.41125)/6.40648;
   input5 = (in5 - 1.01932)/0.165104;
   input6 = (in6 - 1.01932)/0.165104;
   switch(index) {
     case 0:
         return neuron0x41fc4a0();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::Value(int index, double* input) {
   input0 = (input[0] - 1.3878)/6.32764;
   input1 = (input[1] - 1.3878)/6.32764;
   input2 = (input[2] - 1.41125)/6.40648;
   input3 = (input[3] - -1.002)/2.61276e-06;
   input4 = (input[4] - 1.41125)/6.40648;
   input5 = (input[5] - 1.01932)/0.165104;
   input6 = (input[6] - 1.01932)/0.165104;
   switch(index) {
     case 0:
         return neuron0x41fc4a0();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::neuron0x40c5410() {
   return input0;
}

double nnTrainedchi110_EXTMUID::neuron0x40c5750() {
   return input1;
}

double nnTrainedchi110_EXTMUID::neuron0x40c1bb0() {
   return input2;
}

double nnTrainedchi110_EXTMUID::neuron0x40c1ef0() {
   return input3;
}

double nnTrainedchi110_EXTMUID::neuron0x40c27e0() {
   return input4;
}

double nnTrainedchi110_EXTMUID::neuron0x40c2b20() {
   return input5;
}

double nnTrainedchi110_EXTMUID::neuron0x40c2e60() {
   return input6;
}

double nnTrainedchi110_EXTMUID::input0x42029f0() {
   double input = 1.42401;
   input += synapse0x40c59f0();
   input += synapse0x40c58e0();
   input += synapse0x40c21a0();
   input += synapse0x4202ca0();
   input += synapse0x4202ce0();
   input += synapse0x4202d20();
   input += synapse0x4202d60();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x42029f0() {
   double input = input0x42029f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4202da0() {
   double input = 0.238347;
   input += synapse0x42030e0();
   input += synapse0x4203120();
   input += synapse0x4203160();
   input += synapse0x42031a0();
   input += synapse0x42031e0();
   input += synapse0x4203220();
   input += synapse0x4203260();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4202da0() {
   double input = input0x4202da0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x42032a0() {
   double input = -0.227569;
   input += synapse0x42035e0();
   input += synapse0x4203620();
   input += synapse0x4203660();
   input += synapse0x40c07e0();
   input += synapse0x40c0820();
   input += synapse0x40c31a0();
   input += synapse0x40c31e0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x42032a0() {
   double input = input0x42032a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x42037b0() {
   double input = -0.863579;
   input += synapse0x41fbe60();
   input += synapse0x41fbea0();
   input += synapse0x41fbee0();
   input += synapse0x41fbf20();
   input += synapse0x41fbf60();
   input += synapse0x41fbfa0();
   input += synapse0x41fbfe0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x42037b0() {
   double input = input0x42037b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x41fc020() {
   double input = 0.642534;
   input += synapse0x41fc360();
   input += synapse0x41fc3a0();
   input += synapse0x41fc3e0();
   input += synapse0x41fc420();
   input += synapse0x41fc460();
   input += synapse0x4203940();
   input += synapse0x4203980();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x41fc020() {
   double input = input0x41fc020();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x41fc6b0() {
   double input = 2.01356;
   input += synapse0x41fc9f0();
   input += synapse0x41fca30();
   input += synapse0x41fca70();
   input += synapse0x41fcab0();
   input += synapse0x41fcaf0();
   input += synapse0x41fcb30();
   input += synapse0x41fcb70();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x41fc6b0() {
   double input = input0x41fc6b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x41fcbb0() {
   double input = 0.288388;
   input += synapse0x41fcef0();
   input += synapse0x41fcf30();
   input += synapse0x41fcf70();
   input += synapse0x41fcfb0();
   input += synapse0x41fcff0();
   input += synapse0x41fd030();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x41fcbb0() {
   double input = input0x41fcbb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x41fd070() {
   double input = -0.0579759;
   input += synapse0x41fd3b0();
   input += synapse0x41fd3f0();
   input += synapse0x41fd430();
   input += synapse0x41fd470();
   input += synapse0x41fd4b0();
   input += synapse0x41fd4f0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x41fd070() {
   double input = input0x41fd070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x41fd530() {
   double input = 0.0654871;
   input += synapse0x41fd870();
   input += synapse0x41fd8b0();
   input += synapse0x41fd8f0();
   input += synapse0x41fd930();
   input += synapse0x41fd970();
   input += synapse0x41fd9b0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x41fd530() {
   double input = input0x41fd530();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x41fd9f0() {
   double input = 0.33697;
   input += synapse0x40c0630();
   input += synapse0x40c0670();
   input += synapse0x41fdd30();
   input += synapse0x41fdd70();
   input += synapse0x41fddb0();
   input += synapse0x40c5a30();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x41fd9f0() {
   double input = input0x41fd9f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x41fc4a0() {
   double input = -0.771117;
   input += synapse0x40c59b0();
   input += synapse0x40c4fd0();
   input += synapse0x4201ef0();
   input += synapse0x40c0ce0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x41fc4a0() {
   double input = input0x41fc4a0();
   return (input * 1)+0;
}

double nnTrainedchi110_EXTMUID::synapse0x40c59f0() {
   return (neuron0x40c5410()*0.0532069);
}

double nnTrainedchi110_EXTMUID::synapse0x40c58e0() {
   return (neuron0x40c5750()*-0.162369);
}

double nnTrainedchi110_EXTMUID::synapse0x40c21a0() {
   return (neuron0x40c1bb0()*0.366763);
}

double nnTrainedchi110_EXTMUID::synapse0x4202ca0() {
   return (neuron0x40c1ef0()*-0.340807);
}

double nnTrainedchi110_EXTMUID::synapse0x4202ce0() {
   return (neuron0x40c27e0()*-0.246196);
}

double nnTrainedchi110_EXTMUID::synapse0x4202d20() {
   return (neuron0x40c2b20()*-0.308643);
}

double nnTrainedchi110_EXTMUID::synapse0x4202d60() {
   return (neuron0x40c2e60()*-0.136046);
}

double nnTrainedchi110_EXTMUID::synapse0x42030e0() {
   return (neuron0x40c5410()*-0.129244);
}

double nnTrainedchi110_EXTMUID::synapse0x4203120() {
   return (neuron0x40c5750()*-0.378196);
}

double nnTrainedchi110_EXTMUID::synapse0x4203160() {
   return (neuron0x40c1bb0()*-0.335107);
}

double nnTrainedchi110_EXTMUID::synapse0x42031a0() {
   return (neuron0x40c1ef0()*-0.408376);
}

double nnTrainedchi110_EXTMUID::synapse0x42031e0() {
   return (neuron0x40c27e0()*-0.302269);
}

double nnTrainedchi110_EXTMUID::synapse0x4203220() {
   return (neuron0x40c2b20()*-1.24013);
}

double nnTrainedchi110_EXTMUID::synapse0x4203260() {
   return (neuron0x40c2e60()*-1.91409);
}

double nnTrainedchi110_EXTMUID::synapse0x42035e0() {
   return (neuron0x40c5410()*0.455659);
}

double nnTrainedchi110_EXTMUID::synapse0x4203620() {
   return (neuron0x40c5750()*-0.283219);
}

double nnTrainedchi110_EXTMUID::synapse0x4203660() {
   return (neuron0x40c1bb0()*0.406464);
}

double nnTrainedchi110_EXTMUID::synapse0x40c07e0() {
   return (neuron0x40c1ef0()*0.202155);
}

double nnTrainedchi110_EXTMUID::synapse0x40c0820() {
   return (neuron0x40c27e0()*0.182977);
}

double nnTrainedchi110_EXTMUID::synapse0x40c31a0() {
   return (neuron0x40c2b20()*-1.19299);
}

double nnTrainedchi110_EXTMUID::synapse0x40c31e0() {
   return (neuron0x40c2e60()*-1.42544);
}

double nnTrainedchi110_EXTMUID::synapse0x41fbe60() {
   return (neuron0x40c5410()*0.499578);
}

double nnTrainedchi110_EXTMUID::synapse0x41fbea0() {
   return (neuron0x40c5750()*0.476224);
}

double nnTrainedchi110_EXTMUID::synapse0x41fbee0() {
   return (neuron0x40c1bb0()*-0.300103);
}

double nnTrainedchi110_EXTMUID::synapse0x41fbf20() {
   return (neuron0x40c1ef0()*0.449746);
}

double nnTrainedchi110_EXTMUID::synapse0x41fbf60() {
   return (neuron0x40c27e0()*0.202942);
}

double nnTrainedchi110_EXTMUID::synapse0x41fbfa0() {
   return (neuron0x40c2b20()*0.245276);
}

double nnTrainedchi110_EXTMUID::synapse0x41fbfe0() {
   return (neuron0x40c2e60()*0.281889);
}

double nnTrainedchi110_EXTMUID::synapse0x41fc360() {
   return (neuron0x40c5410()*-0.232341);
}

double nnTrainedchi110_EXTMUID::synapse0x41fc3a0() {
   return (neuron0x40c5750()*-0.270556);
}

double nnTrainedchi110_EXTMUID::synapse0x41fc3e0() {
   return (neuron0x40c1bb0()*-0.376826);
}

double nnTrainedchi110_EXTMUID::synapse0x41fc420() {
   return (neuron0x40c1ef0()*-0.355907);
}

double nnTrainedchi110_EXTMUID::synapse0x41fc460() {
   return (neuron0x40c27e0()*0.217736);
}

double nnTrainedchi110_EXTMUID::synapse0x4203940() {
   return (neuron0x40c2b20()*-0.378416);
}

double nnTrainedchi110_EXTMUID::synapse0x4203980() {
   return (neuron0x40c2e60()*-0.91674);
}

double nnTrainedchi110_EXTMUID::synapse0x41fc9f0() {
   return (neuron0x40c5410()*0.144492);
}

double nnTrainedchi110_EXTMUID::synapse0x41fca30() {
   return (neuron0x40c5750()*0.131573);
}

double nnTrainedchi110_EXTMUID::synapse0x41fca70() {
   return (neuron0x40c1bb0()*-0.402707);
}

double nnTrainedchi110_EXTMUID::synapse0x41fcab0() {
   return (neuron0x40c1ef0()*0.445242);
}

double nnTrainedchi110_EXTMUID::synapse0x41fcaf0() {
   return (neuron0x40c27e0()*0.116809);
}

double nnTrainedchi110_EXTMUID::synapse0x41fcb30() {
   return (neuron0x40c2b20()*0.0312479);
}

double nnTrainedchi110_EXTMUID::synapse0x41fcb70() {
   return (neuron0x40c2e60()*-0.509509);
}

double nnTrainedchi110_EXTMUID::synapse0x41fcef0() {
   return (neuron0x42029f0()*2.06211);
}

double nnTrainedchi110_EXTMUID::synapse0x41fcf30() {
   return (neuron0x4202da0()*-0.0237762);
}

double nnTrainedchi110_EXTMUID::synapse0x41fcf70() {
   return (neuron0x42032a0()*-0.330265);
}

double nnTrainedchi110_EXTMUID::synapse0x41fcfb0() {
   return (neuron0x42037b0()*-1.11245);
}

double nnTrainedchi110_EXTMUID::synapse0x41fcff0() {
   return (neuron0x41fc020()*-0.746236);
}

double nnTrainedchi110_EXTMUID::synapse0x41fd030() {
   return (neuron0x41fc6b0()*2.1759);
}

double nnTrainedchi110_EXTMUID::synapse0x41fd3b0() {
   return (neuron0x42029f0()*-0.144137);
}

double nnTrainedchi110_EXTMUID::synapse0x41fd3f0() {
   return (neuron0x4202da0()*0.897099);
}

double nnTrainedchi110_EXTMUID::synapse0x41fd430() {
   return (neuron0x42032a0()*0.406288);
}

double nnTrainedchi110_EXTMUID::synapse0x41fd470() {
   return (neuron0x42037b0()*0.455299);
}

double nnTrainedchi110_EXTMUID::synapse0x41fd4b0() {
   return (neuron0x41fc020()*0.870479);
}

double nnTrainedchi110_EXTMUID::synapse0x41fd4f0() {
   return (neuron0x41fc6b0()*0.318608);
}

double nnTrainedchi110_EXTMUID::synapse0x41fd870() {
   return (neuron0x42029f0()*1.01716);
}

double nnTrainedchi110_EXTMUID::synapse0x41fd8b0() {
   return (neuron0x4202da0()*-1.02138);
}

double nnTrainedchi110_EXTMUID::synapse0x41fd8f0() {
   return (neuron0x42032a0()*-1.58806);
}

double nnTrainedchi110_EXTMUID::synapse0x41fd930() {
   return (neuron0x42037b0()*-0.932762);
}

double nnTrainedchi110_EXTMUID::synapse0x41fd970() {
   return (neuron0x41fc020()*-0.672774);
}

double nnTrainedchi110_EXTMUID::synapse0x41fd9b0() {
   return (neuron0x41fc6b0()*0.676999);
}

double nnTrainedchi110_EXTMUID::synapse0x40c0630() {
   return (neuron0x42029f0()*-0.0241793);
}

double nnTrainedchi110_EXTMUID::synapse0x40c0670() {
   return (neuron0x4202da0()*-0.957917);
}

double nnTrainedchi110_EXTMUID::synapse0x41fdd30() {
   return (neuron0x42032a0()*-0.382659);
}

double nnTrainedchi110_EXTMUID::synapse0x41fdd70() {
   return (neuron0x42037b0()*-0.92841);
}

double nnTrainedchi110_EXTMUID::synapse0x41fddb0() {
   return (neuron0x41fc020()*-0.520179);
}

double nnTrainedchi110_EXTMUID::synapse0x40c5a30() {
   return (neuron0x41fc6b0()*0.67006);
}

double nnTrainedchi110_EXTMUID::synapse0x40c59b0() {
   return (neuron0x41fcbb0()*1.93838);
}

double nnTrainedchi110_EXTMUID::synapse0x40c4fd0() {
   return (neuron0x41fd070()*-1.29912);
}

double nnTrainedchi110_EXTMUID::synapse0x4201ef0() {
   return (neuron0x41fd530()*2.05905);
}

double nnTrainedchi110_EXTMUID::synapse0x40c0ce0() {
   return (neuron0x41fd9f0()*0.911369);
}

