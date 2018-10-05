cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-22-CARP)

include_directories(${PROJECT_SOURCE_DIR}/internal)
include_directories(${PROJECT_SOURCE_DIR}/internal/Interface)

set(Srcs
	main.cpp
	
	internal/Interface/HandsetBrand.cpp
	
	internal/HandsetGame.cpp
	internal/HandsetAddressList.cpp
	internal/HandsetBrandN.cpp
	internal/HandsetBrandM.cpp
)

set(Hdrs
	internal/Interface/HandsetSoft.h
	internal/Interface/HandsetBrand.h
	
	internal/HandsetGame.h
	internal/HandsetAddressList.h
	internal/HandsetBrandN.h
	internal/HandsetBrandM.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
