cmake_minimum_required(VERSION 3.16)
project(biblioteca)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")

set(SRC
    src/biblioteca.cpp
    src/usuario.cpp
    src/emprestimo.cpp
    src/item.cpp
    src/livro.cpp
    src/revista.cpp
    src/dvd.cpp
    main.cpp)

add_executable(biblioteca ${SRC})
target_include_directories(biblioteca PUBLIC include)
