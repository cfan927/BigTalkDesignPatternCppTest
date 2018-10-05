cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-18-Memento)

include_directories(${PROJECT_SOURCE_DIR}/internal)

set(Srcs
	main.cpp
	
	internal/Originator.cpp
	internal/Memento.cpp
	internal/Caretaker.cpp
)

set(Hdrs
	internal/Originator.h
	internal/Memento.h
	internal/Caretaker.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
