cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-02-Strategy)

set(Srcs
	main.cpp
	
	internal/Strategy.cpp
	internal/Context.cpp
	internal/ConcreteStrategyA.cpp
	internal/ConcreteStrategyB.cpp
	internal/ConcreteStrategyC.cpp
)

set(Hdrs
	internal/Strategy.h
	internal/Context.h
	internal/ConcreteStrategyA.h
	internal/ConcreteStrategyB.h
	internal/ConcreteStrategyC.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
