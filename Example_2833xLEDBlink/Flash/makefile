################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccsv6/tools/compiler/c2000_15.12.2.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"../F28335.cmd" \
"C:/ti/controlSUITE/device_support/f2833x/v141/DSP2833x_headers/cmd/DSP2833x_Headers_nonBIOS.cmd" \
"./DSP2833x_ADC_cal.obj" \
"./DSP2833x_CodeStartBranch.obj" \
"./DSP2833x_CpuTimers.obj" \
"./DSP2833x_DefaultIsr.obj" \
"./DSP2833x_GlobalVariableDefs.obj" \
"./DSP2833x_Gpio.obj" \
"./DSP2833x_MemCopy.obj" \
"./DSP2833x_PieCtrl.obj" \
"./DSP2833x_PieVect.obj" \
"./DSP2833x_SysCtrl.obj" \
"./DSP2833x_usDelay.obj" \
"./Example_2833xLEDBlink.obj" \
$(GEN_CMDS__FLAG) \
-lrts2800_fpu32.lib \
-lIQmath_fpu32.lib \
-lrts2800_fpu32_fast_supplement.lib \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
Example_2833xLEDBlink.out \

EXE_OUTPUTS__QUOTED += \
"Example_2833xLEDBlink.out" \

BIN_OUTPUTS += \
Example_2833xLEDBlink.hex \

BIN_OUTPUTS__QUOTED += \
"Example_2833xLEDBlink.hex" \


# All Target
all: Example_2833xLEDBlink.out

# Tool invocations
Example_2833xLEDBlink.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: C2000 Linker'
	"C:/ti/ccsv6/tools/compiler/c2000_15.12.2.LTS/bin/cl2000" -v28 -ml -mt --float_support=fpu32 -g --define="_DEBUG" --define="LARGE_MODEL" --define=FLASH=1 --define=DEBUG=1 --quiet --issue_remarks --verbose_diagnostics --diag_warning=225 --diag_suppress=10063 --output_all_syms --cdebug_asm_data -z -m"Example_2833xLEDBlink.map" --stack_size=0x200 --warn_sections -i"C:/ti/ccsv6/tools/compiler/c2000_15.12.2.LTS/lib" -i"C:/ti/ccsv6/tools/compiler/c2000_15.12.2.LTS/include" -i"J:/Dropbox/Dropbox/SourceTree/dsp-inv-inep/Example_2833xLEDBlink" -i"C:/ti/controlSUITE/device_support/f2833x/v141/DSP2833x_common/lib" -i"C:/ti/controlSUITE/libs/math/IQmath/v15c/lib" -i"C:/ti/controlSUITE/libs/math/FPUfastRTS/V100/lib" --reread_libs --priority --issue_remarks --verbose_diagnostics --xml_link_info="Example_2833xLEDBlink_linkInfo.xml" --entry_point=code_start --rom_model -o "Example_2833xLEDBlink.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

Example_2833xLEDBlink.hex: $(EXE_OUTPUTS)
	@echo 'Invoking: C2000 Hex Utility'
	"C:/ti/ccsv6/tools/compiler/c2000_15.12.2.LTS/bin/hex2000"  -o "Example_2833xLEDBlink.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)$(BIN_OUTPUTS__QUOTED)
	-$(RM) "DSP2833x_CpuTimers.d" "DSP2833x_DefaultIsr.d" "DSP2833x_GlobalVariableDefs.d" "DSP2833x_Gpio.d" "DSP2833x_MemCopy.d" "DSP2833x_PieCtrl.d" "DSP2833x_PieVect.d" "DSP2833x_SysCtrl.d" "Example_2833xLEDBlink.d" 
	-$(RM) "DSP2833x_ADC_cal.obj" "DSP2833x_CodeStartBranch.obj" "DSP2833x_CpuTimers.obj" "DSP2833x_DefaultIsr.obj" "DSP2833x_GlobalVariableDefs.obj" "DSP2833x_Gpio.obj" "DSP2833x_MemCopy.obj" "DSP2833x_PieCtrl.obj" "DSP2833x_PieVect.obj" "DSP2833x_SysCtrl.obj" "DSP2833x_usDelay.obj" "Example_2833xLEDBlink.obj" 
	-$(RM) "DSP2833x_ADC_cal.d" "DSP2833x_CodeStartBranch.d" "DSP2833x_usDelay.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

