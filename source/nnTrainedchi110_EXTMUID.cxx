#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EMI_BETA_00/source/nnTrainedchi110_EXTMUID.h"
#include <cmath>

double nnTrainedchi110_EXTMUID::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6) {
   input0 = (in0 - 1.14747)/5.21306;
   input1 = (in1 - 1.14747)/5.21306;
   input2 = (in2 - 1.16625)/5.30507;
   input3 = (in3 - -1.002)/1.12343e-06;
   input4 = (in4 - 1.16625)/5.30507;
   input5 = (in5 - 1.01787)/0.153749;
   input6 = (in6 - 1.01787)/0.153749;
   switch(index) {
     case 0:
         return neuron0x4693060();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::Value(int index, double* input) {
   input0 = (input[0] - 1.14747)/5.21306;
   input1 = (input[1] - 1.14747)/5.21306;
   input2 = (input[2] - 1.16625)/5.30507;
   input3 = (input[3] - -1.002)/1.12343e-06;
   input4 = (input[4] - 1.16625)/5.30507;
   input5 = (input[5] - 1.01787)/0.153749;
   input6 = (input[6] - 1.01787)/0.153749;
   switch(index) {
     case 0:
         return neuron0x4693060();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::neuron0x4687c80() {
   return input0;
}

double nnTrainedchi110_EXTMUID::neuron0x4687fc0() {
   return input1;
}

double nnTrainedchi110_EXTMUID::neuron0x4684300() {
   return input2;
}

double nnTrainedchi110_EXTMUID::neuron0x4684640() {
   return input3;
}

double nnTrainedchi110_EXTMUID::neuron0x4685010() {
   return input4;
}

double nnTrainedchi110_EXTMUID::neuron0x4685350() {
   return input5;
}

double nnTrainedchi110_EXTMUID::neuron0x4685690() {
   return input6;
}

double nnTrainedchi110_EXTMUID::input0x4699400() {
   double input = -0.248451;
   input += synapse0x469a370();
   input += synapse0x469a3b0();
   input += synapse0x46996b0();
   input += synapse0x46996f0();
   input += synapse0x4699730();
   input += synapse0x4699770();
   input += synapse0x46997b0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4699400() {
   double input = input0x4699400();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x46997f0() {
   double input = 0.65421;
   input += synapse0x4699b30();
   input += synapse0x4699b70();
   input += synapse0x4699bb0();
   input += synapse0x4699bf0();
   input += synapse0x4699c30();
   input += synapse0x4699c70();
   input += synapse0x4699cb0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x46997f0() {
   double input = input0x46997f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4699cf0() {
   double input = 0.968974;
   input += synapse0x469a030();
   input += synapse0x469a070();
   input += synapse0x469a0b0();
   input += synapse0x46830c0();
   input += synapse0x4683100();
   input += synapse0x4684980();
   input += synapse0x46849c0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4699cf0() {
   double input = input0x4699cf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x46926e0() {
   double input = -0.721954;
   input += synapse0x4692a20();
   input += synapse0x4692a60();
   input += synapse0x4692aa0();
   input += synapse0x4692ae0();
   input += synapse0x4692b20();
   input += synapse0x4692b60();
   input += synapse0x4692ba0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x46926e0() {
   double input = input0x46926e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4692be0() {
   double input = -1.05984;
   input += synapse0x4692f20();
   input += synapse0x4692f60();
   input += synapse0x4692fa0();
   input += synapse0x4692fe0();
   input += synapse0x4693020();
   input += synapse0x4684a00();
   input += synapse0x46859d0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4692be0() {
   double input = input0x4692be0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x469a0f0() {
   double input = 1.07812;
   input += synapse0x4693300();
   input += synapse0x4693340();
   input += synapse0x4693380();
   input += synapse0x46933c0();
   input += synapse0x4693400();
   input += synapse0x4693440();
   input += synapse0x4693480();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x469a0f0() {
   double input = input0x469a0f0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x46934c0() {
   double input = 0.411248;
   input += synapse0x4693800();
   input += synapse0x4693840();
   input += synapse0x4693880();
   input += synapse0x46938c0();
   input += synapse0x4693900();
   input += synapse0x4693940();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x46934c0() {
   double input = input0x46934c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4693980() {
   double input = -0.513752;
   input += synapse0x4693cc0();
   input += synapse0x4693d00();
   input += synapse0x4693d40();
   input += synapse0x4693d80();
   input += synapse0x4693dc0();
   input += synapse0x4693e00();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4693980() {
   double input = input0x4693980();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4693e40() {
   double input = 0.321455;
   input += synapse0x4694180();
   input += synapse0x46941c0();
   input += synapse0x4694200();
   input += synapse0x4694240();
   input += synapse0x4694280();
   input += synapse0x46942c0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4693e40() {
   double input = input0x4693e40();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4694300() {
   double input = -0.465117;
   input += synapse0x4682f10();
   input += synapse0x4682f50();
   input += synapse0x4694750();
   input += synapse0x4694790();
   input += synapse0x46947d0();
   input += synapse0x4698930();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4694300() {
   double input = input0x4694300();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4693060() {
   double input = -1.53763;
   input += synapse0x4687b10();
   input += synapse0x4687b50();
   input += synapse0x46879c0();
   input += synapse0x4684fc0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4693060() {
   double input = input0x4693060();
   return (input * 1)+0;
}

double nnTrainedchi110_EXTMUID::synapse0x469a370() {
   return (neuron0x4687c80()*-0.370057);
}

double nnTrainedchi110_EXTMUID::synapse0x469a3b0() {
   return (neuron0x4687fc0()*0.110827);
}

double nnTrainedchi110_EXTMUID::synapse0x46996b0() {
   return (neuron0x4684300()*-0.281821);
}

double nnTrainedchi110_EXTMUID::synapse0x46996f0() {
   return (neuron0x4684640()*-0.494966);
}

double nnTrainedchi110_EXTMUID::synapse0x4699730() {
   return (neuron0x4685010()*-0.526138);
}

double nnTrainedchi110_EXTMUID::synapse0x4699770() {
   return (neuron0x4685350()*1.40998);
}

double nnTrainedchi110_EXTMUID::synapse0x46997b0() {
   return (neuron0x4685690()*1.29546);
}

double nnTrainedchi110_EXTMUID::synapse0x4699b30() {
   return (neuron0x4687c80()*0.569358);
}

double nnTrainedchi110_EXTMUID::synapse0x4699b70() {
   return (neuron0x4687fc0()*0.361741);
}

double nnTrainedchi110_EXTMUID::synapse0x4699bb0() {
   return (neuron0x4684300()*-0.00577532);
}

double nnTrainedchi110_EXTMUID::synapse0x4699bf0() {
   return (neuron0x4684640()*-0.0479023);
}

double nnTrainedchi110_EXTMUID::synapse0x4699c30() {
   return (neuron0x4685010()*0.792872);
}

double nnTrainedchi110_EXTMUID::synapse0x4699c70() {
   return (neuron0x4685350()*0.196213);
}

double nnTrainedchi110_EXTMUID::synapse0x4699cb0() {
   return (neuron0x4685690()*-0.455857);
}

double nnTrainedchi110_EXTMUID::synapse0x469a030() {
   return (neuron0x4687c80()*0.0728939);
}

double nnTrainedchi110_EXTMUID::synapse0x469a070() {
   return (neuron0x4687fc0()*-0.110912);
}

double nnTrainedchi110_EXTMUID::synapse0x469a0b0() {
   return (neuron0x4684300()*0.291263);
}

double nnTrainedchi110_EXTMUID::synapse0x46830c0() {
   return (neuron0x4684640()*-0.329819);
}

double nnTrainedchi110_EXTMUID::synapse0x4683100() {
   return (neuron0x4685010()*-0.390712);
}

double nnTrainedchi110_EXTMUID::synapse0x4684980() {
   return (neuron0x4685350()*-0.225718);
}

double nnTrainedchi110_EXTMUID::synapse0x46849c0() {
   return (neuron0x4685690()*-0.0933938);
}

double nnTrainedchi110_EXTMUID::synapse0x4692a20() {
   return (neuron0x4687c80()*-0.339882);
}

double nnTrainedchi110_EXTMUID::synapse0x4692a60() {
   return (neuron0x4687fc0()*0.35424);
}

double nnTrainedchi110_EXTMUID::synapse0x4692aa0() {
   return (neuron0x4684300()*-0.329866);
}

double nnTrainedchi110_EXTMUID::synapse0x4692ae0() {
   return (neuron0x4684640()*-0.412167);
}

double nnTrainedchi110_EXTMUID::synapse0x4692b20() {
   return (neuron0x4685010()*0.341808);
}

double nnTrainedchi110_EXTMUID::synapse0x4692b60() {
   return (neuron0x4685350()*1.43893);
}

double nnTrainedchi110_EXTMUID::synapse0x4692ba0() {
   return (neuron0x4685690()*0.972077);
}

double nnTrainedchi110_EXTMUID::synapse0x4692f20() {
   return (neuron0x4687c80()*-0.031275);
}

double nnTrainedchi110_EXTMUID::synapse0x4692f60() {
   return (neuron0x4687fc0()*-0.369463);
}

double nnTrainedchi110_EXTMUID::synapse0x4692fa0() {
   return (neuron0x4684300()*0.0291528);
}

double nnTrainedchi110_EXTMUID::synapse0x4692fe0() {
   return (neuron0x4684640()*-0.228922);
}

double nnTrainedchi110_EXTMUID::synapse0x4693020() {
   return (neuron0x4685010()*0.268652);
}

double nnTrainedchi110_EXTMUID::synapse0x4684a00() {
   return (neuron0x4685350()*0.177109);
}

double nnTrainedchi110_EXTMUID::synapse0x46859d0() {
   return (neuron0x4685690()*0.0802634);
}

double nnTrainedchi110_EXTMUID::synapse0x4693300() {
   return (neuron0x4687c80()*0.329319);
}

double nnTrainedchi110_EXTMUID::synapse0x4693340() {
   return (neuron0x4687fc0()*0.181932);
}

double nnTrainedchi110_EXTMUID::synapse0x4693380() {
   return (neuron0x4684300()*0.744555);
}

double nnTrainedchi110_EXTMUID::synapse0x46933c0() {
   return (neuron0x4684640()*0.176844);
}

double nnTrainedchi110_EXTMUID::synapse0x4693400() {
   return (neuron0x4685010()*0.470362);
}

double nnTrainedchi110_EXTMUID::synapse0x4693440() {
   return (neuron0x4685350()*0.0114848);
}

double nnTrainedchi110_EXTMUID::synapse0x4693480() {
   return (neuron0x4685690()*-0.163567);
}

double nnTrainedchi110_EXTMUID::synapse0x4693800() {
   return (neuron0x4699400()*0.995677);
}

double nnTrainedchi110_EXTMUID::synapse0x4693840() {
   return (neuron0x46997f0()*1.89366);
}

double nnTrainedchi110_EXTMUID::synapse0x4693880() {
   return (neuron0x4699cf0()*1.33375);
}

double nnTrainedchi110_EXTMUID::synapse0x46938c0() {
   return (neuron0x46926e0()*0.394664);
}

double nnTrainedchi110_EXTMUID::synapse0x4693900() {
   return (neuron0x4692be0()*-2.10595);
}

double nnTrainedchi110_EXTMUID::synapse0x4693940() {
   return (neuron0x469a0f0()*-1.32945);
}

double nnTrainedchi110_EXTMUID::synapse0x4693cc0() {
   return (neuron0x4699400()*-0.305744);
}

double nnTrainedchi110_EXTMUID::synapse0x4693d00() {
   return (neuron0x46997f0()*0.52147);
}

double nnTrainedchi110_EXTMUID::synapse0x4693d40() {
   return (neuron0x4699cf0()*-0.0601294);
}

double nnTrainedchi110_EXTMUID::synapse0x4693d80() {
   return (neuron0x46926e0()*-0.250064);
}

double nnTrainedchi110_EXTMUID::synapse0x4693dc0() {
   return (neuron0x4692be0()*-0.260863);
}

double nnTrainedchi110_EXTMUID::synapse0x4693e00() {
   return (neuron0x469a0f0()*-0.706689);
}

double nnTrainedchi110_EXTMUID::synapse0x4694180() {
   return (neuron0x4699400()*0.142973);
}

double nnTrainedchi110_EXTMUID::synapse0x46941c0() {
   return (neuron0x46997f0()*0.673941);
}

double nnTrainedchi110_EXTMUID::synapse0x4694200() {
   return (neuron0x4699cf0()*0.19596);
}

double nnTrainedchi110_EXTMUID::synapse0x4694240() {
   return (neuron0x46926e0()*-0.353484);
}

double nnTrainedchi110_EXTMUID::synapse0x4694280() {
   return (neuron0x4692be0()*-1.31108);
}

double nnTrainedchi110_EXTMUID::synapse0x46942c0() {
   return (neuron0x469a0f0()*-0.286745);
}

double nnTrainedchi110_EXTMUID::synapse0x4682f10() {
   return (neuron0x4699400()*0.451791);
}

double nnTrainedchi110_EXTMUID::synapse0x4682f50() {
   return (neuron0x46997f0()*1.25169);
}

double nnTrainedchi110_EXTMUID::synapse0x4694750() {
   return (neuron0x4699cf0()*0.996702);
}

double nnTrainedchi110_EXTMUID::synapse0x4694790() {
   return (neuron0x46926e0()*1.94122);
}

double nnTrainedchi110_EXTMUID::synapse0x46947d0() {
   return (neuron0x4692be0()*-2.31132);
}

double nnTrainedchi110_EXTMUID::synapse0x4698930() {
   return (neuron0x469a0f0()*-1.25063);
}

double nnTrainedchi110_EXTMUID::synapse0x4687b10() {
   return (neuron0x46934c0()*1.56032);
}

double nnTrainedchi110_EXTMUID::synapse0x4687b50() {
   return (neuron0x4693980()*-0.206201);
}

double nnTrainedchi110_EXTMUID::synapse0x46879c0() {
   return (neuron0x4693e40()*-0.316764);
}

double nnTrainedchi110_EXTMUID::synapse0x4684fc0() {
   return (neuron0x4694300()*2.60353);
}

