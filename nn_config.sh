#!/bin/bash

# ANN cut values, once new nn cuts have been obtained after training, change these values before running run_emi.sh again
export ecal_cut="0.545";  # 0.545 from the results of ECAL_RUN_20211021183926
#export emi_cut="0.665";   # changing from 0.475 on Jan 29, 06:00 IST, to 0.665
#export emi_cut="0.365";    # changing from 0.665 on Apr 27, 19:41 IST, to 0.365 for RPC gas
#export emi_cut="0.345";    # changing from 0.365 on Apr 27, 20:12 IST, to 0.345 for RPC gas
#export emi_cut="0.895";    # changing from 0.345 on Apr 27, 20:35 IST, to 0.895 for RPC gas
#export emi_cut="0.855";    # changing from 0.895 on Apr 27, 22:28 IST, to 0.855 for RPC gas
#export emi_cut="0.335";    # changing from 0.855 on Apr 28, 00:54 IST, to 0.335 for RPC gas
#export emi_cut="0.335";    # changing from 0.335 on Apr 28, 00:54 IST, to 0.345 for RPC gas   # mistake, I forgot to change it to 0.345
export emi_cut="0.785";    # changing from 0.335 on Apr 28, 20:11 IST, to 0.335 for RPC gas
