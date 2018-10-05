cmake_minimum_required(VERSION 3.3 FATAL_ERROR)

project(Chapter-06-Decorator)

include_directories(${PROJECT_SOURCE_DIR}/internal)

set(Srcs
	main.cpp
	
	internal/Person.cpp
	internal/Finery.cpp
	internal/TShirts.cpp
	internal/BigTrouser.cpp
	internal/Sneakers.cpp
	internal/LeatherShoes.cpp
	internal/Tie.cpp
	internal/Suit.cpp
)

set(Hdrs
	internal/Person.h
	internal/Finery.h
	internal/TShirts.h
	internal/BigTrouser.h
	internal/Sneakers.h
	internal/LeatherShoes.h
	internal/Tie.h
	internal/Suit.h
)

add_executable(${PROJECT_NAME} ${Srcs} ${Hdrs})
