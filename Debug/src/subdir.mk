################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Customer.cpp \
../src/LinkedList.cpp \
../src/Queue.cpp \
../src/main.cpp 

OBJS += \
./src/Customer.o \
./src/LinkedList.o \
./src/Queue.o \
./src/main.o 

CPP_DEPS += \
./src/Customer.d \
./src/LinkedList.d \
./src/Queue.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


