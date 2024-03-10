# altrium executable
add_executable(alt)
target_sources(alt PRIVATE main.cpp)
target_compile_features(alt PRIVATE cxx_std_17)

# altrium library
add_subdirectory(libAltrium)

target_link_libraries(alt PRIVATE altrium_library)

# Install the executable to bin
install(PROGRAMS $<TARGET_FILE:alt> TYPE BIN)

