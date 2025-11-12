cmake_minimum_required(VERSION 3.20)
project(MyProject LANGUAGES CXX)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build/${CMAKE_BUILD_TYPE}/bin)

find_package(Qt5 CONFIG REQUIRED COMPONENTS Core Widgets)
add_executable(main main.cpp)
target_compile_features(main PRIVATE cxx_std_23)

target_link_libraries(main PRIVATE 
    Qt5::Core
    Qt5::Widgets
)