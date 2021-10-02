#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EMI_BETA_00/source/nnTrainedchi110_EXTMUID.h"
#include <cmath>

double nnTrainedchi110_EXTMUID::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6) {
   input0 = (in0 - 1.29552)/5.49844;
   input1 = (in1 - 1.29552)/5.49844;
   input2 = (in2 - 1.30906)/5.50652;
   input3 = (in3 - -1.002)/1.92565e-07;
   input4 = (in4 - 1.30906)/5.50652;
   input5 = (in5 - 1.01402)/0.126678;
   input6 = (in6 - 1.01402)/0.126678;
   switch(index) {
     case 0:
         return neuron0x3b4e530();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::Value(int index, double* input) {
   input0 = (input[0] - 1.29552)/5.49844;
   input1 = (input[1] - 1.29552)/5.49844;
   input2 = (input[2] - 1.30906)/5.50652;
   input3 = (input[3] - -1.002)/1.92565e-07;
   input4 = (input[4] - 1.30906)/5.50652;
   input5 = (input[5] - 1.01402)/0.126678;
   input6 = (input[6] - 1.01402)/0.126678;
   switch(index) {
     case 0:
         return neuron0x3b4e530();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::neuron0x3a85c90() {
   return input0;
}

double nnTrainedchi110_EXTMUID::neuron0x3a85fd0() {
   return input1;
}

double nnTrainedchi110_EXTMUID::neuron0x3a82430() {
   return input2;
}

double nnTrainedchi110_EXTMUID::neuron0x3a82770() {
   return input3;
}

double nnTrainedchi110_EXTMUID::neuron0x3a83060() {
   return input4;
}

double nnTrainedchi110_EXTMUID::neuron0x3a833a0() {
   return input5;
}

double nnTrainedchi110_EXTMUID::neuron0x3a836e0() {
   return input6;
}

double nnTrainedchi110_EXTMUID::input0x3b54a80() {
   double input = 0.644815;
   input += synapse0x3a86270();
   input += synapse0x3a86160();
   input += synapse0x3a82a20();
   input += synapse0x3b54d30();
   input += synapse0x3b54d70();
   input += synapse0x3b54db0();
   input += synapse0x3b54df0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b54a80() {
   double input = input0x3b54a80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3b54e30() {
   double input = -0.123797;
   input += synapse0x3b55170();
   input += synapse0x3b551b0();
   input += synapse0x3b551f0();
   input += synapse0x3b55230();
   input += synapse0x3b55270();
   input += synapse0x3b552b0();
   input += synapse0x3b552f0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b54e30() {
   double input = input0x3b54e30();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3b55330() {
   double input = -0.198038;
   input += synapse0x3b55670();
   input += synapse0x3b556b0();
   input += synapse0x3b556f0();
   input += synapse0x3a81060();
   input += synapse0x3a810a0();
   input += synapse0x3a83a20();
   input += synapse0x3a83a60();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b55330() {
   double input = input0x3b55330();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3b55840() {
   double input = 1.11529;
   input += synapse0x3b4def0();
   input += synapse0x3b4df30();
   input += synapse0x3b4df70();
   input += synapse0x3b4dfb0();
   input += synapse0x3b4dff0();
   input += synapse0x3b4e030();
   input += synapse0x3b4e070();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b55840() {
   double input = input0x3b55840();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3b4e0b0() {
   double input = -0.0128456;
   input += synapse0x3b4e3f0();
   input += synapse0x3b4e430();
   input += synapse0x3b4e470();
   input += synapse0x3b4e4b0();
   input += synapse0x3b4e4f0();
   input += synapse0x3b559d0();
   input += synapse0x3b55a10();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b4e0b0() {
   double input = input0x3b4e0b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3b4e740() {
   double input = -0.220166;
   input += synapse0x3b4ea80();
   input += synapse0x3b4eac0();
   input += synapse0x3b4eb00();
   input += synapse0x3b4eb40();
   input += synapse0x3b4eb80();
   input += synapse0x3b4ebc0();
   input += synapse0x3b4ec00();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b4e740() {
   double input = input0x3b4e740();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3b4ec40() {
   double input = 0.235802;
   input += synapse0x3b4ef80();
   input += synapse0x3b4efc0();
   input += synapse0x3b4f000();
   input += synapse0x3b4f040();
   input += synapse0x3b4f080();
   input += synapse0x3b4f0c0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b4ec40() {
   double input = input0x3b4ec40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3b4f100() {
   double input = -0.174534;
   input += synapse0x3b4f440();
   input += synapse0x3b4f480();
   input += synapse0x3b4f4c0();
   input += synapse0x3b4f500();
   input += synapse0x3b4f540();
   input += synapse0x3b4f580();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b4f100() {
   double input = input0x3b4f100();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3b4f5c0() {
   double input = 0.0913079;
   input += synapse0x3b4f900();
   input += synapse0x3b4f940();
   input += synapse0x3b4f980();
   input += synapse0x3b4f9c0();
   input += synapse0x3b4fa00();
   input += synapse0x3b4fa40();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b4f5c0() {
   double input = input0x3b4f5c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3b4fa80() {
   double input = 0.752946;
   input += synapse0x3a80eb0();
   input += synapse0x3a80ef0();
   input += synapse0x3b4fdc0();
   input += synapse0x3b4fe00();
   input += synapse0x3b4fe40();
   input += synapse0x3a862b0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b4fa80() {
   double input = input0x3b4fa80();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x3b4e530() {
   double input = -0.487065;
   input += synapse0x3a86230();
   input += synapse0x3a85850();
   input += synapse0x3b53f80();
   input += synapse0x3a81560();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x3b4e530() {
   double input = input0x3b4e530();
   return (input * 1)+0;
}

double nnTrainedchi110_EXTMUID::synapse0x3a86270() {
   return (neuron0x3a85c90()*-0.625568);
}

double nnTrainedchi110_EXTMUID::synapse0x3a86160() {
   return (neuron0x3a85fd0()*-0.0461769);
}

double nnTrainedchi110_EXTMUID::synapse0x3a82a20() {
   return (neuron0x3a82430()*-0.567004);
}

double nnTrainedchi110_EXTMUID::synapse0x3b54d30() {
   return (neuron0x3a82770()*0.163996);
}

double nnTrainedchi110_EXTMUID::synapse0x3b54d70() {
   return (neuron0x3a83060()*-0.554514);
}

double nnTrainedchi110_EXTMUID::synapse0x3b54db0() {
   return (neuron0x3a833a0()*-0.00839097);
}

double nnTrainedchi110_EXTMUID::synapse0x3b54df0() {
   return (neuron0x3a836e0()*-0.17796);
}

double nnTrainedchi110_EXTMUID::synapse0x3b55170() {
   return (neuron0x3a85c90()*-0.520182);
}

double nnTrainedchi110_EXTMUID::synapse0x3b551b0() {
   return (neuron0x3a85fd0()*-0.482809);
}

double nnTrainedchi110_EXTMUID::synapse0x3b551f0() {
   return (neuron0x3a82430()*-0.084436);
}

double nnTrainedchi110_EXTMUID::synapse0x3b55230() {
   return (neuron0x3a82770()*0.21119);
}

double nnTrainedchi110_EXTMUID::synapse0x3b55270() {
   return (neuron0x3a83060()*-0.270194);
}

double nnTrainedchi110_EXTMUID::synapse0x3b552b0() {
   return (neuron0x3a833a0()*0.0733922);
}

double nnTrainedchi110_EXTMUID::synapse0x3b552f0() {
   return (neuron0x3a836e0()*0.111955);
}

double nnTrainedchi110_EXTMUID::synapse0x3b55670() {
   return (neuron0x3a85c90()*-0.586689);
}

double nnTrainedchi110_EXTMUID::synapse0x3b556b0() {
   return (neuron0x3a85fd0()*0.00898637);
}

double nnTrainedchi110_EXTMUID::synapse0x3b556f0() {
   return (neuron0x3a82430()*0.488722);
}

double nnTrainedchi110_EXTMUID::synapse0x3a81060() {
   return (neuron0x3a82770()*-0.122839);
}

double nnTrainedchi110_EXTMUID::synapse0x3a810a0() {
   return (neuron0x3a83060()*0.0892493);
}

double nnTrainedchi110_EXTMUID::synapse0x3a83a20() {
   return (neuron0x3a833a0()*0.345091);
}

double nnTrainedchi110_EXTMUID::synapse0x3a83a60() {
   return (neuron0x3a836e0()*-0.182614);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4def0() {
   return (neuron0x3a85c90()*-0.0888999);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4df30() {
   return (neuron0x3a85fd0()*0.622045);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4df70() {
   return (neuron0x3a82430()*0.552989);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4dfb0() {
   return (neuron0x3a82770()*-0.290539);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4dff0() {
   return (neuron0x3a83060()*-0.363576);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4e030() {
   return (neuron0x3a833a0()*-3.97578);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4e070() {
   return (neuron0x3a836e0()*-3.20679);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4e3f0() {
   return (neuron0x3a85c90()*-0.431075);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4e430() {
   return (neuron0x3a85fd0()*-0.139094);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4e470() {
   return (neuron0x3a82430()*-0.846373);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4e4b0() {
   return (neuron0x3a82770()*-0.0915375);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4e4f0() {
   return (neuron0x3a83060()*-0.859151);
}

double nnTrainedchi110_EXTMUID::synapse0x3b559d0() {
   return (neuron0x3a833a0()*0.0789293);
}

double nnTrainedchi110_EXTMUID::synapse0x3b55a10() {
   return (neuron0x3a836e0()*-0.0190198);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4ea80() {
   return (neuron0x3a85c90()*0.928246);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4eac0() {
   return (neuron0x3a85fd0()*0.448334);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4eb00() {
   return (neuron0x3a82430()*0.243902);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4eb40() {
   return (neuron0x3a82770()*0.466613);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4eb80() {
   return (neuron0x3a83060()*0.250279);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4ebc0() {
   return (neuron0x3a833a0()*-0.223223);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4ec00() {
   return (neuron0x3a836e0()*0.0854367);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4ef80() {
   return (neuron0x3b54a80()*0.23843);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4efc0() {
   return (neuron0x3b54e30()*-1.3355);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4f000() {
   return (neuron0x3b55330()*-0.441887);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4f040() {
   return (neuron0x3b55840()*-1.26734);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4f080() {
   return (neuron0x3b4e0b0()*0.327003);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4f0c0() {
   return (neuron0x3b4e740()*0.85918);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4f440() {
   return (neuron0x3b54a80()*-0.388888);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4f480() {
   return (neuron0x3b54e30()*-0.223509);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4f4c0() {
   return (neuron0x3b55330()*0.136529);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4f500() {
   return (neuron0x3b55840()*0.650999);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4f540() {
   return (neuron0x3b4e0b0()*-0.275881);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4f580() {
   return (neuron0x3b4e740()*0.0385507);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4f900() {
   return (neuron0x3b54a80()*0.572772);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4f940() {
   return (neuron0x3b54e30()*-0.239496);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4f980() {
   return (neuron0x3b55330()*0.454096);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4f9c0() {
   return (neuron0x3b55840()*0.64262);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4fa00() {
   return (neuron0x3b4e0b0()*0.106387);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4fa40() {
   return (neuron0x3b4e740()*-0.0569823);
}

double nnTrainedchi110_EXTMUID::synapse0x3a80eb0() {
   return (neuron0x3b54a80()*2.14714);
}

double nnTrainedchi110_EXTMUID::synapse0x3a80ef0() {
   return (neuron0x3b54e30()*-1.79519);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4fdc0() {
   return (neuron0x3b55330()*-1.5335);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4fe00() {
   return (neuron0x3b55840()*-1.66316);
}

double nnTrainedchi110_EXTMUID::synapse0x3b4fe40() {
   return (neuron0x3b4e0b0()*1.69431);
}

double nnTrainedchi110_EXTMUID::synapse0x3a862b0() {
   return (neuron0x3b4e740()*2.41943);
}

double nnTrainedchi110_EXTMUID::synapse0x3a86230() {
   return (neuron0x3b4ec40()*1.60009);
}

double nnTrainedchi110_EXTMUID::synapse0x3a85850() {
   return (neuron0x3b4f100()*-0.639279);
}

double nnTrainedchi110_EXTMUID::synapse0x3b53f80() {
   return (neuron0x3b4f5c0()*-0.999317);
}

double nnTrainedchi110_EXTMUID::synapse0x3a81560() {
   return (neuron0x3b4fa80()*2.79907);
}

