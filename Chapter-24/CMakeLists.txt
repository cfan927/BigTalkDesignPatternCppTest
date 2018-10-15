cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-24-ChainOfResponsibility)

include_directories(${PROJECT_SOURCE_DIR}/internal)
include_directories(${PROJECT_SOURCE_DIR}/internal/Interface)

set(Srcs
	main.cpp
	
	internal/Interface/Handler.cpp
	
	internal/ConcreteHandler1.cpp
	internal/ConcreteHandler2.cpp
	internal/ConcreteHandler3.cpp
)

set(Hdrs
	internal/Interface/Handler.h
	
	internal/ConcreteHandler1.h
	internal/ConcreteHandler2.h
	internal/ConcreteHandler3.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
