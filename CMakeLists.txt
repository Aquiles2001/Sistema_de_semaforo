# Versión mínima de CMake requerida
cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(SISTEMA_DE_SEMAFOROS C)

# Crea una carpeta llamada bin
file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Los binarios se compilan en la carpeta bin
set(CMAKE_BINARY_DIR ${CMAKE_BINARY_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})

# opciones de compilación
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -pedantic -Werror -Wextra -Wconversion -std=gnu11 -g")

# Compilar los programas
add_executable(sistema_de_semaforo ${CMAKE_CURRENT_SOURCE_DIR}/src/main.c ${CMAKE_CURRENT_SOURCE_DIR}/src/semaforo.c)

# Agregar los encabezados a los programas
target_include_directories(sistema_de_semaforo PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)