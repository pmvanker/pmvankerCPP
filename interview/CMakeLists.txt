cmake_minimum_required(VERSION 3.10)
project(CppInterviewQuestions)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find all coding cpp files
file(GLOB CODING_FILES 
    "beginner/*_coding.cpp"
    "moderate/*_coding.cpp"
    "hard/*_coding.cpp"
)

# Add executables for each
foreach(cpp_file ${CODING_FILES})
    get_filename_component(exe_name ${cpp_file} NAME_WE)
    add_executable(${exe_name} ${cpp_file})
endforeach()