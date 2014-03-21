################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Roots/cords.c \
../Roots/dicotomic.c \
../Roots/newton.c 

OBJS += \
./Roots/cords.o \
./Roots/dicotomic.o \
./Roots/newton.o 

C_DEPS += \
./Roots/cords.d \
./Roots/dicotomic.d \
./Roots/newton.d 


# Each subdirectory must supply rules for building sources it contributes
Roots/%.o: ../Roots/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


