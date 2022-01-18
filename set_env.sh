#!/bin/bash
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
atanus_file_list="atanus_common_inputs_new_geom_jan_2022.txt"
#bings_file_list="bings_common_inputs.txt";
bings_file_list="${atanus_file_list}"
# **********************************************************************************#
echo -e "  \e[32mSetting up the environment variables...\e[0m";
sleep 1;
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
else
    echo -e "  \e[31mPlease source the script, do not run it!";
    echo -e "  Exiting...\e[0m"
fi
echo -e "\e[33m  Exiting...\e[0m"
#####################################################################################
