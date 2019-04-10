cmake_minimum_required (VERSION 3.0)

project (String-Art)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_SOURCE_DIR}/3rd-Party)

find_package( OpenCV REQUIRED )

set(PROJECT_SOURCE_DIR src)

add_executable(String-Art ${PROJECT_SOURCE_DIR}/test.cpp)

target_link_libraries( String-Art ${OpenCV_LIBS} )
