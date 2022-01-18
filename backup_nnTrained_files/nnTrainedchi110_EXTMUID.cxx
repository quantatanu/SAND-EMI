#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EXTMUID/SOURCES/july_28_2021_working_NN_version/nnTrainedchi110_EXTMUID.h"
#include <cmath>

double nnTrainedchi110_EXTMUID::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6) {
   input0 = (in0 - 1.40001)/6.41471;
   input1 = (in1 - 1.40001)/6.41471;
   input2 = (in2 - 1.42523)/6.53065;
   input3 = (in3 - -1.002)/2.71802e-06;
   input4 = (in4 - 1.42523)/6.53065;
   input5 = (in5 - 1.0197)/0.167905;
   input6 = (in6 - 1.0197)/0.167905;
   switch(index) {
     case 0:
         return neuron0x4f53b80();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::Value(int index, double* input) {
   input0 = (input[0] - 1.40001)/6.41471;
   input1 = (input[1] - 1.40001)/6.41471;
   input2 = (input[2] - 1.42523)/6.53065;
   input3 = (input[3] - -1.002)/2.71802e-06;
   input4 = (input[4] - 1.42523)/6.53065;
   input5 = (input[5] - 1.0197)/0.167905;
   input6 = (input[6] - 1.0197)/0.167905;
   switch(index) {
     case 0:
         return neuron0x4f53b80();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::neuron0x4f567d0() {
   return input0;
}

double nnTrainedchi110_EXTMUID::neuron0x4f56460() {
   return input1;
}

double nnTrainedchi110_EXTMUID::neuron0x4f56270() {
   return input2;
}

double nnTrainedchi110_EXTMUID::neuron0x50137d0() {
   return input3;
}

double nnTrainedchi110_EXTMUID::neuron0x5013b10() {
   return input4;
}

double nnTrainedchi110_EXTMUID::neuron0x5013e50() {
   return input5;
}

double nnTrainedchi110_EXTMUID::neuron0x5014190() {
   return input6;
}

double nnTrainedchi110_EXTMUID::input0x5014600() {
   double input = 0.242572;
   input += synapse0x4f56420();
   input += synapse0x4f56710();
   input += synapse0x50148b0();
   input += synapse0x50148f0();
   input += synapse0x5014930();
   input += synapse0x5014970();
   input += synapse0x50149b0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x5014600() {
   double input = input0x5014600();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x50149f0() {
   double input = -0.600469;
   input += synapse0x5014d30();
   input += synapse0x4f56750();
   input += synapse0x4f560c0();
   input += synapse0x4f52b70();
   input += synapse0x4f52bb0();
   input += synapse0x4f52bf0();
   input += synapse0x4f52c30();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x50149f0() {
   double input = input0x50149f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4f52c70() {
   double input = -0.363316;
   input += synapse0x4f52fb0();
   input += synapse0x4f52ff0();
   input += synapse0x4f53030();
   input += synapse0x4f50010();
   input += synapse0x4f50050();
   input += synapse0x4f53180();
   input += synapse0x4f531c0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4f52c70() {
   double input = input0x4f52c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4f53200() {
   double input = 0.679904;
   input += synapse0x4f53540();
   input += synapse0x4f53580();
   input += synapse0x4f535c0();
   input += synapse0x4f53600();
   input += synapse0x4f53640();
   input += synapse0x4f53680();
   input += synapse0x4f536c0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4f53200() {
   double input = input0x4f53200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4f53700() {
   double input = 1.07014;
   input += synapse0x4f53a40();
   input += synapse0x4f53a80();
   input += synapse0x4f53ac0();
   input += synapse0x4f53b00();
   input += synapse0x4f53b40();
   input += synapse0x4f53070();
   input += synapse0x4f530b0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4f53700() {
   double input = input0x4f53700();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4f53d90() {
   double input = -0.687661;
   input += synapse0x4f54040();
   input += synapse0x4f54080();
   input += synapse0x4f540c0();
   input += synapse0x4f54100();
   input += synapse0x4f54140();
   input += synapse0x4f54180();
   input += synapse0x4f541c0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4f53d90() {
   double input = input0x4f53d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4f54200() {
   double input = 0.214161;
   input += synapse0x4f54540();
   input += synapse0x4f54580();
   input += synapse0x4f545c0();
   input += synapse0x4f54600();
   input += synapse0x4f54640();
   input += synapse0x4f54680();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4f54200() {
   double input = input0x4f54200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4f546c0() {
   double input = 0.0150684;
   input += synapse0x4f54a00();
   input += synapse0x4f54a40();
   input += synapse0x4f54a80();
   input += synapse0x4f54ac0();
   input += synapse0x4f54b00();
   input += synapse0x4f54b40();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4f546c0() {
   double input = input0x4f546c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4f54b80() {
   double input = -0.29812;
   input += synapse0x4f54ec0();
   input += synapse0x4f54f00();
   input += synapse0x4f54f40();
   input += synapse0x4f54f80();
   input += synapse0x4f54fc0();
   input += synapse0x4f55000();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4f54b80() {
   double input = input0x4f54b80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4f55040() {
   double input = 0.94063;
   input += synapse0x4f4fe60();
   input += synapse0x4f4fea0();
   input += synapse0x4f55490();
   input += synapse0x4f554d0();
   input += synapse0x4f55510();
   input += synapse0x4f55960();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4f55040() {
   double input = input0x4f55040();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4f53b80() {
   double input = 2.73704;
   input += synapse0x4f56100();
   input += synapse0x4f52720();
   input += synapse0x4f574d0();
   input += synapse0x4f504c0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4f53b80() {
   double input = input0x4f53b80();
   return (input * 1)+0;
}

double nnTrainedchi110_EXTMUID::synapse0x4f56420() {
   return (neuron0x4f567d0()*0.373615);
}

double nnTrainedchi110_EXTMUID::synapse0x4f56710() {
   return (neuron0x4f56460()*0.674243);
}

double nnTrainedchi110_EXTMUID::synapse0x50148b0() {
   return (neuron0x4f56270()*1.00808);
}

double nnTrainedchi110_EXTMUID::synapse0x50148f0() {
   return (neuron0x50137d0()*-0.26891);
}

double nnTrainedchi110_EXTMUID::synapse0x5014930() {
   return (neuron0x5013b10()*0.881873);
}

double nnTrainedchi110_EXTMUID::synapse0x5014970() {
   return (neuron0x5013e50()*-0.109253);
}

double nnTrainedchi110_EXTMUID::synapse0x50149b0() {
   return (neuron0x5014190()*-0.185529);
}

double nnTrainedchi110_EXTMUID::synapse0x5014d30() {
   return (neuron0x4f567d0()*0.46161);
}

double nnTrainedchi110_EXTMUID::synapse0x4f56750() {
   return (neuron0x4f56460()*0.0545691);
}

double nnTrainedchi110_EXTMUID::synapse0x4f560c0() {
   return (neuron0x4f56270()*0.333792);
}

double nnTrainedchi110_EXTMUID::synapse0x4f52b70() {
   return (neuron0x50137d0()*-0.239454);
}

double nnTrainedchi110_EXTMUID::synapse0x4f52bb0() {
   return (neuron0x5013b10()*0.233929);
}

double nnTrainedchi110_EXTMUID::synapse0x4f52bf0() {
   return (neuron0x5013e50()*-0.0293254);
}

double nnTrainedchi110_EXTMUID::synapse0x4f52c30() {
   return (neuron0x5014190()*0.285537);
}

double nnTrainedchi110_EXTMUID::synapse0x4f52fb0() {
   return (neuron0x4f567d0()*0.123913);
}

double nnTrainedchi110_EXTMUID::synapse0x4f52ff0() {
   return (neuron0x4f56460()*-0.0484678);
}

double nnTrainedchi110_EXTMUID::synapse0x4f53030() {
   return (neuron0x4f56270()*0.0923309);
}

double nnTrainedchi110_EXTMUID::synapse0x4f50010() {
   return (neuron0x50137d0()*0.44946);
}

double nnTrainedchi110_EXTMUID::synapse0x4f50050() {
   return (neuron0x5013b10()*-0.162223);
}

double nnTrainedchi110_EXTMUID::synapse0x4f53180() {
   return (neuron0x5013e50()*-0.826875);
}

double nnTrainedchi110_EXTMUID::synapse0x4f531c0() {
   return (neuron0x5014190()*-0.747029);
}

double nnTrainedchi110_EXTMUID::synapse0x4f53540() {
   return (neuron0x4f567d0()*0.434338);
}

double nnTrainedchi110_EXTMUID::synapse0x4f53580() {
   return (neuron0x4f56460()*-0.090216);
}

double nnTrainedchi110_EXTMUID::synapse0x4f535c0() {
   return (neuron0x4f56270()*0.43294);
}

double nnTrainedchi110_EXTMUID::synapse0x4f53600() {
   return (neuron0x50137d0()*0.212548);
}

double nnTrainedchi110_EXTMUID::synapse0x4f53640() {
   return (neuron0x5013b10()*0.513574);
}

double nnTrainedchi110_EXTMUID::synapse0x4f53680() {
   return (neuron0x5013e50()*-2.96364);
}

double nnTrainedchi110_EXTMUID::synapse0x4f536c0() {
   return (neuron0x5014190()*-3.5469);
}

double nnTrainedchi110_EXTMUID::synapse0x4f53a40() {
   return (neuron0x4f567d0()*-0.138319);
}

double nnTrainedchi110_EXTMUID::synapse0x4f53a80() {
   return (neuron0x4f56460()*0.199049);
}

double nnTrainedchi110_EXTMUID::synapse0x4f53ac0() {
   return (neuron0x4f56270()*-0.416777);
}

double nnTrainedchi110_EXTMUID::synapse0x4f53b00() {
   return (neuron0x50137d0()*0.389467);
}

double nnTrainedchi110_EXTMUID::synapse0x4f53b40() {
   return (neuron0x5013b10()*-0.0347021);
}

double nnTrainedchi110_EXTMUID::synapse0x4f53070() {
   return (neuron0x5013e50()*-0.126476);
}

double nnTrainedchi110_EXTMUID::synapse0x4f530b0() {
   return (neuron0x5014190()*-0.243631);
}

double nnTrainedchi110_EXTMUID::synapse0x4f54040() {
   return (neuron0x4f567d0()*0.373535);
}

double nnTrainedchi110_EXTMUID::synapse0x4f54080() {
   return (neuron0x4f56460()*-0.414134);
}

double nnTrainedchi110_EXTMUID::synapse0x4f540c0() {
   return (neuron0x4f56270()*0.604012);
}

double nnTrainedchi110_EXTMUID::synapse0x4f54100() {
   return (neuron0x50137d0()*0.104341);
}

double nnTrainedchi110_EXTMUID::synapse0x4f54140() {
   return (neuron0x5013b10()*-0.204601);
}

double nnTrainedchi110_EXTMUID::synapse0x4f54180() {
   return (neuron0x5013e50()*2.91995);
}

double nnTrainedchi110_EXTMUID::synapse0x4f541c0() {
   return (neuron0x5014190()*2.16174);
}

double nnTrainedchi110_EXTMUID::synapse0x4f54540() {
   return (neuron0x5014600()*-0.403389);
}

double nnTrainedchi110_EXTMUID::synapse0x4f54580() {
   return (neuron0x50149f0()*0.055729);
}

double nnTrainedchi110_EXTMUID::synapse0x4f545c0() {
   return (neuron0x4f52c70()*0.35802);
}

double nnTrainedchi110_EXTMUID::synapse0x4f54600() {
   return (neuron0x4f53200()*0.192115);
}

double nnTrainedchi110_EXTMUID::synapse0x4f54640() {
   return (neuron0x4f53700()*0.18654);
}

double nnTrainedchi110_EXTMUID::synapse0x4f54680() {
   return (neuron0x4f53d90()*-0.719909);
}

double nnTrainedchi110_EXTMUID::synapse0x4f54a00() {
   return (neuron0x5014600()*0.533598);
}

double nnTrainedchi110_EXTMUID::synapse0x4f54a40() {
   return (neuron0x50149f0()*-0.0672701);
}

double nnTrainedchi110_EXTMUID::synapse0x4f54a80() {
   return (neuron0x4f52c70()*0.404828);
}

double nnTrainedchi110_EXTMUID::synapse0x4f54ac0() {
   return (neuron0x4f53200()*1.13215);
}

double nnTrainedchi110_EXTMUID::synapse0x4f54b00() {
   return (neuron0x4f53700()*0.239922);
}

double nnTrainedchi110_EXTMUID::synapse0x4f54b40() {
   return (neuron0x4f53d90()*-0.129323);
}

double nnTrainedchi110_EXTMUID::synapse0x4f54ec0() {
   return (neuron0x5014600()*1.96552);
}

double nnTrainedchi110_EXTMUID::synapse0x4f54f00() {
   return (neuron0x50149f0()*-3.46625);
}

double nnTrainedchi110_EXTMUID::synapse0x4f54f40() {
   return (neuron0x4f52c70()*-1.12985);
}

double nnTrainedchi110_EXTMUID::synapse0x4f54f80() {
   return (neuron0x4f53200()*2.60478);
}

double nnTrainedchi110_EXTMUID::synapse0x4f54fc0() {
   return (neuron0x4f53700()*3.85984);
}

double nnTrainedchi110_EXTMUID::synapse0x4f55000() {
   return (neuron0x4f53d90()*1.70107);
}

double nnTrainedchi110_EXTMUID::synapse0x4f4fe60() {
   return (neuron0x5014600()*1.58681);
}

double nnTrainedchi110_EXTMUID::synapse0x4f4fea0() {
   return (neuron0x50149f0()*-2.02196);
}

double nnTrainedchi110_EXTMUID::synapse0x4f55490() {
   return (neuron0x4f52c70()*-0.0998354);
}

double nnTrainedchi110_EXTMUID::synapse0x4f554d0() {
   return (neuron0x4f53200()*1.50163);
}

double nnTrainedchi110_EXTMUID::synapse0x4f55510() {
   return (neuron0x4f53700()*2.16154);
}

double nnTrainedchi110_EXTMUID::synapse0x4f55960() {
   return (neuron0x4f53d90()*1.11152);
}

double nnTrainedchi110_EXTMUID::synapse0x4f56100() {
   return (neuron0x4f54200()*-1.97436);
}

double nnTrainedchi110_EXTMUID::synapse0x4f52720() {
   return (neuron0x4f546c0()*-1.8228);
}

double nnTrainedchi110_EXTMUID::synapse0x4f574d0() {
   return (neuron0x4f54b80()*3.99326);
}

double nnTrainedchi110_EXTMUID::synapse0x4f504c0() {
   return (neuron0x4f55040()*-3.10178);
}

