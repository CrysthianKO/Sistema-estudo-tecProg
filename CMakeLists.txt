cmake_minimum_required(VERSION 3.10)

project(ProjetoTecProg VERSION 1.0)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(include/)

set(SOURCES
  src/main.cpp
  src/principal.cpp
)


add_executable(${PROJECT_NAME} ${SOURCES})
