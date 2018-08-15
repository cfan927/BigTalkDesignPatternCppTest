cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(TranslatorAdapter)

set(Srcs
	main.cpp
	
	Player.cpp
	Forwards.cpp
	Center.cpp
	Guards.cpp
	ForeignCenter.cpp
	Translator.cpp
)

set(Hdrs
	Player.h
	Forwards.h
	Center.h
	Guards.h
	ForeignCenter.h
	Translator.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
