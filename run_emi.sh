#!/bin/bash
#####################################################################################
#                    EXTERNAL MUON IDENTIFICATION SCRIPT                            #
#####################################################################################
#                                                                                   #
#                                                                                   #
#                                                                                   #
#                                                                                   #
#                                                                                   #
#                                                                                   #
#                                                                                   #
#                                                                                   #
#                                                                                   #
#                                                                                   #
#                                                                                   #
#                                                                                   #
#####################################################################################

#example commad: source run_emi.sh n N -yall 
#
# where "n" is the first file number and "N" is the number of files starting from nth 
# to be analyzed
# -yall will enable all steps, that is the whole NN chain

#####################################################################################





t_stamp=$(date +"%Y%m%d%H%M%S");
# Main script starts                                                                 
main ()
{
    # checking if environment is set correctly
    if [[ "${script_dir}" != *"dune"* ]]
    then
        # setting environmental variables 
        echo -e "\e[31mPlease set the environment vars first by sourcing set_env.sh in the main dir.\e[0m"
        return 1
    fi

    # right executable directory check
    if [[ "$(pwd)" != *"${script_dir}"* ]]
    then
        echo -e "\e[31m    Error: must be run from: \"${script_dir}\"!"
        echo -e "   Exiting...\e[0m"
    else
        echo -e "\e[96m";
        echo "  Loading NN cut values..."
        echo "  source ${script_dir}/nn_config.sh"
        source ${script_dir}/nn_config.sh
        # entering the build directory
        cd $build_dir;
        startfile="$1";
        nfiles="$2";
#        t_stamp=$(date +"%Y%m%d%H%M%S");
        tag="${t_stamp}_${nfiles}_files"; #try to give a time tag
        root_file="out30_chi100_${tag}_EXTMUID.root"
        output="${nn_input_dir}${root_file}";               
        echo "  Build dir : ${build_dir}";
        echo "  Source dir: ${source_dir}";
        echo "  Output   : $output"
        sleep 2;
        echo $output >> "${script_dir}/misc/out_list.txt"

        sleep 1;

        echo "  Target file: $output"
        echo "  ./runMuID_EXTMUID_NN \"${script_dir}/input/$atanus_file_list\" \"$startfile\" \"$nfiles\" \"${output}\" \"${ecal_cut}\" \"${emi_cut}\""
        ./runMuID_EXTMUID_NN "${script_dir}/input/$atanus_file_list" "${startfile}" "$nfiles" "${output}" "${ecal_cut}" "${emi_cut}"
        echo -e "\e[32m             "
        if [[ "$@" != *"yall"*  ]]
        then
            while true; do
                read -p "   Do you wish to train the ANN? " yn
                case $yn in
                    [Yy]* ) echo "  Compiling the ANN code first, so that a change in architexture doesn't go un-updated..."; 
                            echo "  g++ ${source_dir}/runNN_EXTMUID.cpp `root-config --glibs --cflags` -lTreePlayer -lMLP -lXMLIO -o ${build_dir}/runNN_EXTMUID"; 
                            g++ ${source_dir}/runNN_EXTMUID.cpp `root-config --glibs --cflags` -lTreePlayer -lMLP -lXMLIO -o ${build_dir}/runNN_EXTMUID; 
                            echo "  ./runNN_EXTMUID \"${nn_input_dir}\" \"${root_file}\" \"${nn_output_dir}\" \"${t_stamp}\""; 
                            ./runNN_EXTMUID "${nn_input_dir}" "${root_file}" "${nn_output_dir}" "${t_stamp}"; 
                            break;;
                    [Nn]* ) "   Ok! Skipping the training..."; return 0;;
                    * ) echo -e "\e[0m"; echo -e "\e[93m  Please answer y/n:\e[0m ";;
                esac
            done
        else
            echo "  Compiling the ANN code first, so that a change in architexture doesn't go un-updated..."; 
            echo "  g++ ${source_dir}/runNN_EXTMUID.cpp `root-config --glibs --cflags` -lTreePlayer -lMLP -lXMLIO -o ${build_dir}/runNN_EXTMUID"; 
            g++ ${source_dir}/runNN_EXTMUID.cpp `root-config --glibs --cflags` -lTreePlayer -lMLP -lXMLIO -o ${build_dir}/runNN_EXTMUID; 
            echo -e "\e[32m Training the ANN...";
            echo "  ./runNN_EXTMUID \"${nn_input_dir}\" \"${root_file}\" \"${nn_output_dir}\" \"${t_stamp}\"";
            ./runNN_EXTMUID "${nn_input_dir}" "${root_file}" "${nn_output_dir}" "${t_stamp}";
        fi
        echo -e "\e[96m                                           "
    fi #SCRIPT DIRECTORY CHECK IF CONDITION ENDS
    cd $script_dir;

    echo -e "\e[96m Took $SECONDS for \"main\" to finish..."
    echo -e "   Exiting...\e[0m"
    return 0;
}            
# Main script ends                                                                   
#####################################################################################



# inputs to main
main "$@" 2>&1 | tee -a ${script_dir}/logs/"${t_stamp}"_run_emi.log

 
