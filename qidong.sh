#!/bin/bash


# setting environment
source /cvmfs/dune.opensciencegrid.org/products/dune/setup_dune.sh
setup cmake v3_21_4
setup boost v1_80_0 -q e20:prof
setup genie v3_04_00 -q e20:prof
setup genie_xsec v3_04_00 -q AR2320i00000:e1000:k250

# nusys and nuisance
export mywd='/exp/dune/app/users/Biao/'
source ${mywd}/nusystematics/build/Linux/bin/setup.fhicl_cpp_standalone.sh
source ${mywd}/nusystematics/build/Linux/bin/setup.systematicstools.sh
source ${mywd}/nusystematics/build/Linux/bin/setup.nusystematics.sh
source /exp/dune/app/users/Biao/nuisance/build/Linux/setup.sh
