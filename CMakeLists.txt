cmake_minimum_required(VERSION 3.16)
project(adopt-me-autofarm CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(adoptmeautofarm
    src/main.cpp
    src/care.cpp
    src/quests.cpp
    src/money.cpp
    src/cli.cpp
    src/utils.cpp
)

target_include_directories(adoptmeautofarm PRIVATE include)

if(WIN32)
    target_link_libraries(adoptmeautofarm PRIVATE userenv)
endif()
