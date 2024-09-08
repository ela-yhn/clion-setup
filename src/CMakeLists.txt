add_library(factorial STATIC factorial.cpp)

add_executable(main main.cpp factorial.cpp)
target_link_libraries(main PRIVATE factorial)