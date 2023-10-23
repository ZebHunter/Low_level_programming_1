cmake_minimum_required(VERSION 3.26)
project(llp1 C)

set(CMAKE_C_STANDARD 11)

add_executable(llp1 main.c
        ../include/types.h
        ../include/query.h
        "schema_manager/types.c"
        ../include/schema.h
        ../include/page.h
        ../include/document.h

)
