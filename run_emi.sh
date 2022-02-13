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

    echo "###########################################################################"
    echo "Starting the run_emi.sh script..."
    # checking if environment is set correctly
    if [[ "${script_dir}" != *"dune"* ]]
    then
        # setting environmental variables 
        echo -e "\e[31mPlease set the environment vars first by sourcing set_env.sh in the main dir.\e[0m"
        return 1
    fi

    # right executable directory check
    if [[ "$(pwd)/" != *"${script_dir}"* ]]
    then
        echo -e "\e[31m    Error: must be run from: \"${script_dir}\"!"
        echo -e "   Exiting...\e[0m"
    else
        if [[ "$@" == *"-C"*  ]]
        then
            echo "..........................................................................."
            echo "You have chosen to compile: compileing...";
            echo "  source ${script_dir}install.sh";
            source ${script_dir}install.sh;
            echo "..........................................................................."
            sleep 1;
            echo "" 
            echo "" 
            echo "" 
            echo "" 
            echo "" 
        fi

        echo "..........................................................................."
        echo -e "  \e[32m   Creating the current run...";
        run_dir="${base_output_root_dir}EMIRPC_RUN_${t_stamp}/";
        echo "run_dir=\"${base_output_root_dir}EMIRPC_RUN_${t_stamp}/\"";
        echo "mkdir -p \"${run_dir}\"";
        mkdir -p "${run_dir}";
        nn_input_dir="${run_dir}NNINPUT/"
        echo "mkdir -p \"${nn_input_dir}\"";
        mkdir -p "${nn_input_dir}";
        nn_output_dir="${run_dir}NNOUTPUT/"
        echo "mkdir -p \"${nn_output_dir}\"";
        mkdir -p "${nn_output_dir}";
        log_dir="${run_dir}logs/";
        echo "mkdir -p \"${log_dir}\"";
        mkdir -p "${log_dir}";
        echo -e "\e[0m";
        echo "  Done creating the run directories...";
        sleep 1; 
        # ------------------------------------------------------------------

        echo -e "\e[96m";
        echo "  Loading NN cut values...";
        echo "  source ${script_dir}nn_config.sh";
        source ${script_dir}nn_config.sh;
        cat ${script_dir}nn_config.sh | grep export; 
        echo "  Entering the build directory...";
        echo "  cd $build_dir";
        cd $build_dir;
        startfile="$1";
        nfiles="$2";
        tag="${t_stamp}_${nfiles}_files"; 
        root_file="out30_chi100_${tag}_EXTMUID.root"
        output="${nn_input_dir}${root_file}";               
        echo "  Build dir : ${build_dir}";
        echo "  Source dir: ${source_dir}";
        echo "  Output   : $output"
        sleep 2;
        echo "  Latest output: $output" >> "${script_dir}misc/out_list.txt"
        sleep 1;
        echo "  Target file: $output"

        # in case we want to pass a manual file list instead of the default one then -m followed by the list file path must be given
        if [[ "$@" == *"-m"* ]] 
        then
            echo -e "\e[35m WARNING: you have chosen a manual file list:"
            all_args="$@"
            atanus_file_list=$(echo "${all_args#*"-m"}" | sed 's/^ *//g' | cut -d ' ' -f1)
            echo "  $atanus_file_list";
            if  [[ "$@" == *"-p"* ]]
            then 
                # in case we want to pass a ecal_passed file and event # list file to skip that particular matching file and event           
                echo -e "\e[35m WARNING: you have chosen to skip ecal_passed events"
                ecal_passed_list="$(echo "${all_args#*"-p"}" | sed 's/^ *//g' | cut -d ' ' -f1)"
                echo "  $ecal_passed_list";
                echo -e "\e[96m";
                echo "  ./runMuID_EXTMUID_NN \"${script_dir}input/$atanus_file_list\" \"$startfile\" \"$nfiles\" \"${output}\" \"${ecal_cut}\" \"${emi_cut}\" \"$ecal_passed_list\""
                    ./runMuID_EXTMUID_NN "$atanus_file_list" "${startfile}" "$nfiles" "${output}" "${ecal_cut}" "${emi_cut}" "${ecal_passed_list}"  2>&1 | tee -a "${log_dir}${t_stamp}"_run_emi.log
                    sed -n "$((startfile + 1)), $((startfile + nfiles)) p" "$atanus_file_list" > "${log_dir}${t_stamp}"_run_emi_file_list.log
                else
                    echo "  ./runMuID_EXTMUID_NN \"${script_dir}input/$atanus_file_list\" \"$startfile\" \"$nfiles\" \"${output}\" \"${ecal_cut}\" \"${emi_cut}\""
                    ./runMuID_EXTMUID_NN "$atanus_file_list" "${startfile}" "$nfiles" "${output}" "${ecal_cut}" "${emi_cut}"  2>&1 | tee -a "${log_dir}${t_stamp}"_run_emi.log 
                fi
        else
            echo "  ./runMuID_EXTMUID_NN \"${script_dir}input/$atanus_file_list\" \"$startfile\" \"$nfiles\" \"${output}\" \"${ecal_cut}\" \"${emi_cut}\""
            ./runMuID_EXTMUID_NN "${script_dir}input/$atanus_file_list" "${startfile}" "$nfiles" "${output}" "${ecal_cut}" "${emi_cut}"  2>&1 | tee -a "${log_dir}${t_stamp}"_run_emi.log
        fi


        echo -e "\e[32m             "
        if [[ "$@" != *"yall"*  ]]
        then
            while true; do
                read -p "   Do you wish to train the ANN? " yn
                case $yn in
                    [Yy]* ) echo "  Compiling the ANN code first, so that a change in architexture doesn't go un-updated..."; 
                            echo "  g++ ${source_dir}runNN_EXTMUID.cpp `root-config --glibs --cflags` -lTreePlayer -lMLP -lXMLIO -o ${build_dir}runNN_EXTMUID"; 
                            g++ ${source_dir}runNN_EXTMUID.cpp `root-config --glibs --cflags` -lTreePlayer -lMLP -lXMLIO -o ${build_dir}runNN_EXTMUID; 
                            echo "  ./runNN_EXTMUID \"${nn_input_dir}\" \"${root_file}\" \"${nn_output_dir}\" \"${t_stamp}\""; 
                            ./runNN_EXTMUID "${nn_input_dir}" "${root_file}" "${nn_output_dir}" "${t_stamp}"  2>&1 | tee -a "${log_dir}${t_stamp}_emi_nn_results.log"; 
                            break;;
                    [Nn]* ) "   Ok! Skipping the training..."; return 0;;
                    * ) echo -e "\e[0m"; echo -e "\e[93m  Please answer y/n:\e[0m ";;
                esac
            done
        else
            echo "  Compiling the ANN code first, so that a change in architexture doesn't go un-updated..."; 
            echo "  g++ ${source_dir}runNN_EXTMUID.cpp `root-config --glibs --cflags` -lTreePlayer -lMLP -lXMLIO -o ${build_dir}runNN_EXTMUID"; 
            g++ ${source_dir}runNN_EXTMUID.cpp `root-config --glibs --cflags` -lTreePlayer -lMLP -lXMLIO -o ${build_dir}runNN_EXTMUID; 
            echo -e "\e[32m Training the ANN...";
            echo "  ./runNN_EXTMUID \"${nn_input_dir}\" \"${root_file}\" \"${nn_output_dir}\" \"${t_stamp}\"";
            ./runNN_EXTMUID "${nn_input_dir}" "${root_file}" "${nn_output_dir}" "${t_stamp}"  2>&1 | tee -a "${log_dir}${t_stamp}_emi_nn_results.log";
        fi
        echo -e "\e[96m                                           "
    fi #SCRIPT DIRECTORY CHECK IF CONDITION ENDS
    cd $script_dir;
    
    echo -e "\e[96m  Log of \"runMuID_EXTMUID_NN\" saved in: ${script_dir}logs/${t_stamp}_run_emi.log"
    echo "  Log of runNN_EXTMUID saved in: ${log_dir}${t_stamp}_emi_nn_results.log"
    echo "  List of files analyzed are here: ${script_dir}logs/${t_stamp}_run_emi_file_list.log"
    #echo "  Events that passed the given emi cut $emi_cut (nn_config.sh) are in: ${script_dir}logs/${t_stamp}_run_emi_passed.log"
    #mv ${nn_input_dir}passed_log.txt "${log_dir}${t_stamp}"_run_emi_passed.log

    echo "  Configurations are saved in ${log_dir}${t_stamp}_emi_configs.log"
    echo "Command:            : source $(basename $0) $@"            > ${script_dir}logs/${t_stamp}_emi_configs.log
    echo "Output ROOT file    : ${root_file}"                        >> ${script_dir}logs/${t_stamp}_emi_configs.log
    echo "Input edep file list: ${script_dir}input/$bings_file_list" >> ${script_dir}logs/${t_stamp}_emi_configs.log
    echo "First file #        : ${startfile}"                        >> ${script_dir}logs/${t_stamp}_emi_configs.log
    echo "# of files          : ${nfiles}"                           >> ${script_dir}logs/${t_stamp}_emi_configs.log
    echo "Starting ecal cut   : ${ecal_cut}"                         >> ${script_dir}logs/${t_stamp}_emi_configs.log 
    echo "Starting emi cut    : ${emi_cut}"                          >> ${script_dir}logs/${t_stamp}_emi_configs.log 
    mv ${script_dir}logs/${t_stamp}_emi_configs.log ${log_dir}${t_stamp}_emi_configs.log

    echo "Done EMIRPC analyzing $nfiles, output: ${run_dir}" | mail -s "Done EMIRPC $nfiles, took $SECONDS seconds" atanu.quanta@gmail.com
    echo -e "\e[96m Took $SECONDS for \"main\" to finish..."
    echo -e "   Exiting...\e[0m"
    echo "###########################################################################"
    return 0;
}            
# Main script ends                                                                   
#####################################################################################



# inputs to main
main "$@";
#main "$@" 2>&1 | tee -a "${log_dir}${t_stamp}"_run_emi.log
