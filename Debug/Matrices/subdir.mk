################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Matrices/determinant.c \
../Matrices/matrix_print.c \
../Matrices/submatrix.c 

OBJS += \
./Matrices/determinant.o \
./Matrices/matrix_print.o \
./Matrices/submatrix.o 

C_DEPS += \
./Matrices/determinant.d \
./Matrices/matrix_print.d \
./Matrices/submatrix.d 


# Each subdirectory must supply rules for building sources it contributes
Matrices/%.o: ../Matrices/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


