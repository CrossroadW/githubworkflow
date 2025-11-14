cmake_minimum_required(VERSION 3.20)
project(MyProject LANGUAGES CXX)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build/${CMAKE_BUILD_TYPE}/bin)
set(CMAKE_PREFIX_PATH C:/Users/31093/Desktop/archives/boost_1_89_0/)
find_package(Qt5 CONFIG REQUIRED COMPONENTS Core Widgets)
find_package(Boost CONFIG REQUIRED COMPONENTS asio
    system
    endian
    optional
    smart_ptr
    random)
add_executable(main main.cpp)
target_compile_features(main PRIVATE cxx_std_23)

target_link_libraries(main PRIVATE
    Qt5::Core
    Qt5::Widgets
    ${Boost_LIBRARIES}
)