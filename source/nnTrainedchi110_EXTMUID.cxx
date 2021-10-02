#include "/dune/app/users/anath/EDEP_ANALYSIS/muID/ATANUs/EMI_BETA_00/source/nnTrainedchi110_EXTMUID.h"
#include <cmath>

double nnTrainedchi110_EXTMUID::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6) {
   input0 = (in0 - 1.17123)/3.98895;
   input1 = (in1 - 1.17123)/3.98895;
   input2 = (in2 - 1.18605)/4.00355;
   input3 = (in3 - -1.002)/1.23778e-07;
   input4 = (in4 - 1.18605)/4.00355;
   input5 = (in5 - 1.01378)/0.133783;
   input6 = (in6 - 1.01378)/0.133783;
   switch(index) {
     case 0:
         return neuron0x4236e60();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::Value(int index, double* input) {
   input0 = (input[0] - 1.17123)/3.98895;
   input1 = (input[1] - 1.17123)/3.98895;
   input2 = (input[2] - 1.18605)/4.00355;
   input3 = (input[3] - -1.002)/1.23778e-07;
   input4 = (input[4] - 1.18605)/4.00355;
   input5 = (input[5] - 1.01378)/0.133783;
   input6 = (input[6] - 1.01378)/0.133783;
   switch(index) {
     case 0:
         return neuron0x4236e60();
     default:
         return 0.;
   }
}

double nnTrainedchi110_EXTMUID::neuron0x2af0c20() {
   return input0;
}

double nnTrainedchi110_EXTMUID::neuron0x2af0f60() {
   return input1;
}

double nnTrainedchi110_EXTMUID::neuron0x422fcb0() {
   return input2;
}

double nnTrainedchi110_EXTMUID::neuron0x422fff0() {
   return input3;
}

double nnTrainedchi110_EXTMUID::neuron0x4230330() {
   return input4;
}

double nnTrainedchi110_EXTMUID::neuron0x4234eb0() {
   return input5;
}

double nnTrainedchi110_EXTMUID::neuron0x42351f0() {
   return input6;
}

double nnTrainedchi110_EXTMUID::input0x4235660() {
   double input = 0.123534;
   input += synapse0x2aefcc0();
   input += synapse0x4235910();
   input += synapse0x4235950();
   input += synapse0x4235990();
   input += synapse0x42359d0();
   input += synapse0x4235a10();
   input += synapse0x4235a50();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4235660() {
   double input = input0x4235660();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4235a90() {
   double input = 2.5769;
   input += synapse0x4235dd0();
   input += synapse0x4235e10();
   input += synapse0x4235e50();
   input += synapse0x4235e90();
   input += synapse0x4235ed0();
   input += synapse0x4235f10();
   input += synapse0x4235f50();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4235a90() {
   double input = input0x4235a90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4235f90() {
   double input = 0.374588;
   input += synapse0x42362d0();
   input += synapse0x4236310();
   input += synapse0x4236350();
   input += synapse0x2af1180();
   input += synapse0x2aef790();
   input += synapse0x2aef7d0();
   input += synapse0x42364a0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4235f90() {
   double input = input0x4235f90();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x42364e0() {
   double input = -0.456146;
   input += synapse0x4236820();
   input += synapse0x4236860();
   input += synapse0x42368a0();
   input += synapse0x42368e0();
   input += synapse0x4236920();
   input += synapse0x4236960();
   input += synapse0x42369a0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x42364e0() {
   double input = input0x42364e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x42369e0() {
   double input = 0.0950556;
   input += synapse0x4236d20();
   input += synapse0x4236d60();
   input += synapse0x4236da0();
   input += synapse0x4236de0();
   input += synapse0x4236e20();
   input += synapse0x4236390();
   input += synapse0x42363d0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x42369e0() {
   double input = input0x42369e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4237070() {
   double input = -1.22013;
   input += synapse0x4237320();
   input += synapse0x4237360();
   input += synapse0x42373a0();
   input += synapse0x42373e0();
   input += synapse0x4237420();
   input += synapse0x4237460();
   input += synapse0x42374a0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4237070() {
   double input = input0x4237070();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x42374e0() {
   double input = 0.271301;
   input += synapse0x4237820();
   input += synapse0x4237860();
   input += synapse0x42378a0();
   input += synapse0x42378e0();
   input += synapse0x4237920();
   input += synapse0x4237960();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x42374e0() {
   double input = input0x42374e0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x42379a0() {
   double input = -0.308799;
   input += synapse0x4237ce0();
   input += synapse0x4237d20();
   input += synapse0x4237d60();
   input += synapse0x4237da0();
   input += synapse0x4237de0();
   input += synapse0x4237e20();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x42379a0() {
   double input = input0x42379a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4237e60() {
   double input = 0.101096;
   input += synapse0x42381a0();
   input += synapse0x42381e0();
   input += synapse0x4238220();
   input += synapse0x4238260();
   input += synapse0x42382a0();
   input += synapse0x42382e0();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4237e60() {
   double input = input0x4237e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4238320() {
   double input = 0.37177;
   input += synapse0x2aef5e0();
   input += synapse0x2aef620();
   input += synapse0x4238770();
   input += synapse0x42387b0();
   input += synapse0x42387f0();
   input += synapse0x4233540();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4238320() {
   double input = input0x4238320();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double nnTrainedchi110_EXTMUID::input0x4236e60() {
   double input = -1.06073;
   input += synapse0x4238cd0();
   input += synapse0x4238d10();
   input += synapse0x4238d50();
   input += synapse0x4238d90();
   return input;
}

double nnTrainedchi110_EXTMUID::neuron0x4236e60() {
   double input = input0x4236e60();
   return (input * 1)+0;
}

double nnTrainedchi110_EXTMUID::synapse0x2aefcc0() {
   return (neuron0x2af0c20()*-0.483316);
}

double nnTrainedchi110_EXTMUID::synapse0x4235910() {
   return (neuron0x2af0f60()*-0.743158);
}

double nnTrainedchi110_EXTMUID::synapse0x4235950() {
   return (neuron0x422fcb0()*-0.143901);
}

double nnTrainedchi110_EXTMUID::synapse0x4235990() {
   return (neuron0x422fff0()*0.0626496);
}

double nnTrainedchi110_EXTMUID::synapse0x42359d0() {
   return (neuron0x4230330()*0.342627);
}

double nnTrainedchi110_EXTMUID::synapse0x4235a10() {
   return (neuron0x4234eb0()*-0.280558);
}

double nnTrainedchi110_EXTMUID::synapse0x4235a50() {
   return (neuron0x42351f0()*0.182375);
}

double nnTrainedchi110_EXTMUID::synapse0x4235dd0() {
   return (neuron0x2af0c20()*0.975671);
}

double nnTrainedchi110_EXTMUID::synapse0x4235e10() {
   return (neuron0x2af0f60()*0.941827);
}

double nnTrainedchi110_EXTMUID::synapse0x4235e50() {
   return (neuron0x422fcb0()*-0.768566);
}

double nnTrainedchi110_EXTMUID::synapse0x4235e90() {
   return (neuron0x422fff0()*0.0441269);
}

double nnTrainedchi110_EXTMUID::synapse0x4235ed0() {
   return (neuron0x4230330()*-1.24142);
}

double nnTrainedchi110_EXTMUID::synapse0x4235f10() {
   return (neuron0x4234eb0()*0.0312031);
}

double nnTrainedchi110_EXTMUID::synapse0x4235f50() {
   return (neuron0x42351f0()*-0.121945);
}

double nnTrainedchi110_EXTMUID::synapse0x42362d0() {
   return (neuron0x2af0c20()*-0.023892);
}

double nnTrainedchi110_EXTMUID::synapse0x4236310() {
   return (neuron0x2af0f60()*-0.567053);
}

double nnTrainedchi110_EXTMUID::synapse0x4236350() {
   return (neuron0x422fcb0()*-0.223347);
}

double nnTrainedchi110_EXTMUID::synapse0x2af1180() {
   return (neuron0x422fff0()*0.253723);
}

double nnTrainedchi110_EXTMUID::synapse0x2aef790() {
   return (neuron0x4230330()*-0.409104);
}

double nnTrainedchi110_EXTMUID::synapse0x2aef7d0() {
   return (neuron0x4234eb0()*-1.00511);
}

double nnTrainedchi110_EXTMUID::synapse0x42364a0() {
   return (neuron0x42351f0()*-0.757123);
}

double nnTrainedchi110_EXTMUID::synapse0x4236820() {
   return (neuron0x2af0c20()*-0.21928);
}

double nnTrainedchi110_EXTMUID::synapse0x4236860() {
   return (neuron0x2af0f60()*0.175857);
}

double nnTrainedchi110_EXTMUID::synapse0x42368a0() {
   return (neuron0x422fcb0()*0.0962093);
}

double nnTrainedchi110_EXTMUID::synapse0x42368e0() {
   return (neuron0x422fff0()*0.492536);
}

double nnTrainedchi110_EXTMUID::synapse0x4236920() {
   return (neuron0x4230330()*-0.228606);
}

double nnTrainedchi110_EXTMUID::synapse0x4236960() {
   return (neuron0x4234eb0()*-0.665093);
}

double nnTrainedchi110_EXTMUID::synapse0x42369a0() {
   return (neuron0x42351f0()*-0.361087);
}

double nnTrainedchi110_EXTMUID::synapse0x4236d20() {
   return (neuron0x2af0c20()*-0.58952);
}

double nnTrainedchi110_EXTMUID::synapse0x4236d60() {
   return (neuron0x2af0f60()*-0.240974);
}

double nnTrainedchi110_EXTMUID::synapse0x4236da0() {
   return (neuron0x422fcb0()*0.126563);
}

double nnTrainedchi110_EXTMUID::synapse0x4236de0() {
   return (neuron0x422fff0()*0.333792);
}

double nnTrainedchi110_EXTMUID::synapse0x4236e20() {
   return (neuron0x4230330()*-0.147052);
}

double nnTrainedchi110_EXTMUID::synapse0x4236390() {
   return (neuron0x4234eb0()*-0.519292);
}

double nnTrainedchi110_EXTMUID::synapse0x42363d0() {
   return (neuron0x42351f0()*-0.464192);
}

double nnTrainedchi110_EXTMUID::synapse0x4237320() {
   return (neuron0x2af0c20()*0.00310866);
}

double nnTrainedchi110_EXTMUID::synapse0x4237360() {
   return (neuron0x2af0f60()*-0.764485);
}

double nnTrainedchi110_EXTMUID::synapse0x42373a0() {
   return (neuron0x422fcb0()*-0.0273633);
}

double nnTrainedchi110_EXTMUID::synapse0x42373e0() {
   return (neuron0x422fff0()*-0.12799);
}

double nnTrainedchi110_EXTMUID::synapse0x4237420() {
   return (neuron0x4230330()*0.169647);
}

double nnTrainedchi110_EXTMUID::synapse0x4237460() {
   return (neuron0x4234eb0()*0.295488);
}

double nnTrainedchi110_EXTMUID::synapse0x42374a0() {
   return (neuron0x42351f0()*-0.126379);
}

double nnTrainedchi110_EXTMUID::synapse0x4237820() {
   return (neuron0x4235660()*-0.0017391);
}

double nnTrainedchi110_EXTMUID::synapse0x4237860() {
   return (neuron0x4235a90()*0.32235);
}

double nnTrainedchi110_EXTMUID::synapse0x42378a0() {
   return (neuron0x4235f90()*-0.44572);
}

double nnTrainedchi110_EXTMUID::synapse0x42378e0() {
   return (neuron0x42364e0()*0.406513);
}

double nnTrainedchi110_EXTMUID::synapse0x4237920() {
   return (neuron0x42369e0()*-0.481758);
}

double nnTrainedchi110_EXTMUID::synapse0x4237960() {
   return (neuron0x4237070()*-0.127041);
}

double nnTrainedchi110_EXTMUID::synapse0x4237ce0() {
   return (neuron0x4235660()*1.15054);
}

double nnTrainedchi110_EXTMUID::synapse0x4237d20() {
   return (neuron0x4235a90()*1.1582);
}

double nnTrainedchi110_EXTMUID::synapse0x4237d60() {
   return (neuron0x4235f90()*-0.566178);
}

double nnTrainedchi110_EXTMUID::synapse0x4237da0() {
   return (neuron0x42364e0()*-0.599024);
}

double nnTrainedchi110_EXTMUID::synapse0x4237de0() {
   return (neuron0x42369e0()*0.368242);
}

double nnTrainedchi110_EXTMUID::synapse0x4237e20() {
   return (neuron0x4237070()*-0.822283);
}

double nnTrainedchi110_EXTMUID::synapse0x42381a0() {
   return (neuron0x4235660()*1.73462);
}

double nnTrainedchi110_EXTMUID::synapse0x42381e0() {
   return (neuron0x4235a90()*2.544);
}

double nnTrainedchi110_EXTMUID::synapse0x4238220() {
   return (neuron0x4235f90()*-0.60765);
}

double nnTrainedchi110_EXTMUID::synapse0x4238260() {
   return (neuron0x42364e0()*-0.581515);
}

double nnTrainedchi110_EXTMUID::synapse0x42382a0() {
   return (neuron0x42369e0()*0.193688);
}

double nnTrainedchi110_EXTMUID::synapse0x42382e0() {
   return (neuron0x4237070()*-1.88417);
}

double nnTrainedchi110_EXTMUID::synapse0x2aef5e0() {
   return (neuron0x4235660()*-1.00891);
}

double nnTrainedchi110_EXTMUID::synapse0x2aef620() {
   return (neuron0x4235a90()*-1.04718);
}

double nnTrainedchi110_EXTMUID::synapse0x4238770() {
   return (neuron0x4235f90()*0.754579);
}

double nnTrainedchi110_EXTMUID::synapse0x42387b0() {
   return (neuron0x42364e0()*0.546803);
}

double nnTrainedchi110_EXTMUID::synapse0x42387f0() {
   return (neuron0x42369e0()*0.186592);
}

double nnTrainedchi110_EXTMUID::synapse0x4233540() {
   return (neuron0x4237070()*0.896255);
}

double nnTrainedchi110_EXTMUID::synapse0x4238cd0() {
   return (neuron0x42374e0()*-0.482693);
}

double nnTrainedchi110_EXTMUID::synapse0x4238d10() {
   return (neuron0x42379a0()*1.44545);
}

double nnTrainedchi110_EXTMUID::synapse0x4238d50() {
   return (neuron0x4237e60()*2.73118);
}

double nnTrainedchi110_EXTMUID::synapse0x4238d90() {
   return (neuron0x4238320()*-2.56032);
}

