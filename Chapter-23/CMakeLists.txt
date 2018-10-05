cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-23-Command)

include_directories(${PROJECT_SOURCE_DIR}/internal)
include_directories(${PROJECT_SOURCE_DIR}/internal/Interface)

set(Srcs
	main.cpp
	
	internal/Interface/Command.cpp
	
	internal/ConcreteCommand.cpp
	internal/Invoker.cpp
	internal/Receiver.cpp
)

set(Hdrs
	internal/Interface/Command.h
	
	internal/ConcreteCommand.h
	internal/Invoker.h
	internal/Receiver.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
