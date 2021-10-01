#include "nnTrainedchi110.h"
#include <cmath>

double nnTrainedchi110::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9) {
   input0 = (in0 - 50.4702)/69.2366;
   input1 = (in1 - 8.05858)/4.66899;
   input2 = (in2 - 0.681)/0.253199;
   input3 = (in3 - 3.17347e-310)/1;
   input4 = (in4 - 0)/1;
   input5 = (in5 - 0.999709)/0.00223882;
   input6 = (in6 - 6.93722e-310)/1;
   input7 = (in7 - 6.93852e-310)/1;
   input8 = (in8 - 6.66926e-314)/1;
   input9 = (in9 - 2.1273)/1.38386;
   switch(index) {
     case 0:
         return neuron0x45cbb30();
     default:
         return 0.;
   }
}

double nnTrainedchi110::Value(int index, double* input) {
   input0 = (input[0] - 50.4702)/69.2366;
   input1 = (input[1] - 8.05858)/4.66899;
   input2 = (input[2] - 0.681)/0.253199;
   input3 = (input[3] - 3.17347e-310)/1;
   input4 = (input[4] - 0)/1;
   input5 = (input[5] - 0.999709)/0.00223882;
   input6 = (input[6] - 6.93722e-310)/1;
   input7 = (input[7] - 6.93852e-310)/1;
   input8 = (input[8] - 6.66926e-314)/1;
   input9 = (input[9] - 2.1273)/1.38386;
   switch(index) {
     case 0:
         return neuron0x45cbb30();
     default:
         return 0.;
   }
}

double nnTrainedchi110::neuron0x46cd400() {
   return input0;
}

double nnTrainedchi110::neuron0x46ccdf0() {
   return input1;
}

double nnTrainedchi110::neuron0x46cd130() {
   return input2;
}

double nnTrainedchi110::neuron0x45d05e0() {
   return input3;
}

double nnTrainedchi110::neuron0x45d0920() {
   return input4;
}

double nnTrainedchi110::neuron0x45d0c60() {
   return input5;
}

double nnTrainedchi110::neuron0x45d0fa0() {
   return input6;
}

double nnTrainedchi110::neuron0x45d12e0() {
   return input7;
}

double nnTrainedchi110::neuron0x45d1620() {
   return input8;
}

double nnTrainedchi110::neuron0x45d1960() {
   return input9;
}

double nnTrainedchi110::input0x46c9ca0() {
   double input = 0.759029;
   input += synapse0x46cd5f0();
   input += synapse0x46cd350();
   input += synapse0x46c9f50();
   input += synapse0x46c9f90();
   input += synapse0x46c9fd0();
   input += synapse0x46ca010();
   input += synapse0x46ca050();
   input += synapse0x46ca090();
   input += synapse0x46ca0d0();
   input += synapse0x46ca110();
   return input;
}

double nnTrainedchi110::neuron0x46c9ca0() {
   double input = input0x46c9ca0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x46ca150() {
   double input = 1.3406;
   input += synapse0x46ca490();
   input += synapse0x46ca4d0();
   input += synapse0x46ca510();
   input += synapse0x46ca550();
   input += synapse0x46ca590();
   input += synapse0x46ca5d0();
   input += synapse0x46ca610();
   input += synapse0x46cd870();
   input += synapse0x46c6de0();
   input += synapse0x46c6e20();
   return input;
}

double nnTrainedchi110::neuron0x46ca150() {
   double input = input0x46ca150();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x46ca760() {
   double input = -1.51431;
   input += synapse0x46caaa0();
   input += synapse0x46caae0();
   input += synapse0x46cab20();
   input += synapse0x46cab60();
   input += synapse0x46caba0();
   input += synapse0x46cabe0();
   input += synapse0x46cac20();
   input += synapse0x46cac60();
   input += synapse0x46caca0();
   input += synapse0x46cace0();
   return input;
}

double nnTrainedchi110::neuron0x46ca760() {
   double input = input0x46ca760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x46cad20() {
   double input = -1.5841;
   input += synapse0x46cb060();
   input += synapse0x46cb0a0();
   input += synapse0x46cb0e0();
   input += synapse0x46ca650();
   input += synapse0x46ca690();
   input += synapse0x46ca6d0();
   input += synapse0x46ca710();
   input += synapse0x46cb330();
   input += synapse0x46cb370();
   input += synapse0x46cb3b0();
   return input;
}

double nnTrainedchi110::neuron0x46cad20() {
   double input = input0x46cad20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x46cb3f0() {
   double input = -0.237825;
   input += synapse0x46cb730();
   input += synapse0x46cb770();
   input += synapse0x46cb7b0();
   input += synapse0x46cb7f0();
   input += synapse0x46cb830();
   input += synapse0x46cb870();
   input += synapse0x46cb8b0();
   input += synapse0x46cb8f0();
   input += synapse0x46cb930();
   input += synapse0x46cb970();
   return input;
}

double nnTrainedchi110::neuron0x46cb3f0() {
   double input = input0x46cb3f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x46cb9b0() {
   double input = -3.63917;
   input += synapse0x46cbcf0();
   input += synapse0x46cbd30();
   input += synapse0x46cbd70();
   input += synapse0x46cbdb0();
   input += synapse0x46cbdf0();
   input += synapse0x46cbe30();
   input += synapse0x46cbe70();
   input += synapse0x46cbeb0();
   input += synapse0x46cbef0();
   input += synapse0x46cbf30();
   return input;
}

double nnTrainedchi110::neuron0x46cb9b0() {
   double input = input0x46cb9b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x46cbf70() {
   double input = -3.1159;
   input += synapse0x46c6c30();
   input += synapse0x46c6c70();
   input += synapse0x46cc3c0();
   input += synapse0x46cc400();
   input += synapse0x46cc440();
   input += synapse0x46c95d0();
   input += synapse0x46ce3b0();
   input += synapse0x46cd590();
   input += synapse0x46cd390();
   input += synapse0x46c9870();
   return input;
}

double nnTrainedchi110::neuron0x46cbf70() {
   double input = input0x46cbf70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x46c98b0() {
   double input = 3.08879;
   input += synapse0x46cb2d0();
   input += synapse0x46cc480();
   input += synapse0x46cc4c0();
   input += synapse0x46cc500();
   input += synapse0x46cc540();
   input += synapse0x46cc580();
   input += synapse0x46cc5c0();
   input += synapse0x46cc600();
   input += synapse0x46cc640();
   input += synapse0x46cc680();
   return input;
}

double nnTrainedchi110::neuron0x46c98b0() {
   double input = input0x46c98b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x46cc6c0() {
   double input = 0.248355;
   input += synapse0x45ca430();
   input += synapse0x45ca470();
   input += synapse0x45ca4b0();
   input += synapse0x45ca4f0();
   input += synapse0x45ca530();
   input += synapse0x45ca570();
   input += synapse0x45ca5b0();
   input += synapse0x45ca5f0();
   return input;
}

double nnTrainedchi110::neuron0x46cc6c0() {
   double input = input0x46cc6c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x45ca630() {
   double input = 0.276988;
   input += synapse0x45ca970();
   input += synapse0x45ca9b0();
   input += synapse0x45ca9f0();
   input += synapse0x45caa30();
   input += synapse0x45caa70();
   input += synapse0x45caab0();
   input += synapse0x45caaf0();
   input += synapse0x45cab30();
   return input;
}

double nnTrainedchi110::neuron0x45ca630() {
   double input = input0x45ca630();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x45cab70() {
   double input = -0.704206;
   input += synapse0x45caeb0();
   input += synapse0x45caef0();
   input += synapse0x45caf30();
   input += synapse0x45caf70();
   input += synapse0x45cafb0();
   input += synapse0x45caff0();
   input += synapse0x45cb030();
   input += synapse0x45cb070();
   return input;
}

double nnTrainedchi110::neuron0x45cab70() {
   double input = input0x45cab70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x45cb0b0() {
   double input = 2.6195;
   input += synapse0x45cb3f0();
   input += synapse0x45cb430();
   input += synapse0x45cb470();
   input += synapse0x45cb4b0();
   input += synapse0x45cb4f0();
   input += synapse0x45cb530();
   input += synapse0x45cb570();
   input += synapse0x45cb5b0();
   return input;
}

double nnTrainedchi110::neuron0x45cb0b0() {
   double input = input0x45cb0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x45cb5f0() {
   double input = 0.330681;
   input += synapse0x45cb930();
   input += synapse0x45cb970();
   input += synapse0x45cb9b0();
   input += synapse0x45cb9f0();
   input += synapse0x45cba30();
   input += synapse0x45cba70();
   input += synapse0x45cbab0();
   input += synapse0x45cbaf0();
   return input;
}

double nnTrainedchi110::neuron0x45cb5f0() {
   double input = input0x45cb5f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110::input0x45cbb30() {
   double input = 0.19484;
   input += synapse0x45cbe70();
   input += synapse0x45cbeb0();
   input += synapse0x45cbef0();
   input += synapse0x45cbf30();
   input += synapse0x45cbf70();
   return input;
}

double nnTrainedchi110::neuron0x45cbb30() {
   double input = input0x45cbb30();
   return (input * 1)+0;
}

double nnTrainedchi110::synapse0x46cd5f0() {
   return (neuron0x46cd400()*-2.03426);
}

double nnTrainedchi110::synapse0x46cd350() {
   return (neuron0x46ccdf0()*-0.228048);
}

double nnTrainedchi110::synapse0x46c9f50() {
   return (neuron0x46cd130()*-0.530005);
}

double nnTrainedchi110::synapse0x46c9f90() {
   return (neuron0x45d05e0()*-0.4515);
}

double nnTrainedchi110::synapse0x46c9fd0() {
   return (neuron0x45d0920()*-0.439558);
}

double nnTrainedchi110::synapse0x46ca010() {
   return (neuron0x45d0c60()*-0.112209);
}

double nnTrainedchi110::synapse0x46ca050() {
   return (neuron0x45d0fa0()*0.214001);
}

double nnTrainedchi110::synapse0x46ca090() {
   return (neuron0x45d12e0()*0.15435);
}

double nnTrainedchi110::synapse0x46ca0d0() {
   return (neuron0x45d1620()*0.436665);
}

double nnTrainedchi110::synapse0x46ca110() {
   return (neuron0x45d1960()*-0.941506);
}

double nnTrainedchi110::synapse0x46ca490() {
   return (neuron0x46cd400()*-2.07072);
}

double nnTrainedchi110::synapse0x46ca4d0() {
   return (neuron0x46ccdf0()*-0.449851);
}

double nnTrainedchi110::synapse0x46ca510() {
   return (neuron0x46cd130()*-0.917045);
}

double nnTrainedchi110::synapse0x46ca550() {
   return (neuron0x45d05e0()*-0.227947);
}

double nnTrainedchi110::synapse0x46ca590() {
   return (neuron0x45d0920()*-0.483726);
}

double nnTrainedchi110::synapse0x46ca5d0() {
   return (neuron0x45d0c60()*-0.896692);
}

double nnTrainedchi110::synapse0x46ca610() {
   return (neuron0x45d0fa0()*0.23951);
}

double nnTrainedchi110::synapse0x46cd870() {
   return (neuron0x45d12e0()*0.134677);
}

double nnTrainedchi110::synapse0x46c6de0() {
   return (neuron0x45d1620()*0.438042);
}

double nnTrainedchi110::synapse0x46c6e20() {
   return (neuron0x45d1960()*-0.289307);
}

double nnTrainedchi110::synapse0x46caaa0() {
   return (neuron0x46cd400()*2.50523);
}

double nnTrainedchi110::synapse0x46caae0() {
   return (neuron0x46ccdf0()*0.0103198);
}

double nnTrainedchi110::synapse0x46cab20() {
   return (neuron0x46cd130()*0.00873135);
}

double nnTrainedchi110::synapse0x46cab60() {
   return (neuron0x45d05e0()*-0.409199);
}

double nnTrainedchi110::synapse0x46caba0() {
   return (neuron0x45d0920()*-0.308716);
}

double nnTrainedchi110::synapse0x46cabe0() {
   return (neuron0x45d0c60()*0.1453);
}

double nnTrainedchi110::synapse0x46cac20() {
   return (neuron0x45d0fa0()*0.284889);
}

double nnTrainedchi110::synapse0x46cac60() {
   return (neuron0x45d12e0()*-0.353427);
}

double nnTrainedchi110::synapse0x46caca0() {
   return (neuron0x45d1620()*0.00800444);
}

double nnTrainedchi110::synapse0x46cace0() {
   return (neuron0x45d1960()*1.46673);
}

double nnTrainedchi110::synapse0x46cb060() {
   return (neuron0x46cd400()*2.11859);
}

double nnTrainedchi110::synapse0x46cb0a0() {
   return (neuron0x46ccdf0()*-0.584141);
}

double nnTrainedchi110::synapse0x46cb0e0() {
   return (neuron0x46cd130()*1.36658);
}

double nnTrainedchi110::synapse0x46ca650() {
   return (neuron0x45d05e0()*-0.274471);
}

double nnTrainedchi110::synapse0x46ca690() {
   return (neuron0x45d0920()*-0.468519);
}

double nnTrainedchi110::synapse0x46ca6d0() {
   return (neuron0x45d0c60()*-0.465241);
}

double nnTrainedchi110::synapse0x46ca710() {
   return (neuron0x45d0fa0()*-0.271371);
}

double nnTrainedchi110::synapse0x46cb330() {
   return (neuron0x45d12e0()*-0.10265);
}

double nnTrainedchi110::synapse0x46cb370() {
   return (neuron0x45d1620()*0.386964);
}

double nnTrainedchi110::synapse0x46cb3b0() {
   return (neuron0x45d1960()*0.923018);
}

double nnTrainedchi110::synapse0x46cb730() {
   return (neuron0x46cd400()*-0.0457167);
}

double nnTrainedchi110::synapse0x46cb770() {
   return (neuron0x46ccdf0()*-0.915235);
}

double nnTrainedchi110::synapse0x46cb7b0() {
   return (neuron0x46cd130()*-0.784715);
}

double nnTrainedchi110::synapse0x46cb7f0() {
   return (neuron0x45d05e0()*0.167709);
}

double nnTrainedchi110::synapse0x46cb830() {
   return (neuron0x45d0920()*0.356453);
}

double nnTrainedchi110::synapse0x46cb870() {
   return (neuron0x45d0c60()*0.0121116);
}

double nnTrainedchi110::synapse0x46cb8b0() {
   return (neuron0x45d0fa0()*-0.190824);
}

double nnTrainedchi110::synapse0x46cb8f0() {
   return (neuron0x45d12e0()*0.271612);
}

double nnTrainedchi110::synapse0x46cb930() {
   return (neuron0x45d1620()*0.453949);
}

double nnTrainedchi110::synapse0x46cb970() {
   return (neuron0x45d1960()*-2.47848);
}

double nnTrainedchi110::synapse0x46cbcf0() {
   return (neuron0x46cd400()*2.26078);
}

double nnTrainedchi110::synapse0x46cbd30() {
   return (neuron0x46ccdf0()*-0.0697282);
}

double nnTrainedchi110::synapse0x46cbd70() {
   return (neuron0x46cd130()*2.62998);
}

double nnTrainedchi110::synapse0x46cbdb0() {
   return (neuron0x45d05e0()*-0.0890739);
}

double nnTrainedchi110::synapse0x46cbdf0() {
   return (neuron0x45d0920()*-0.0773613);
}

double nnTrainedchi110::synapse0x46cbe30() {
   return (neuron0x45d0c60()*1.57801);
}

double nnTrainedchi110::synapse0x46cbe70() {
   return (neuron0x45d0fa0()*-0.360495);
}

double nnTrainedchi110::synapse0x46cbeb0() {
   return (neuron0x45d12e0()*0.261362);
}

double nnTrainedchi110::synapse0x46cbef0() {
   return (neuron0x45d1620()*0.314994);
}

double nnTrainedchi110::synapse0x46cbf30() {
   return (neuron0x45d1960()*0.566817);
}

double nnTrainedchi110::synapse0x46c6c30() {
   return (neuron0x46cd400()*4.76624);
}

double nnTrainedchi110::synapse0x46c6c70() {
   return (neuron0x46ccdf0()*0.789231);
}

double nnTrainedchi110::synapse0x46cc3c0() {
   return (neuron0x46cd130()*-0.248492);
}

double nnTrainedchi110::synapse0x46cc400() {
   return (neuron0x45d05e0()*-0.485079);
}

double nnTrainedchi110::synapse0x46cc440() {
   return (neuron0x45d0920()*0.404761);
}

double nnTrainedchi110::synapse0x46c95d0() {
   return (neuron0x45d0c60()*0.289771);
}

double nnTrainedchi110::synapse0x46ce3b0() {
   return (neuron0x45d0fa0()*0.167697);
}

double nnTrainedchi110::synapse0x46cd590() {
   return (neuron0x45d12e0()*0.252449);
}

double nnTrainedchi110::synapse0x46cd390() {
   return (neuron0x45d1620()*-0.187482);
}

double nnTrainedchi110::synapse0x46c9870() {
   return (neuron0x45d1960()*0.771552);
}

double nnTrainedchi110::synapse0x46cb2d0() {
   return (neuron0x46cd400()*-2.18377);
}

double nnTrainedchi110::synapse0x46cc480() {
   return (neuron0x46ccdf0()*-0.0783884);
}

double nnTrainedchi110::synapse0x46cc4c0() {
   return (neuron0x46cd130()*-1.41274);
}

double nnTrainedchi110::synapse0x46cc500() {
   return (neuron0x45d05e0()*-0.0493314);
}

double nnTrainedchi110::synapse0x46cc540() {
   return (neuron0x45d0920()*0.0373105);
}

double nnTrainedchi110::synapse0x46cc580() {
   return (neuron0x45d0c60()*-2.34964);
}

double nnTrainedchi110::synapse0x46cc5c0() {
   return (neuron0x45d0fa0()*0.20076);
}

double nnTrainedchi110::synapse0x46cc600() {
   return (neuron0x45d12e0()*0.107529);
}

double nnTrainedchi110::synapse0x46cc640() {
   return (neuron0x45d1620()*0.287412);
}

double nnTrainedchi110::synapse0x46cc680() {
   return (neuron0x45d1960()*-0.775637);
}

double nnTrainedchi110::synapse0x45ca430() {
   return (neuron0x46c9ca0()*-0.88744);
}

double nnTrainedchi110::synapse0x45ca470() {
   return (neuron0x46ca150()*-1.05105);
}

double nnTrainedchi110::synapse0x45ca4b0() {
   return (neuron0x46ca760()*0.456647);
}

double nnTrainedchi110::synapse0x45ca4f0() {
   return (neuron0x46cad20()*0.140118);
}

double nnTrainedchi110::synapse0x45ca530() {
   return (neuron0x46cb3f0()*-1.5764);
}

double nnTrainedchi110::synapse0x45ca570() {
   return (neuron0x46cb9b0()*-0.517648);
}

double nnTrainedchi110::synapse0x45ca5b0() {
   return (neuron0x46cbf70()*-0.0770494);
}

double nnTrainedchi110::synapse0x45ca5f0() {
   return (neuron0x46c98b0()*0.505987);
}

double nnTrainedchi110::synapse0x45ca970() {
   return (neuron0x46c9ca0()*-0.154575);
}

double nnTrainedchi110::synapse0x45ca9b0() {
   return (neuron0x46ca150()*1.00933);
}

double nnTrainedchi110::synapse0x45ca9f0() {
   return (neuron0x46ca760()*-0.52859);
}

double nnTrainedchi110::synapse0x45caa30() {
   return (neuron0x46cad20()*-0.505639);
}

double nnTrainedchi110::synapse0x45caa70() {
   return (neuron0x46cb3f0()*0.317439);
}

double nnTrainedchi110::synapse0x45caab0() {
   return (neuron0x46cb9b0()*0.557052);
}

double nnTrainedchi110::synapse0x45caaf0() {
   return (neuron0x46cbf70()*0.586075);
}

double nnTrainedchi110::synapse0x45cab30() {
   return (neuron0x46c98b0()*0.973513);
}

double nnTrainedchi110::synapse0x45caeb0() {
   return (neuron0x46c9ca0()*-0.821422);
}

double nnTrainedchi110::synapse0x45caef0() {
   return (neuron0x46ca150()*-0.650142);
}

double nnTrainedchi110::synapse0x45caf30() {
   return (neuron0x46ca760()*-0.28335);
}

double nnTrainedchi110::synapse0x45caf70() {
   return (neuron0x46cad20()*-0.973391);
}

double nnTrainedchi110::synapse0x45cafb0() {
   return (neuron0x46cb3f0()*-0.410833);
}

double nnTrainedchi110::synapse0x45caff0() {
   return (neuron0x46cb9b0()*-1.15396);
}

double nnTrainedchi110::synapse0x45cb030() {
   return (neuron0x46cbf70()*0.262697);
}

double nnTrainedchi110::synapse0x45cb070() {
   return (neuron0x46c98b0()*-0.430428);
}

double nnTrainedchi110::synapse0x45cb3f0() {
   return (neuron0x46c9ca0()*0.38869);
}

double nnTrainedchi110::synapse0x45cb430() {
   return (neuron0x46ca150()*2.20443);
}

double nnTrainedchi110::synapse0x45cb470() {
   return (neuron0x46ca760()*-1.26556);
}

double nnTrainedchi110::synapse0x45cb4b0() {
   return (neuron0x46cad20()*-1.54692);
}

double nnTrainedchi110::synapse0x45cb4f0() {
   return (neuron0x46cb3f0()*-1.8043);
}

double nnTrainedchi110::synapse0x45cb530() {
   return (neuron0x46cb9b0()*-3.89123);
}

double nnTrainedchi110::synapse0x45cb570() {
   return (neuron0x46cbf70()*-0.666726);
}

double nnTrainedchi110::synapse0x45cb5b0() {
   return (neuron0x46c98b0()*4.3729);
}

double nnTrainedchi110::synapse0x45cb930() {
   return (neuron0x46c9ca0()*1.25187);
}

double nnTrainedchi110::synapse0x45cb970() {
   return (neuron0x46ca150()*0.0658316);
}

double nnTrainedchi110::synapse0x45cb9b0() {
   return (neuron0x46ca760()*0.224964);
}

double nnTrainedchi110::synapse0x45cb9f0() {
   return (neuron0x46cad20()*0.57155);
}

double nnTrainedchi110::synapse0x45cba30() {
   return (neuron0x46cb3f0()*0.99106);
}

double nnTrainedchi110::synapse0x45cba70() {
   return (neuron0x46cb9b0()*-0.858293);
}

double nnTrainedchi110::synapse0x45cbab0() {
   return (neuron0x46cbf70()*-0.756166);
}

double nnTrainedchi110::synapse0x45cbaf0() {
   return (neuron0x46c98b0()*0.696331);
}

double nnTrainedchi110::synapse0x45cbe70() {
   return (neuron0x46cc6c0()*-0.248253);
}

double nnTrainedchi110::synapse0x45cbeb0() {
   return (neuron0x45ca630()*0.194077);
}

double nnTrainedchi110::synapse0x45cbef0() {
   return (neuron0x45cab70()*0.752483);
}

double nnTrainedchi110::synapse0x45cbf30() {
   return (neuron0x45cb0b0()*1.15447);
}

double nnTrainedchi110::synapse0x45cbf70() {
   return (neuron0x45cb5f0()*-0.563197);
}

