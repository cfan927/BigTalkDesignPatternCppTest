cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-21-Singleton)

include_directories(${PROJECT_SOURCE_DIR}/internal)
include_directories(${PROJECT_SOURCE_DIR}/internal/Interface)

set(Srcs
	main.cpp
	
	internal/Singleton.cpp
)

set(Hdrs
	internal/Singleton.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
