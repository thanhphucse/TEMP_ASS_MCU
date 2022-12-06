################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/button.c \
../Core/Src/control_7SEG.c \
../Core/Src/fsm_7SEG_horizontal.c \
../Core/Src/fsm_7SEG_vertical.c \
../Core/Src/fsm_mannual.c \
../Core/Src/fsm_system.c \
../Core/Src/fsm_traffic_blink.c \
../Core/Src/fsm_traffic_horizontal.c \
../Core/Src/fsm_traffic_vertical.c \
../Core/Src/global.c \
../Core/Src/main.c \
../Core/Src/software_timer.c \
../Core/Src/stm32f1xx_hal_msp.c \
../Core/Src/stm32f1xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f1xx.c \
../Core/Src/traffic.c \
../Core/Src/traffic_buffer.c 

OBJS += \
./Core/Src/button.o \
./Core/Src/control_7SEG.o \
./Core/Src/fsm_7SEG_horizontal.o \
./Core/Src/fsm_7SEG_vertical.o \
./Core/Src/fsm_mannual.o \
./Core/Src/fsm_system.o \
./Core/Src/fsm_traffic_blink.o \
./Core/Src/fsm_traffic_horizontal.o \
./Core/Src/fsm_traffic_vertical.o \
./Core/Src/global.o \
./Core/Src/main.o \
./Core/Src/software_timer.o \
./Core/Src/stm32f1xx_hal_msp.o \
./Core/Src/stm32f1xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f1xx.o \
./Core/Src/traffic.o \
./Core/Src/traffic_buffer.o 

C_DEPS += \
./Core/Src/button.d \
./Core/Src/control_7SEG.d \
./Core/Src/fsm_7SEG_horizontal.d \
./Core/Src/fsm_7SEG_vertical.d \
./Core/Src/fsm_mannual.d \
./Core/Src/fsm_system.d \
./Core/Src/fsm_traffic_blink.d \
./Core/Src/fsm_traffic_horizontal.d \
./Core/Src/fsm_traffic_vertical.d \
./Core/Src/global.d \
./Core/Src/main.d \
./Core/Src/software_timer.d \
./Core/Src/stm32f1xx_hal_msp.d \
./Core/Src/stm32f1xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f1xx.d \
./Core/Src/traffic.d \
./Core/Src/traffic_buffer.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

