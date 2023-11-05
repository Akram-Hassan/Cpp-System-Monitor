cmake_minimum_required(VERSION 3.22)

#Add Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include(GoogleTest)
enable_testing()

list(FILTER SOURCES EXCLUDE REGEX "main.cpp")
list(FILTER SOURCES EXCLUDE REGEX "ncurses_display.cpp")
file(GLOB TESTS "*.cpp")
add_executable(monitor_tests ${TESTS} ${SOURCES})

target_link_libraries(
    monitor_tests
    GTest::gtest_main
)

gtest_discover_tests(monitor_tests)
