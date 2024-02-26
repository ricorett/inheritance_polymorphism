cmake_minimum_required(VERSION 3.22)
project(Figure)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
set(SOURCES
        eq_triangle.cpp
        isos_triangle.cpp
        parallelogramm.cpp
        rectangle.cpp
        rhombus.cpp
        right_triangle.cpp
        square.cpp
        triangle.cpp

)

set(HEADERS
        eq_triangle.h
        figure02.h
        isos_triangle.h
        parallelogramm.h
        rectangle.h
        rhombus.h
        right_triangle.h
        square.h
        triangle.h
)

add_library(FigureLib SHARED ${SOURCES} ${HEADERS})
add_executable(FigureExe main.cpp)
target_link_libraries(FigureLib FigureExe)