cmake_minimum_required(VERSION 3.16)

project(Reading_Large_Files LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(Reading_Large_Files
  main.cpp
)
target_link_libraries(Reading_Large_Files Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS Reading_Large_Files
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
