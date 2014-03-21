################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Vectors/vector_el_div.c \
../Vectors/vector_el_mult.c \
../Vectors/vector_el_sub.c \
../Vectors/vector_el_sum.c \
../Vectors/vector_num_div.c \
../Vectors/vector_num_mult.c \
../Vectors/vector_num_sub.c \
../Vectors/vector_num_sum.c \
../Vectors/vector_reverse.c \
../Vectors/vector_square_power.c \
../Vectors/vector_vector_div.c \
../Vectors/vector_vector_inner.c \
../Vectors/vector_vector_mult.c \
../Vectors/vector_vector_sub.c \
../Vectors/vector_vector_sum.c 

OBJS += \
./Vectors/vector_el_div.o \
./Vectors/vector_el_mult.o \
./Vectors/vector_el_sub.o \
./Vectors/vector_el_sum.o \
./Vectors/vector_num_div.o \
./Vectors/vector_num_mult.o \
./Vectors/vector_num_sub.o \
./Vectors/vector_num_sum.o \
./Vectors/vector_reverse.o \
./Vectors/vector_square_power.o \
./Vectors/vector_vector_div.o \
./Vectors/vector_vector_inner.o \
./Vectors/vector_vector_mult.o \
./Vectors/vector_vector_sub.o \
./Vectors/vector_vector_sum.o 

C_DEPS += \
./Vectors/vector_el_div.d \
./Vectors/vector_el_mult.d \
./Vectors/vector_el_sub.d \
./Vectors/vector_el_sum.d \
./Vectors/vector_num_div.d \
./Vectors/vector_num_mult.d \
./Vectors/vector_num_sub.d \
./Vectors/vector_num_sum.d \
./Vectors/vector_reverse.d \
./Vectors/vector_square_power.d \
./Vectors/vector_vector_div.d \
./Vectors/vector_vector_inner.d \
./Vectors/vector_vector_mult.d \
./Vectors/vector_vector_sub.d \
./Vectors/vector_vector_sum.d 


# Each subdirectory must supply rules for building sources it contributes
Vectors/%.o: ../Vectors/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


