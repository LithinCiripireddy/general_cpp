cmake_minimum_required(VERSION 3.0)
project(GeneralCpp)

# Add all the source files for your library
set(SOURCES
    src/filter_image.cpp
    # Add more source files if needed
)

# Create the library
add_library(general_cpp ${SOURCES})

# Optionally include additional directories
target_include_directories(general_cpp PUBLIC include)

# Optionally specify C++ standard
target_compile_features(general_cpp PUBLIC cxx_std_11)

# Optionally set C++ standard
set(CMAKE_CXX_STANDARD 11)

# Optionally include additional directories
include_directories(include)

# Add executable and specify source files
add_executable(generalcpp ${SOURCES})