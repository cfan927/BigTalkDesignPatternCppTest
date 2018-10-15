cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-26-Flyweight)

include_directories(${PROJECT_SOURCE_DIR}/internal)
include_directories(${PROJECT_SOURCE_DIR}/internal/Interface)

set(Srcs
	main.cpp
	
	internal/ConcreteFlyweight.cpp
	internal/UnsharedConcreteFlyweight.cpp
	internal/FlyweightFactory.cpp
)

set(Hdrs
	internal/Interface/Flyweight.h
	
	internal/ConcreteFlyweight.h
	internal/UnsharedConcreteFlyweight.h
	internal/FlyweightFactory.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
