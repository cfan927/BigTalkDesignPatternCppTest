cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-06-Decorator)

include_directories(${PROJECT_SOURCE_DIR}/internal)
include_directories(${PROJECT_SOURCE_DIR}/internal/Interface)

set(Srcs
	main.cpp
	
	internal/ConcreteComponent.cpp
	internal/Decorator.cpp
	internal/ConcreteDecoratorA.cpp
	internal/ConcreteDecoratorB.cpp
)

set(Hdrs
	internal/Interface/Component.h
	
	internal/ConcreteComponent.h
	internal/Decorator.h
	internal/ConcreteDecoratorA.h
	internal/ConcreteDecoratorB.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
