################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Combinatory/bynomial_factor.c \
../Combinatory/combination_rep.c \
../Combinatory/combination_simple.c \
../Combinatory/disposition_rep.c \
../Combinatory/disposition_simple.c \
../Combinatory/permutation_rep.c \
../Combinatory/permutation_simple.c 

OBJS += \
./Combinatory/bynomial_factor.o \
./Combinatory/combination_rep.o \
./Combinatory/combination_simple.o \
./Combinatory/disposition_rep.o \
./Combinatory/disposition_simple.o \
./Combinatory/permutation_rep.o \
./Combinatory/permutation_simple.o 

C_DEPS += \
./Combinatory/bynomial_factor.d \
./Combinatory/combination_rep.d \
./Combinatory/combination_simple.d \
./Combinatory/disposition_rep.d \
./Combinatory/disposition_simple.d \
./Combinatory/permutation_rep.d \
./Combinatory/permutation_simple.d 


# Each subdirectory must supply rules for building sources it contributes
Combinatory/%.o: ../Combinatory/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


