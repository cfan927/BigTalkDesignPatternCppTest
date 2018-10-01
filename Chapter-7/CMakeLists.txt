cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-7-Proxy)

include_directories(${PROJECT_SOURCE_DIR}/internal)

set(Srcs
	main.cpp
	
	internal/IGiveGift.cpp
	internal/Pursuit.cpp
	internal/Proxy.cpp
	internal/SchoolGirl.cpp
)

set(Hdrs
	internal/IGiveGift.h
	internal/Pursuit.h
	internal/Proxy.h
	internal/SchoolGirl.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
