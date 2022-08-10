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
         return neuron0x3648680();
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
         return neuron0x3648680();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::neuron0x361db80() {
   return input0;
}

double nnTrainedchi110_EXTMUID::neuron0x361dec0() {
   return input1;
}

double nnTrainedchi110_EXTMUID::neuron0x361a320() {
   return input2;
}

double nnTrainedchi110_EXTMUID::neuron0x361a660() {
   return input3;
}

double nnTrainedchi110_EXTMUID::neuron0x361af50() {
   return input4;
}

double nnTrainedchi110_EXTMUID::neuron0x361b290() {
   return input5;
}

double nnTrainedchi110_EXTMUID::neuron0x361b5d0() {
   return input6;
}

double nnTrainedchi110_EXTMUID::input0x364ebd0() {
   double input = 0.176886;
   input += synapse0x361e160();
   input += synapse0x361e050();
   input += synapse0x361a910();
   input += synapse0x364ee80();
   input += synapse0x364eec0();
   input += synapse0x364ef00();
   input += synapse0x364ef40();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x364ebd0() {
   double input = input0x364ebd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x364ef80() {
   double input = 0.385043;
   input += synapse0x364f2c0();
   input += synapse0x364f300();
   input += synapse0x364f340();
   input += synapse0x364f380();
   input += synapse0x364f3c0();
   input += synapse0x364f400();
   input += synapse0x364f440();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x364ef80() {
   double input = input0x364ef80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x364f480() {
   double input = 0.351497;
   input += synapse0x364f7c0();
   input += synapse0x364f800();
   input += synapse0x364f840();
   input += synapse0x3618f50();
   input += synapse0x3618f90();
   input += synapse0x361b910();
   input += synapse0x361b950();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x364f480() {
   double input = input0x364f480();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x364f990() {
   double input = 0.0498588;
   input += synapse0x3648040();
   input += synapse0x3648080();
   input += synapse0x36480c0();
   input += synapse0x3648100();
   input += synapse0x3648140();
   input += synapse0x3648180();
   input += synapse0x36481c0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x364f990() {
   double input = input0x364f990();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3648200() {
   double input = 1.06103;
   input += synapse0x3648540();
   input += synapse0x3648580();
   input += synapse0x36485c0();
   input += synapse0x3648600();
   input += synapse0x3648640();
   input += synapse0x364fb20();
   input += synapse0x364fb60();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3648200() {
   double input = input0x3648200();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3648890() {
   double input = -0.241419;
   input += synapse0x3648bd0();
   input += synapse0x3648c10();
   input += synapse0x3648c50();
   input += synapse0x3648c90();
   input += synapse0x3648cd0();
   input += synapse0x3648d10();
   input += synapse0x3648d50();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3648890() {
   double input = input0x3648890();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3648d90() {
   double input = 0.175817;
   input += synapse0x36490d0();
   input += synapse0x3649110();
   input += synapse0x3649150();
   input += synapse0x3649190();
   input += synapse0x36491d0();
   input += synapse0x3649210();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3648d90() {
   double input = input0x3648d90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3649250() {
   double input = -0.257729;
   input += synapse0x3649590();
   input += synapse0x36495d0();
   input += synapse0x3649610();
   input += synapse0x3649650();
   input += synapse0x3649690();
   input += synapse0x36496d0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3649250() {
   double input = input0x3649250();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3649710() {
   double input = -0.115954;
   input += synapse0x3649a50();
   input += synapse0x3649a90();
   input += synapse0x3649ad0();
   input += synapse0x3649b10();
   input += synapse0x3649b50();
   input += synapse0x3649b90();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3649710() {
   double input = input0x3649710();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3649bd0() {
   double input = 0.383764;
   input += synapse0x3618da0();
   input += synapse0x3618de0();
   input += synapse0x3649f10();
   input += synapse0x3649f50();
   input += synapse0x3649f90();
   input += synapse0x361e1a0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3649bd0() {
   double input = input0x3649bd0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3648680() {
   double input = -0.0936516;
   input += synapse0x361e120();
   input += synapse0x361d740();
   input += synapse0x364e0d0();
   input += synapse0x3619450();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3648680() {
   double input = input0x3648680();
   return (input * 1)+0;
}

double nnTrainedchi110_EXTMUID::synapse0x361e160() {
   return (neuron0x361db80()*0.33633);
}

double nnTrainedchi110_EXTMUID::synapse0x361e050() {
   return (neuron0x361dec0()*0.77064);
}

double nnTrainedchi110_EXTMUID::synapse0x361a910() {
   return (neuron0x361a320()*-0.42415);
}

double nnTrainedchi110_EXTMUID::synapse0x364ee80() {
   return (neuron0x361a660()*-0.474202);
}

double nnTrainedchi110_EXTMUID::synapse0x364eec0() {
   return (neuron0x361af50()*-0.363798);
}

double nnTrainedchi110_EXTMUID::synapse0x364ef00() {
   return (neuron0x361b290()*0.138197);
}

double nnTrainedchi110_EXTMUID::synapse0x364ef40() {
   return (neuron0x361b5d0()*-0.149173);
}

double nnTrainedchi110_EXTMUID::synapse0x364f2c0() {
   return (neuron0x361db80()*0.11883);
}

double nnTrainedchi110_EXTMUID::synapse0x364f300() {
   return (neuron0x361dec0()*-0.35822);
}

double nnTrainedchi110_EXTMUID::synapse0x364f340() {
   return (neuron0x361a320()*-0.244177);
}

double nnTrainedchi110_EXTMUID::synapse0x364f380() {
   return (neuron0x361a660()*-0.373647);
}

double nnTrainedchi110_EXTMUID::synapse0x364f3c0() {
   return (neuron0x361af50()*0.0454022);
}

double nnTrainedchi110_EXTMUID::synapse0x364f400() {
   return (neuron0x361b290()*0.706303);
}

double nnTrainedchi110_EXTMUID::synapse0x364f440() {
   return (neuron0x361b5d0()*-0.204395);
}

double nnTrainedchi110_EXTMUID::synapse0x364f7c0() {
   return (neuron0x361db80()*-0.469294);
}

double nnTrainedchi110_EXTMUID::synapse0x364f800() {
   return (neuron0x361dec0()*-0.88821);
}

double nnTrainedchi110_EXTMUID::synapse0x364f840() {
   return (neuron0x361a320()*0.495247);
}

double nnTrainedchi110_EXTMUID::synapse0x3618f50() {
   return (neuron0x361a660()*-0.377514);
}

double nnTrainedchi110_EXTMUID::synapse0x3618f90() {
   return (neuron0x361af50()*0.205138);
}

double nnTrainedchi110_EXTMUID::synapse0x361b910() {
   return (neuron0x361b290()*-0.564724);
}

double nnTrainedchi110_EXTMUID::synapse0x361b950() {
   return (neuron0x361b5d0()*-0.441516);
}

double nnTrainedchi110_EXTMUID::synapse0x3648040() {
   return (neuron0x361db80()*0.755881);
}

double nnTrainedchi110_EXTMUID::synapse0x3648080() {
   return (neuron0x361dec0()*0.115986);
}

double nnTrainedchi110_EXTMUID::synapse0x36480c0() {
   return (neuron0x361a320()*-0.289599);
}

double nnTrainedchi110_EXTMUID::synapse0x3648100() {
   return (neuron0x361a660()*0.475213);
}

double nnTrainedchi110_EXTMUID::synapse0x3648140() {
   return (neuron0x361af50()*-0.0114074);
}

double nnTrainedchi110_EXTMUID::synapse0x3648180() {
   return (neuron0x361b290()*-0.470411);
}

double nnTrainedchi110_EXTMUID::synapse0x36481c0() {
   return (neuron0x361b5d0()*0.0389095);
}

double nnTrainedchi110_EXTMUID::synapse0x3648540() {
   return (neuron0x361db80()*-0.396682);
}

double nnTrainedchi110_EXTMUID::synapse0x3648580() {
   return (neuron0x361dec0()*-0.248899);
}

double nnTrainedchi110_EXTMUID::synapse0x36485c0() {
   return (neuron0x361a320()*0.147002);
}

double nnTrainedchi110_EXTMUID::synapse0x3648600() {
   return (neuron0x361a660()*-0.344142);
}

double nnTrainedchi110_EXTMUID::synapse0x3648640() {
   return (neuron0x361af50()*0.0516965);
}

double nnTrainedchi110_EXTMUID::synapse0x364fb20() {
   return (neuron0x361b290()*-0.0832144);
}

double nnTrainedchi110_EXTMUID::synapse0x364fb60() {
   return (neuron0x361b5d0()*-0.13699);
}

double nnTrainedchi110_EXTMUID::synapse0x3648bd0() {
   return (neuron0x361db80()*-0.761512);
}

double nnTrainedchi110_EXTMUID::synapse0x3648c10() {
   return (neuron0x361dec0()*-0.474607);
}

double nnTrainedchi110_EXTMUID::synapse0x3648c50() {
   return (neuron0x361a320()*-0.152147);
}

double nnTrainedchi110_EXTMUID::synapse0x3648c90() {
   return (neuron0x361a660()*0.130838);
}

double nnTrainedchi110_EXTMUID::synapse0x3648cd0() {
   return (neuron0x361af50()*-0.163154);
}

double nnTrainedchi110_EXTMUID::synapse0x3648d10() {
   return (neuron0x361b290()*-0.765735);
}

double nnTrainedchi110_EXTMUID::synapse0x3648d50() {
   return (neuron0x361b5d0()*-0.779203);
}

double nnTrainedchi110_EXTMUID::synapse0x36490d0() {
   return (neuron0x364ebd0()*0.290106);
}

double nnTrainedchi110_EXTMUID::synapse0x3649110() {
   return (neuron0x364ef80()*-0.497744);
}

double nnTrainedchi110_EXTMUID::synapse0x3649150() {
   return (neuron0x364f480()*0.804302);
}

double nnTrainedchi110_EXTMUID::synapse0x3649190() {
   return (neuron0x364f990()*-0.812091);
}

double nnTrainedchi110_EXTMUID::synapse0x36491d0() {
   return (neuron0x3648200()*-0.723849);
}

double nnTrainedchi110_EXTMUID::synapse0x3649210() {
   return (neuron0x3648890()*-0.418674);
}

double nnTrainedchi110_EXTMUID::synapse0x3649590() {
   return (neuron0x364ebd0()*0.0956828);
}

double nnTrainedchi110_EXTMUID::synapse0x36495d0() {
   return (neuron0x364ef80()*0.295586);
}

double nnTrainedchi110_EXTMUID::synapse0x3649610() {
   return (neuron0x364f480()*-0.841175);
}

double nnTrainedchi110_EXTMUID::synapse0x3649650() {
   return (neuron0x364f990()*0.607713);
}

double nnTrainedchi110_EXTMUID::synapse0x3649690() {
   return (neuron0x3648200()*0.68479);
}

double nnTrainedchi110_EXTMUID::synapse0x36496d0() {
   return (neuron0x3648890()*0.199951);
}

double nnTrainedchi110_EXTMUID::synapse0x3649a50() {
   return (neuron0x364ebd0()*-0.338931);
}

double nnTrainedchi110_EXTMUID::synapse0x3649a90() {
   return (neuron0x364ef80()*-0.174337);
}

double nnTrainedchi110_EXTMUID::synapse0x3649ad0() {
   return (neuron0x364f480()*-1.01693);
}

double nnTrainedchi110_EXTMUID::synapse0x3649b10() {
   return (neuron0x364f990()*0.65107);
}

double nnTrainedchi110_EXTMUID::synapse0x3649b50() {
   return (neuron0x3648200()*1.00889);
}

double nnTrainedchi110_EXTMUID::synapse0x3649b90() {
   return (neuron0x3648890()*0.509603);
}

double nnTrainedchi110_EXTMUID::synapse0x3618da0() {
   return (neuron0x364ebd0()*-0.299073);
}

double nnTrainedchi110_EXTMUID::synapse0x3618de0() {
   return (neuron0x364ef80()*-0.182002);
}

double nnTrainedchi110_EXTMUID::synapse0x3649f10() {
   return (neuron0x364f480()*-0.757528);
}

double nnTrainedchi110_EXTMUID::synapse0x3649f50() {
   return (neuron0x364f990()*-0.180933);
}

double nnTrainedchi110_EXTMUID::synapse0x3649f90() {
   return (neuron0x3648200()*0.67995);
}

double nnTrainedchi110_EXTMUID::synapse0x361e1a0() {
   return (neuron0x3648890()*0.469113);
}

double nnTrainedchi110_EXTMUID::synapse0x361e120() {
   return (neuron0x3648d90()*-1.61792);
}

double nnTrainedchi110_EXTMUID::synapse0x361d740() {
   return (neuron0x3649250()*0.951049);
}

double nnTrainedchi110_EXTMUID::synapse0x364e0d0() {
   return (neuron0x3649710()*1.2772);
}

double nnTrainedchi110_EXTMUID::synapse0x3619450() {
   return (neuron0x3649bd0()*0.556463);
}

