###############################################################################
# File Name  : Eep_XXi2c01_cfg.mak                                            #
# Description: Autosar makefile Template                                      #
#              This makefile is a template to implement the common            #
#              features of each project.                                      #
#              It is included by the Global.Makefile.target.make.$(Version)   #
#              and is supported from version 3.24.                            #
#                                                                             #
# This Template is based on AUTOSAR_BSW_MakefileInterface.doc version 0.4     #
#                                                                             #
#-----------------------------------------------------------------------------#
#               C O P Y R I G H T                                             #
#-----------------------------------------------------------------------------#
# Copyright (c) by Vector Informatik GmbH. All rights reserved.               #
#                                                                             #
###############################################################################

###############################################################
# Use <Feature>
#
# Possible Values:
# 0 - No <Feature> used
# 1 - <Feature> used
###############################################################
#e.g.:
#EEP_30_XXI2C01_USE_<FEATURE> =


###############################################################
# CAN_CONFIG_PATH: (not used for Vector)
# The Variable CAN_CONFIG_PATH is optional. It allows the
# configuration of the directory, where you can also find the
# generated source files. Generally they should be in the
# directory $(PROJECT_ROOT)\source\networks.
# But if the application should run on several hardware
# targets, then different CAN configurations of different
# directories will be necessary. Therefor the variable
# CAN_CONFIG_PATH should be used.
#
# For example:
# CAN_CONFIG_PATH = $(PROJECT_ROOT)\source\network\v850
# CAN_CONFIG_PATH = $(PROJECT_ROOT)\source\network\st10
# CAN_CONFIG_PATH = $(PROJECT_ROOT)\source\network\v850
#

#EEP_30_XXI2C01_CONFIG_PATH =


###############################################################
# CAN_DRIVER_MODE:  (not used for Vector)
# This Variable contains the name of the can driver module. At
# the moment the Standard Software Core Supports the two driver
# can_drv.c (single CAN) and can_drvm.c (multi CAN). Other
# values are not allowed.
#
# For example:
# CAN_DRIVER_MODE = singlechannel/multichannel
#

#EEP_30_XXI2C01_DRIVER_MODE =


###############################################################
# REQUIRED
#
# No Other resources are required to write a Configuration
# Makefile.
#
###############################################################


###############################################################
# PROVIDE
#
# A Configuration Makefile does not provide resources for other
# basic software bundles or the base_make package
#
###############################################################


###############################################################
# REGISTRY
#
# Like the Provide-Section this block is empty.
#
###############################################################


###############################################################
# SPECIFIC
#
# All variables in the _cfg makefile are "Specific" variables,
# because they should only be used in the *_check.mak,
# *_defs.mak and *_rules.mak Makefiles of the same basic
# software bundle.
###############################################################
