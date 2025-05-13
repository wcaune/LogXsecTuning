#
# From fixing endless compiling errors
#
# Dr. Biao Wang
#

LIB_TYPE    := shared
LIB         := lib$(PACKAGE)
LIBCXXFILES := $(wildcard *.cxx)
JOBFILES    := $(wildcard *.fcl)

LIBLINK    := -L$(SRT_PRIVATE_CONTEXT)/lib/$(SRT_SUBDIR) -L$(SRT_PUBLIC_CONTEXT)/lib/$(SRT_SUBDIR) -l$(PACKAGE)


########################################################################
include SoftRelTools/standard.mk
include SoftRelTools/arch_spec_nutools.mk
include SoftRelTools/arch_spec_nugen.mk
include SoftRelTools/arch_spec_art.mk
include SoftRelTools/arch_spec_root.mk
include SoftRelTools/arch_spec_genie.mk
include SoftRelTools/arch_spec_novadaq.mk

override LIBLIBS += $(LOADLIBES) -lart_root_io_TFileService_service -L$(SRT_PRIVATE_CONTEXT)/lib/$(SRT_SUBDIR) -L$(SRT_PUBLIC_CONTEXT)/lib/$(SRT_SUBDIR) -L$(NUTOOLS_LIB) -lCMap -lCMap_service -lnusimdata_SimulationBase -lRecoBase -lRecoBaseHit -lGeometry -lGeometry_service -lGeometryObjects -L$(NUGEN_LIB) -lnugen_EventGeneratorBase_GENIE -lnusimdata_SimulationBase -lnugen_NuReweight_art -lRawData -lStandardRecord
