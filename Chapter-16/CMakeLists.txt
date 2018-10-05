cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-16-State)

include_directories(${PROJECT_SOURCE_DIR}/internal)

set(Srcs
	main.cpp
	
	internal/State.cpp
	internal/ForenoonState.cpp
	internal/NoonState.cpp
	internal/AfternoonState.cpp
	internal/EveningState.cpp
	internal/SleepingState.cpp
	internal/RestState.cpp
	internal/Work.cpp
)

set(Hdrs
	internal/State.h
	internal/ForenoonState.h
	internal/NoonState.h
	internal/AfternoonState.h
	internal/EveningState.h
	internal/SleepingState.h
	internal/RestState.h
	internal/Work.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
