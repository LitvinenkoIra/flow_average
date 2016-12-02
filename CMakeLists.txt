project(test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++14")

cmake_minimum_required(VERSION 2.8)

INCLUDE_DIRECTORIES (
    limo
)

set (SRC
    flowavg.cpp
)
add_library(flowavg ${SRC})
add_executable(FlowAvg main.cpp)
add_executable(tests tests.cpp)
target_link_libraries(FlowAvg flowavg)
target_link_libraries(tests flowavg)



