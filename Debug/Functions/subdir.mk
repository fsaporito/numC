################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Functions/absolute.c \
../Functions/expon.c \
../Functions/sqroot.c 

OBJS += \
./Functions/absolute.o \
./Functions/expon.o \
./Functions/sqroot.o 

C_DEPS += \
./Functions/absolute.d \
./Functions/expon.d \
./Functions/sqroot.d 


# Each subdirectory must supply rules for building sources it contributes
Functions/%.o: ../Functions/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


