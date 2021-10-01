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

#example commad: source run_emi.sh N $(date +"%Y%m%d%H%M%S") -C -R




#####################################################################################
# Main script starts                                                                 
main ()
{
    if [[ "${script_path}" != *"dune"* ]]
    then
        # setting environmental variables 
        echo -e "\e[91m Please set the environment vars first by sourcing set_env.sh in the main dir.\e[0m"
        return 1
    fi

    cd $build_dir;
    if [[ "$(pwd)" != *"build"* ]]
    then
        echo -e "\e[91m    Error: must be run from \"${build_dir}\", instead you are in $(pwd)\e[0m"
    else
        nfiles="$1";
        tag="${2}_${nfiles}_files"; #try to give a time tag
        root_file="out30_chi100_${tag}_EXTMUID.root"
        output="${nn_input_dir}${root_file}";               
        echo "  Build dir : ${build_dir}";
        echo "  Source dir: ${source_dir}";
        echo "  Output   : $output"
        sleep 2;
        echo $output >> "${script_dir}/misc/out_list.txt"

        sleep 1;

        if [[ "$@" == *"COMP"* ]] || [[ "$@" == *"comp"* ]] || [[ "$@" == *"-c"* ]] || [[ "$@" == *"-C"* ]]
        then
            echo -e " \e[33m \"COMPILATION\" requested.. compiling...\e[0m";
            echo "cmake ${source_dir}; make;"
            sleep 1;   
            cmake ${source_dir}; make;    
            while true; do
                read -p "   Do you wish to proceed? " yn
                case $yn in
                    [Yy]* ) break;;
                    [Nn]* ) return 0;;
                    * ) echo " Please answer yes or no.";;
                esac
            done
        else
            echo -e " \e[33m \"Compilation\" not requested.. skipping...\e[0m";
        fi
        if [[ "$@" == *"RUN"* ]] || [[ "$@" == *"run"* ]] || [[ "$@" == *"-r"* ]] || [[ "$@" == *"-R"* ]]
        then
            echo -e " \e[33m \"RUN\" requested.. running...\e[0m";
            echo " Target file: $output"
            read -p "Press enter to continue";
            echo " ./runMuID_EXTMUID_NN \"${script_dir}input/$file_list\" $nfiles \"${output}\""
            ./runMuID_EXTMUID_NN "${script_dir}/input/$file_list" $nfiles ${output}
            while true; do
                read -p "   Do you wish to keep a copy of the mu-ID output in: ${backup_output_dir}? " yn
                case $yn in
                    [Yy]* ) cp ${output} ${backup_output_dir}; break;;
                    [Nn]* ) break;;
                    * ) echo " Please answer yes or no.";;
                esac
            done
            echo "                                           "
            while true; do
                read -p "   Do you wish to train the ANN? " yn
                case $yn in
                    [Yy]* ) echo "./runNN_EXTMUID \"${nn_input_dir}\" \"${root_file}\" \"${nn_output_dir}\""; ./runNN_EXTMUID "${nn_input_dir}" "${root_file}" "${nn_output_dir}"; break;;
                    [Nn]* ) return 0;;
                    * ) echo " Please answer yes or no.";;
                esac
            done
            echo "                                           "
        else
                echo -e " \e[33m \"RUN\" not requested.. skipping...\e[0m";
        fi
    fi #BUILD DIRECTORY CHECK IF CONDITION ENDS

    echo -e "\e[34m    Took $SECONDS for \"main\" to finish...\e[0m"
    echo -e "\e[32m    Exiting...\e[0m"
    return 0;
}            
# Main script ends                                                                   
#####################################################################################



# inputs to main
main "$@" 
