cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-13-Builder)

include_directories(${PROJECT_SOURCE_DIR}/internal)

set(Srcs
	main.cpp
	
	internal/Product.cpp
	internal/Builder.cpp
	internal/ConcreteBuilder1.cpp
	internal/ConcreteBuilder2.cpp
	internal/Director.cpp
)

set(Hdrs
	internal/Product.h
	internal/Builder.h
	internal/ConcreteBuilder1.h
	internal/ConcreteBuilder2.h
	internal/Director.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
