# Tests for Altrium.

# First Test
add_test(NAME testAltrium1
    COMMAND ${CMAKE_SOURCE_DIR}/test/testAltrium1.sh
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/src
)

# Second Test
add_test(NAME testAltrium2
    COMMAND ${CMAKE_SOURCE_DIR}/test/testAltrium2.sh
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/src
)
