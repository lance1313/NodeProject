################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/model/ArrayNode.cpp \
../src/model/CTECArray.cpp \
../src/model/Node.cpp 

OBJS += \
./src/model/ArrayNode.o \
./src/model/CTECArray.o \
./src/model/Node.o 

CPP_DEPS += \
./src/model/ArrayNode.d \
./src/model/CTECArray.d \
./src/model/Node.d 


# Each subdirectory must supply rules for building sources it contributes
src/model/%.o: ../src/model/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


