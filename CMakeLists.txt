cmake_minimum_required(VERSION 3.1.0)

set(TARGET_NAME CPP_Klausur_GERTH)

project(${TARGET_NAME})

#
# set cmake settings
#
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)


#
# add source files to target
#
add_executable(${TARGET_NAME}
	main.cc
	src/BasicTicket.cc
	src/TicketManager.cc
	src/Festival.cc
	src/Konzert.cc
	src/Teamevent.cc
	src/Sonstige.cc
)