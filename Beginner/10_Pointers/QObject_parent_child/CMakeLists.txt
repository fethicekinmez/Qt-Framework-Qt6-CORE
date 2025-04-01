cmake_minimum_required(VERSION 3.16)

project(QObject_parent_child LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(QObject_parent_child
  main.cpp
  animal.h animal.cpp
  person.h person.cpp
)
target_link_libraries(QObject_parent_child Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS QObject_parent_child
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
