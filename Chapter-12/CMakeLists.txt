cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-12-Facade)

include_directories(${PROJECT_SOURCE_DIR}/internal)

set(Srcs
	main.cpp
	
	internal/Facade.cpp
	internal/SubSystemOne.cpp
	internal/SubSystemTwo.cpp
	internal/SubSystemThree.cpp
	internal/SubSystemFour.cpp
)

set(Hdrs
	internal/Facade.h
	internal/SubSystemOne.h
	internal/SubSystemTwo.h
	internal/SubSystemThree.h
	internal/SubSystemFour.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
