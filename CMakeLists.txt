cmake_minimum_required(VERSION 3.19)
project(MyMathProject)

set(CMAKE_CXX_STANDARD 17)

# Добавляем библиотеку
add_subdirectory(src)
target_include_directories(${PROJECT_NAME}_lib PUBLIC include)

# Добавляем исполняемый файл
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}_lib)

# Добавляем тесты
enable_testing()
add_subdirectory(tests)

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX})

set(CPACK_GENERATOR "ZIP;DEB")
set(CPACK_PACKAGE_VERSION_MAJOR ${PROJECT_VERSION_MAJOR})
set(CPACK_PACKAGE_VERSION_MINOR ${PROJECT_VERSION_MINOR})
set(CPACK_PACKAGE_VERSION_PATCH ${PROJECT_VERSION_PATCH})
set(CPACK_PACKAGE_CONTACT fabish@bk.ru)
include(CPack)