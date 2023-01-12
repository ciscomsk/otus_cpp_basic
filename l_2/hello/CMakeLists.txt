cmake_minimum_required(VERSION 3.15)  ## минимальная требуемая версия cmake

project(hello)  ## создание проекта с именем hello

## имя проекта и имя исполняемого файла - не связаны друг с другом и могут отличаться

add_executable(hello hello.cpp)  ## создание исполняемого файла с именем hello с перечислением файлов с исходным кодом

set_target_properties(hello PROPERTIES  ## установка свойств
        CXX_STANDARD 17  ## использовать стандарт C++17
        CXX_STANDARD_REQUIRED ON  ## требовать от компилятора поддержки стандарта
)

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(hello PRIVATE -Wall -Wextra -Werror -pedantic)
    ## Wall - базовые предупреждения
    ## Wextra - дополнительные предупреждения
    ## Werror - трактовать любое предупреждение как ошибку (т.е. проект не соберется)
    ## pedantic - проверка соответствия кода стандарту
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(hello PRIVATE /EHsc /W4 /WX)
endif()