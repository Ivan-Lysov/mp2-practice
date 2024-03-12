cmake_minimum_required(VERSION 3.7)

set(PROJECT_NAME polynom)
project(${PROJECT_NAME})

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE})

set(MP2_LIBRARY_LISTS "${PROJECT_NAME}_lists")
set(MP2_LIBRARY_POLYNOMS "${PROJECT_NAME}_polynoms")
set(MP2_TESTS   "tests_${PROJECT_NAME}")
set(MP2_INCLUDE_LISTS "${CMAKE_CURRENT_SOURCE_DIR}/lib_tlist/include")
set(MP2_INCLUDE_POLYNOMS "${CMAKE_CURRENT_SOURCE_DIR}/lib_tpolynom/include")


# BUILD
add_subdirectory(samples)
add_subdirectory(gtest)
add_subdirectory(tests)
add_subdirectory(lib_tlist/src)
add_subdirectory(lib_tpolynom/src)

# REPORT
message( STATUS "" )
message( STATUS "General configuration for ${PROJECT_NAME}" )
message( STATUS "======================================" )
message( STATUS "" )
message( STATUS "   Configuration:        ${CMAKE_BUILD_TYPE}" )
message( STATUS "   MP2_LIBRARY_LISTS:    ${MP2_LIBRARY_LISTS}" )
message( STATUS "   MP2_LIBRARY_POLYNOMS: ${MP2_LIBRARY_POLYNOMS}" )
message( STATUS "   MP2_TESTS:            ${MP2_TESTS}" )
message( STATUS "   MP2_INCLUDE_LISTS:    ${MP2_INCLUDE_LISTS}" )
message( STATUS "   MP2_INCLUDE_POLYNOMS: ${MP2_INCLUDE_POLYNOMS}" )
message( STATUS "======================================" )
message( STATUS "" )
