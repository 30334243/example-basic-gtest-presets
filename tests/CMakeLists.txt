find_package(GTest REQUIRED)

# Добавляем тесты
add_executable(${PROJECT_NAME}_test test_my_math.cpp)
target_link_libraries(${PROJECT_NAME}_test ${PROJECT_NAME}_lib GTest::gtest GTest::gtest_main)

# Регистрируем тесты
add_test(NAME ${PROJECT_NAME}_test COMMAND ${PROJECT_NAME}_test)
gtest_discover_tests(${PROJECT_NAME}_test)