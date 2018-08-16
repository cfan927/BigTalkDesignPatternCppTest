cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-17-Adapter)

set(Srcs
	main.cpp
	
	Target.cpp
	Adaptee.cpp
	Adapter.cpp
)

set(Hdrs
	Target.h
	Adaptee.h
	Adapter.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
