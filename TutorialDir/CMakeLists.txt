# add the executable
add_executable(Tutorial Tutorial.cxx)
target_link_libraries(Tutorial PUBLIC MathFunctions)


# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(Tutorial PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )
