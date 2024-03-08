# altrium executable
add_executable(altrium)
target_sources(altrium PRIVATE main.cpp)
target_compile_features(altrium PRIVATE cxx_std_17)

# altrium library
add_subdirectory(libAltrium)

target_link_libraries(altrium PRIVATE altrium_library)

