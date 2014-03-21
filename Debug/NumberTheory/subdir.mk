################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../NumberTheory/factorial.c \
../NumberTheory/perfect.c \
../NumberTheory/prime.c 

OBJS += \
./NumberTheory/factorial.o \
./NumberTheory/perfect.o \
./NumberTheory/prime.o 

C_DEPS += \
./NumberTheory/factorial.d \
./NumberTheory/perfect.d \
./NumberTheory/prime.d 


# Each subdirectory must supply rules for building sources it contributes
NumberTheory/%.o: ../NumberTheory/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


