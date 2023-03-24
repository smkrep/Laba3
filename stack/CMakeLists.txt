add_library(stack stack.h stack.cpp)

add_executable(stack_test stack_test.cpp)
target_link_libraries(stack_test stack)