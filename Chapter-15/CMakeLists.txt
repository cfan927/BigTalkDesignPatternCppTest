cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-15-AbstractFactory)

include_directories(${PROJECT_SOURCE_DIR}/internal)

set(Srcs
	main.cpp
	
	internal/Department.cpp
	internal/IDepartment.cpp
	internal/SqlserverDepartment.cpp
	internal/AccessDepartment.cpp
	internal/IFactory.cpp
	internal/SqlServerFactory.cpp
	internal/AccessFactory.cpp
	internal/User.cpp
	internal/IUser.cpp
	internal/SqlserverUser.cpp
	internal/AccessUser.cpp
)

set(Hdrs
	internal/Department.h
	internal/IDepartment.h
	internal/SqlserverDepartment.h
	internal/AccessDepartment.h
	internal/IFactory.h
	internal/SqlServerFactory.h
	internal/AccessFactory.h
	internal/User.h
	internal/IUser.h
	internal/SqlserverUser.h
	internal/AccessUser.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
