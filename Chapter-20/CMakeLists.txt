cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-20-Iterator)

include_directories(${PROJECT_SOURCE_DIR}/internal)
include_directories(${PROJECT_SOURCE_DIR}/internal/Interface)

set(Srcs
	main.cpp
	
	internal/ConcreteIterator.cpp
	internal/ConcreteAggregate.cpp
)

set(Hdrs
	internal/Interface/Iterator.h
	internal/Interface/Aggregate.h
	
	internal/ConcreteIterator.h
	internal/ConcreteAggregate.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
