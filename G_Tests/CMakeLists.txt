project(Google_tests)

add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Test_1 ../Task_1/Test_1/Test_1.cpp ../Task_1/Test_1/functions_1.cpp)
target_link_libraries(Test_1 gtest gtest_main)

add_executable(Test_2 ../Task_2/Test_2/Test_2.cpp ../Task_2/Test_2/functions_2.cpp)
target_link_libraries(Test_2 gtest gtest_main)

add_executable(Test_3 ../Task_3/Test_3/Test_3.cpp ../Task_3/Test_3/functions_3.cpp)
target_link_libraries(Test_3 gtest gtest_main)