################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1250/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 -Ooff --include_path="C:/Users/smerritt2019/Desktop/TI EV/epwm_ex11_configure_signal" --include_path="C:/Users/smerritt2019/Desktop/TI EV/epwm_ex11_configure_signal/device" --include_path="C:/ti/c2000/C2000Ware_5_00_00_00/driverlib/f2837xd/driverlib" --include_path="C:/ti/ccs1250/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" --define=DEBUG --define=CPU1 --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" --include_path="C:/Users/smerritt2019/Desktop/TI EV/epwm_ex11_configure_signal/CPU1_RAM/syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-33041247: ../epwm_ex11_configure_signal.syscfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: SysConfig'
	"C:/ti/ccs1250/ccs/utils/sysconfig_1.18.0/sysconfig_cli.bat" -s "C:/ti/c2000/C2000Ware_5_00_00_00/.metadata/sdk.json" -d "F2837xD" --script "C:/Users/smerritt2019/Desktop/TI EV/epwm_ex11_configure_signal/epwm_ex11_configure_signal.syscfg" -o "syscfg" --package F2837xD_176PTP --part F2837xD_176PTP --compiler ccs
	@echo 'Finished building: "$<"'
	@echo ' '

syscfg/board.c: build-33041247 ../epwm_ex11_configure_signal.syscfg
syscfg/board.h: build-33041247
syscfg/board.cmd.genlibs: build-33041247
syscfg/board.opt: build-33041247
syscfg/pinmux.csv: build-33041247
syscfg/epwm.dot: build-33041247
syscfg/c2000ware_libraries.cmd.genlibs: build-33041247
syscfg/c2000ware_libraries.opt: build-33041247
syscfg/c2000ware_libraries.c: build-33041247
syscfg/c2000ware_libraries.h: build-33041247
syscfg/clocktree.h: build-33041247
syscfg/: build-33041247

syscfg/%.obj: ./syscfg/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1250/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 -Ooff --include_path="C:/Users/smerritt2019/Desktop/TI EV/epwm_ex11_configure_signal" --include_path="C:/Users/smerritt2019/Desktop/TI EV/epwm_ex11_configure_signal/device" --include_path="C:/ti/c2000/C2000Ware_5_00_00_00/driverlib/f2837xd/driverlib" --include_path="C:/ti/ccs1250/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" --define=DEBUG --define=CPU1 --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --preproc_with_compile --preproc_dependency="syscfg/$(basename $(<F)).d_raw" --include_path="C:/Users/smerritt2019/Desktop/TI EV/epwm_ex11_configure_signal/CPU1_RAM/syscfg" --obj_directory="syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


