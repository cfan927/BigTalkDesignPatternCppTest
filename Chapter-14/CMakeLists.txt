cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-14-Observer)

include_directories(${PROJECT_SOURCE_DIR}/internal)

set(Srcs
	main.cpp
	
	internal/Subject.cpp
	internal/Observer.cpp
	internal/ConcreteSubject.cpp
	internal/ConcreteObserver.cpp
)

set(Hdrs
	internal/Subject.h
	internal/Observer.h
	internal/ConcreteSubject.h
	internal/ConcreteObserver.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
