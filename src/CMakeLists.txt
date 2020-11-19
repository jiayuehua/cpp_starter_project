find_package(fmt CONFIG REQUIRED)

# Generic test that uses conan libs
add_executable(intro main.cpp)
target_link_libraries(
  intro PRIVATE project_options project_warnings 
                fmt::fmt fmt::fmt-header-only  )
