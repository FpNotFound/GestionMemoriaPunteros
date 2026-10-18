cmake_minimum_required(VERSION 3.20)
project(Ejercicio1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ListaDeObjetos.cpp NO se lista porque se incluye desde el .h
add_executable(Ejercicio1 main.cpp)