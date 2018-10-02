cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-10-TemplateMethod)

include_directories(${PROJECT_SOURCE_DIR}/internal)

set(Srcs
	main.cpp
	
	internal/AbstractClass.cpp
	internal/ConcreteClassA.cpp
	internal/ConcreteClassB.cpp
)

set(Hdrs
	internal/AbstractClass.h
	internal/ConcreteClassA.h
	internal/ConcreteClassB.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
