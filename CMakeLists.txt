cmake_minimum_required(VERSION 3.24)
project(Ejercicio_Huespedes_Sara_Jeysa)

include_directories(lib)
include_directories(src)
include_directories(test)

add_subdirectory(lib/googleTest)
add_subdirectory(src)
add_subdirectory(test)

set(CMAKE_CXX_STANDARD 17)

add_executable(Ejercicio_Huespedes_Sara_Jeysa main.cpp src/Propietario.cpp src/Propietario.h src/Huesped.cpp src/Huesped.h src/Hogar.cpp src/Hogar.h src/Evaluacion.cpp src/Evaluacion.h src/Reserva.cpp src/Reserva.h src/main.cpp test/main.cpp src/Huesped.cpp src/Sistema.cpp src/Sistema.h)
