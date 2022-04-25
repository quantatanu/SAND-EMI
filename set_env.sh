#!/bin/bash
#export set_env="0"
#####################################################################################
# setting the environment
#####################################################################################

# ********* WARNING ******** FOLLOWING LINE, THAT IS "base_output_root_dir" MUST BE #
# ********* edited, this is where you would like to store all your analysis files   #
base_output_root_dir="/pnfs/dune/persistent/users/anath/EXTMUID_ANALYSIS/ROOT/";    #
# ********* AND THE FOLLOWING FILE MUST CONTAIN ABSOLUTE PATHS TO THE EDEPSIM ROOT  #  
# ********* files that you are going to analyze, this file containing the path list #  
# ********* must be kept within the "input" directory located at home of this pack. #  
#atanus_file_list="atanus_common_inputs_ActiveIron.txt";
#atanus_file_list="atanus_fhc_edep_list_double_gap_rpc_2_layers_20_files_16feb2022.txt" 
#atanus_file_list="atanus_fhc_edep_muon_gun_double_gap_rpc_2_layers_1_files_apr_19_2022.txt"
atanus_file_list="atanus_fhc_edep_list_double_gap_rpc_2_layers_20_files_20apr2022.txt"      
#atanus_file_list="atanus_common_inputs_ActiveIron_back.txt";



#bings_file_list="bings_common_inputs.txt";
bings_file_list="${atanus_file_list}"
# **********************************************************************************#
echo -e "  \e[32mSetting up the environment variables...\e[0m";
sleep 1;
source /cvmfs/dune.opensciencegrid.org/products/dune/setup_dune.sh
setup root v6_16_00 -q e17:prof
setup genie v2_12_10d -q e17:prof
setup geant4 v4_10_3_p03d -q e17:prof
setup cmake v3_14_3 -q Linux64bit+3.10-2.17
setup jobsub_client
#setup "edepsim" "v2_0_1" -q  "e17:prof"
export PATH=$PATH:/dune/app/users/mylab/NDsofts/edep_sim_install_origin_linux3/bin
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/dune/app/users/mylab/NDsofts/edep_sim_install_origin_linux3/lib
    # unsetting precious set up if any..................................................#
    echo -e "\e[33m  Unsetting any previous path settings (if any) first..."
    echo "  unset script_path";
    unset script_path
    echo "  unset script_dir";
    unset script_dir
    echo "  unset source_dir";
    unset source_dir
    echo -e "  unset build_dir\e[0m";
    unset build_dir
    #...................................................................................#

    sleep 1;
    if [[ $0 != $BASH_SOURCE ]] 
    then
        if [[ "${script_path}" != "dune" ]]
        then
            script_path="$(readlink -f $BASH_SOURCE)";
            script_dir="$(dirname $script_path)/";
            source_dir="${script_dir}source/";
            build_dir="${script_dir}build/";
        fi
    export set_env="1"
    else
        echo -e "  \e[31mPlease source the script, do not run it!";
        echo -e "  Exiting...\e[0m"
    fi
echo -e "\e[33m  Exiting...\e[0m"
#####################################################################################
