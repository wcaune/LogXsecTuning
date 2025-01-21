#!/bin/bash

SEED=${RANDOM}
#FLUXFILE=/afs/cern.ch/work/s/sdolan/public/public_fluxFiles/DUNE_OptimizedEngineeredNov2017_REGULAR.root,numu_NDFHC_flux #You might need to copy this file over... Come back to this need to specify the histogram 
#FLUXFILE=/exp/dune/app/users/bjrams87/Systanal/flux/flux_numu.data
FLUXFILE=/exp/dune/app/users/Biao/flux_numu.data
#TARGET=1000170350[1.0]
#TARGET=1000010010[1.0]
#TARGET=1000220480[1.0]
#TARGET=1000080160[1.0]
TARGET=1000060120[1.0]
RUNNUMBER=1
PARTICLE=14

#check which event generator list you actually want to use for your study! number after target is the mass fraction 
gevgen -n 60000 -r $RUNNUMBER -p ${PARTICLE} -t ${TARGET} --tune AR23_20i_00_000 -e 0.0,20.0  -f ${FLUXFILE} --cross-sections ${GENIE_XSEC_DIR}/data/gxspl-FNALbig.xml.gz -o ${PARTICLE}_${TARGET}_${SEED}.root --seed ${SEED} --event-generator-list CCQE 
