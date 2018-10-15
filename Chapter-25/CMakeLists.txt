cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-25-Mediator)

include_directories(${PROJECT_SOURCE_DIR}/internal)
include_directories(${PROJECT_SOURCE_DIR}/internal/Interface)

set(Srcs
	main.cpp
	
	internal/Interface/Colleague.cpp
	
	internal/ConcreteMediator.cpp
	internal/ConcreteColleague1.cpp
	internal/ConcreteColleague2.cpp
)

set(Hdrs
	internal/Interface/Mediator.h
	internal/Interface/Colleague.h
	
	internal/ConcreteMediator.h
	internal/ConcreteColleague1.h
	internal/ConcreteColleague2.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
