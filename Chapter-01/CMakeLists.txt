cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-01-SimpleFactory)

set(Srcs
	main.cpp
	
	internal/Operation.cpp
	internal/OperationAdd.cpp
	internal/OperationSub.cpp
	internal/OperationMul.cpp
	internal/OperationDiv.cpp
	internal/OperationFactory.cpp
)

set(Hdrs
	internal/Operation.h
	internal/OperationAdd.h
	internal/OperationSub.h
	internal/OperationMul.h
	internal/OperationDiv.h
	internal/OperationFactory.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
