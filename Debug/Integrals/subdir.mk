################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Integrals/integ_cav_simpson.c \
../Integrals/integ_rect.c \
../Integrals/integ_trap.c 

OBJS += \
./Integrals/integ_cav_simpson.o \
./Integrals/integ_rect.o \
./Integrals/integ_trap.o 

C_DEPS += \
./Integrals/integ_cav_simpson.d \
./Integrals/integ_rect.d \
./Integrals/integ_trap.d 


# Each subdirectory must supply rules for building sources it contributes
Integrals/%.o: ../Integrals/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


