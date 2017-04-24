# Authors: hauptmech <hauptmech@gmail.com>, Nov 2013

    SET(EXECUTABLE_NAME "eigen_initializer_list")  #<-------Change!


    PROJECT(${EXECUTABLE_NAME})
    cmake_minimum_required(VERSION 2.8)

    set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)


	# ./src holds our code and private *.h files
    include_directories(${CMAKE_SOURCE_DIR}/src)

	find_package(PkgConfig)
	pkg_check_modules(EIGEN3 eigen3)

    INCLUDE_DIRECTORIES(${EIGEN3_INCLUDE_DIRS})

    #Add source files here
    set( LIBRARY1_SOURCES
        src/eigen_initializer_list_demo.cpp      #<---- Change me!
    )

    add_definitions(-std=c++11 -DEIGEN_MATRIX_PLUGIN="Matrix_initializer_list.h" -DEIGEN_ARRAY_PLUGIN="Array_initializer_list.h")

    add_executable(${EXECUTABLE_NAME} ${LIBRARY1_SOURCES} )



