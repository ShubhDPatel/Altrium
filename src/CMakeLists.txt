# altrium executable
add_executable(altrium)
target_sources(altrium PRIVATE main.cpp)
target_compile_features(altrium PRIVATE cxx_std_17)

