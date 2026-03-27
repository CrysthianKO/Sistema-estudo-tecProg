cmake_minimum_required(VERSION 3.10)

project(ProjetoTecProg VERSION 1.0)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SOURCES
  src/main.cpp
  src/principal.cpp
  src/pessoa.cpp
  src/universidade.cpp
  src/departamento.cpp
  src/professor.cpp
  src/aluno.cpp
  src/disciplina.cpp
)


add_executable(${PROJECT_NAME} ${SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE include/)
