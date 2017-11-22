cmake_minimum_required(VERSION 3.8)
project(ProjectUI)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        ProjectUI/main.cpp
        ProjectUI/mainPage.cpp
        ProjectUI/mainPage.h
        ProjectUI/quitScreen.cpp
        ProjectUI/quitScreen.h
        ProjectUI/stuffAndThings.cpp
        ProjectUI/stuffAndThings.h)

add_executable(ProjectUI ${SOURCE_FILES})