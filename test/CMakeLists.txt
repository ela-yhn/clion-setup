add_executable(test TestMain.cpp UnitTest.cpp)
target_link_libraries(test PRIVATE factorial)

target_include_directories(test PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/catch2)
