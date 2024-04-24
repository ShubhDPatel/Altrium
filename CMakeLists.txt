# Build for altrium
cmake_minimum_required(VERSION 3.28)

project(altrium)

# Add subdirectories containing the additional CMakeLists.txt files
add_subdirectory(src)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PACKAGE_CONTACT "Me")
include(CPack)

