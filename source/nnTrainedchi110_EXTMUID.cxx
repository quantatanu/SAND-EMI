#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EMI_BETA_00/source/nnTrainedchi110_EXTMUID.h"
#include <cmath>

double nnTrainedchi110_EXTMUID::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6) {
   input0 = (in0 - 7.87662)/28.428;
   input1 = (in1 - 7.87662)/28.428;
   input2 = (in2 - 10.0959)/35.5324;
   input3 = (in3 - -1.002)/5.19835e-07;
   input4 = (in4 - 10.0959)/35.5324;
   input5 = (in5 - 1.27323)/0.451051;
   input6 = (in6 - 1.27323)/0.451051;
   switch(index) {
     case 0:
         return neuron0x3b194b0();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::Value(int index, double* input) {
   input0 = (input[0] - 7.87662)/28.428;
   input1 = (input[1] - 7.87662)/28.428;
   input2 = (input[2] - 10.0959)/35.5324;
   input3 = (input[3] - -1.002)/5.19835e-07;
   input4 = (input[4] - 10.0959)/35.5324;
   input5 = (input[5] - 1.27323)/0.451051;
   input6 = (input[6] - 1.27323)/0.451051;
   switch(index) {
     case 0:
         return neuron0x3b194b0();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::neuron0x3aee9b0() {
   return input0;
}

double nnTrainedchi110_EXTMUID::neuron0x3aeecf0() {
   return input1;
}

double nnTrainedchi110_EXTMUID::neuron0x3aeb150() {
   return input2;
}

double nnTrainedchi110_EXTMUID::neuron0x3aeb490() {
   return input3;
}

double nnTrainedchi110_EXTMUID::neuron0x3aebd80() {
   return input4;
}

double nnTrainedchi110_EXTMUID::neuron0x3aec0c0() {
   return input5;
}

double nnTrainedchi110_EXTMUID::neuron0x3aec400() {
   return input6;
}

double nnTrainedchi110_EXTMUID::input0x3b1fa00() {
   double input = -0.345562;
   input += synapse0x3aeef90();
   input += synapse0x3aeee80();
   input += synapse0x3aeb740();
   input += synapse0x3b1fcb0();
   input += synapse0x3b1fcf0();
   input += synapse0x3b1fd30();
   input += synapse0x3b1fd70();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b1fa00() {
   double input = input0x3b1fa00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3b1fdb0() {
   double input = 0.923021;
   input += synapse0x3b200f0();
   input += synapse0x3b20130();
   input += synapse0x3b20170();
   input += synapse0x3b201b0();
   input += synapse0x3b201f0();
   input += synapse0x3b20230();
   input += synapse0x3b20270();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b1fdb0() {
   double input = input0x3b1fdb0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3b202b0() {
   double input = -0.276554;
   input += synapse0x3b205f0();
   input += synapse0x3b20630();
   input += synapse0x3b20670();
   input += synapse0x3ae9d80();
   input += synapse0x3ae9dc0();
   input += synapse0x3aec740();
   input += synapse0x3aec780();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b202b0() {
   double input = input0x3b202b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3b207c0() {
   double input = 0.66491;
   input += synapse0x3b18e70();
   input += synapse0x3b18eb0();
   input += synapse0x3b18ef0();
   input += synapse0x3b18f30();
   input += synapse0x3b18f70();
   input += synapse0x3b18fb0();
   input += synapse0x3b18ff0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b207c0() {
   double input = input0x3b207c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3b19030() {
   double input = -1.44587;
   input += synapse0x3b19370();
   input += synapse0x3b193b0();
   input += synapse0x3b193f0();
   input += synapse0x3b19430();
   input += synapse0x3b19470();
   input += synapse0x3b20950();
   input += synapse0x3b20990();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b19030() {
   double input = input0x3b19030();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3b196c0() {
   double input = 0.514833;
   input += synapse0x3b19a00();
   input += synapse0x3b19a40();
   input += synapse0x3b19a80();
   input += synapse0x3b19ac0();
   input += synapse0x3b19b00();
   input += synapse0x3b19b40();
   input += synapse0x3b19b80();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b196c0() {
   double input = input0x3b196c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3b19bc0() {
   double input = -0.42505;
   input += synapse0x3b19f00();
   input += synapse0x3b19f40();
   input += synapse0x3b19f80();
   input += synapse0x3b19fc0();
   input += synapse0x3b1a000();
   input += synapse0x3b1a040();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b19bc0() {
   double input = input0x3b19bc0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3b1a080() {
   double input = -0.171175;
   input += synapse0x3b1a3c0();
   input += synapse0x3b1a400();
   input += synapse0x3b1a440();
   input += synapse0x3b1a480();
   input += synapse0x3b1a4c0();
   input += synapse0x3b1a500();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b1a080() {
   double input = input0x3b1a080();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3b1a540() {
   double input = 0.617406;
   input += synapse0x3b1a880();
   input += synapse0x3b1a8c0();
   input += synapse0x3b1a900();
   input += synapse0x3b1a940();
   input += synapse0x3b1a980();
   input += synapse0x3b1a9c0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b1a540() {
   double input = input0x3b1a540();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3b1aa00() {
   double input = 0.00527155;
   input += synapse0x3ae9bd0();
   input += synapse0x3ae9c10();
   input += synapse0x3b1ad40();
   input += synapse0x3b1ad80();
   input += synapse0x3b1adc0();
   input += synapse0x3aeefd0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b1aa00() {
   double input = input0x3b1aa00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3b194b0() {
   double input = -0.715597;
   input += synapse0x3aeef50();
   input += synapse0x3aee570();
   input += synapse0x3b1ef00();
   input += synapse0x3aea280();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b194b0() {
   double input = input0x3b194b0();
   return (input * 1)+0;
}

double nnTrainedchi110_EXTMUID::synapse0x3aeef90() {
   return (neuron0x3aee9b0()*0.310684);
}

double nnTrainedchi110_EXTMUID::synapse0x3aeee80() {
   return (neuron0x3aeecf0()*0.248747);
}

double nnTrainedchi110_EXTMUID::synapse0x3aeb740() {
   return (neuron0x3aeb150()*0.162713);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1fcb0() {
   return (neuron0x3aeb490()*-0.46896);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1fcf0() {
   return (neuron0x3aebd80()*-0.282675);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1fd30() {
   return (neuron0x3aec0c0()*0.0682526);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1fd70() {
   return (neuron0x3aec400()*0.233575);
}

double nnTrainedchi110_EXTMUID::synapse0x3b200f0() {
   return (neuron0x3aee9b0()*0.449531);
}

double nnTrainedchi110_EXTMUID::synapse0x3b20130() {
   return (neuron0x3aeecf0()*0.55183);
}

double nnTrainedchi110_EXTMUID::synapse0x3b20170() {
   return (neuron0x3aeb150()*-0.649835);
}

double nnTrainedchi110_EXTMUID::synapse0x3b201b0() {
   return (neuron0x3aeb490()*0.400331);
}

double nnTrainedchi110_EXTMUID::synapse0x3b201f0() {
   return (neuron0x3aebd80()*0.0378091);
}

double nnTrainedchi110_EXTMUID::synapse0x3b20230() {
   return (neuron0x3aec0c0()*0.256939);
}

double nnTrainedchi110_EXTMUID::synapse0x3b20270() {
   return (neuron0x3aec400()*-0.446069);
}

double nnTrainedchi110_EXTMUID::synapse0x3b205f0() {
   return (neuron0x3aee9b0()*-0.42001);
}

double nnTrainedchi110_EXTMUID::synapse0x3b20630() {
   return (neuron0x3aeecf0()*-0.30493);
}

double nnTrainedchi110_EXTMUID::synapse0x3b20670() {
   return (neuron0x3aeb150()*-0.886271);
}

double nnTrainedchi110_EXTMUID::synapse0x3ae9d80() {
   return (neuron0x3aeb490()*-0.201861);
}

double nnTrainedchi110_EXTMUID::synapse0x3ae9dc0() {
   return (neuron0x3aebd80()*-0.405869);
}

double nnTrainedchi110_EXTMUID::synapse0x3aec740() {
   return (neuron0x3aec0c0()*-0.852315);
}

double nnTrainedchi110_EXTMUID::synapse0x3aec780() {
   return (neuron0x3aec400()*-0.818203);
}

double nnTrainedchi110_EXTMUID::synapse0x3b18e70() {
   return (neuron0x3aee9b0()*-0.641266);
}

double nnTrainedchi110_EXTMUID::synapse0x3b18eb0() {
   return (neuron0x3aeecf0()*-0.596959);
}

double nnTrainedchi110_EXTMUID::synapse0x3b18ef0() {
   return (neuron0x3aeb150()*0.120454);
}

double nnTrainedchi110_EXTMUID::synapse0x3b18f30() {
   return (neuron0x3aeb490()*0.199438);
}

double nnTrainedchi110_EXTMUID::synapse0x3b18f70() {
   return (neuron0x3aebd80()*0.486687);
}

double nnTrainedchi110_EXTMUID::synapse0x3b18fb0() {
   return (neuron0x3aec0c0()*-0.489688);
}

double nnTrainedchi110_EXTMUID::synapse0x3b18ff0() {
   return (neuron0x3aec400()*-0.392248);
}

double nnTrainedchi110_EXTMUID::synapse0x3b19370() {
   return (neuron0x3aee9b0()*0.682734);
}

double nnTrainedchi110_EXTMUID::synapse0x3b193b0() {
   return (neuron0x3aeecf0()*0.148591);
}

double nnTrainedchi110_EXTMUID::synapse0x3b193f0() {
   return (neuron0x3aeb150()*-0.318417);
}

double nnTrainedchi110_EXTMUID::synapse0x3b19430() {
   return (neuron0x3aeb490()*-0.353231);
}

double nnTrainedchi110_EXTMUID::synapse0x3b19470() {
   return (neuron0x3aebd80()*-0.148986);
}

double nnTrainedchi110_EXTMUID::synapse0x3b20950() {
   return (neuron0x3aec0c0()*-0.0549871);
}

double nnTrainedchi110_EXTMUID::synapse0x3b20990() {
   return (neuron0x3aec400()*-0.0320249);
}

double nnTrainedchi110_EXTMUID::synapse0x3b19a00() {
   return (neuron0x3aee9b0()*0.49424);
}

double nnTrainedchi110_EXTMUID::synapse0x3b19a40() {
   return (neuron0x3aeecf0()*-0.201506);
}

double nnTrainedchi110_EXTMUID::synapse0x3b19a80() {
   return (neuron0x3aeb150()*0.163917);
}

double nnTrainedchi110_EXTMUID::synapse0x3b19ac0() {
   return (neuron0x3aeb490()*0.166096);
}

double nnTrainedchi110_EXTMUID::synapse0x3b19b00() {
   return (neuron0x3aebd80()*0.451006);
}

double nnTrainedchi110_EXTMUID::synapse0x3b19b40() {
   return (neuron0x3aec0c0()*-0.385698);
}

double nnTrainedchi110_EXTMUID::synapse0x3b19b80() {
   return (neuron0x3aec400()*-0.0622889);
}

double nnTrainedchi110_EXTMUID::synapse0x3b19f00() {
   return (neuron0x3b1fa00()*0.0424865);
}

double nnTrainedchi110_EXTMUID::synapse0x3b19f40() {
   return (neuron0x3b1fdb0()*0.462182);
}

double nnTrainedchi110_EXTMUID::synapse0x3b19f80() {
   return (neuron0x3b202b0()*0.649838);
}

double nnTrainedchi110_EXTMUID::synapse0x3b19fc0() {
   return (neuron0x3b207c0()*0.291021);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1a000() {
   return (neuron0x3b19030()*-0.383908);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1a040() {
   return (neuron0x3b196c0()*0.330815);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1a3c0() {
   return (neuron0x3b1fa00()*0.345976);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1a400() {
   return (neuron0x3b1fdb0()*0.159505);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1a440() {
   return (neuron0x3b202b0()*-0.225769);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1a480() {
   return (neuron0x3b207c0()*-0.58076);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1a4c0() {
   return (neuron0x3b19030()*-0.280796);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1a500() {
   return (neuron0x3b196c0()*-0.445427);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1a880() {
   return (neuron0x3b1fa00()*-0.6197);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1a8c0() {
   return (neuron0x3b1fdb0()*1.8806);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1a900() {
   return (neuron0x3b202b0()*0.652644);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1a940() {
   return (neuron0x3b207c0()*-1.31016);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1a980() {
   return (neuron0x3b19030()*-1.58085);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1a9c0() {
   return (neuron0x3b196c0()*0.0880534);
}

double nnTrainedchi110_EXTMUID::synapse0x3ae9bd0() {
   return (neuron0x3b1fa00()*-0.0076056);
}

double nnTrainedchi110_EXTMUID::synapse0x3ae9c10() {
   return (neuron0x3b1fdb0()*-0.220474);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1ad40() {
   return (neuron0x3b202b0()*-0.374608);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1ad80() {
   return (neuron0x3b207c0()*-0.305951);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1adc0() {
   return (neuron0x3b19030()*-0.687834);
}

double nnTrainedchi110_EXTMUID::synapse0x3aeefd0() {
   return (neuron0x3b196c0()*0.145725);
}

double nnTrainedchi110_EXTMUID::synapse0x3aeef50() {
   return (neuron0x3b19bc0()*-0.205692);
}

double nnTrainedchi110_EXTMUID::synapse0x3aee570() {
   return (neuron0x3b1a080()*0.266081);
}

double nnTrainedchi110_EXTMUID::synapse0x3b1ef00() {
   return (neuron0x3b1a540()*2.41192);
}

double nnTrainedchi110_EXTMUID::synapse0x3aea280() {
   return (neuron0x3b1aa00()*0.0443354);
}

