cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-19-Composite)

include_directories(${PROJECT_SOURCE_DIR}/internal)

set(Srcs
	main.cpp
	
	internal/Component.cpp
	internal/Leaf.cpp
	internal/Composite.cpp
)

set(Hdrs
	internal/Component.h
	internal/Leaf.h
	internal/Composite.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
