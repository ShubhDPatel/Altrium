# Tests for Altrium.

# First Tests
add_test(NAME testAltrium1
    COMMAND ${CMAKE_SOURCE_DIR}/test/testAltrium1.sh
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/src
)

