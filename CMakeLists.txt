cmake_minimum_required(VERSION 3.10)

project(sebatt-model-viewer VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE
    ./src/main.cpp 
    ./src/log/log.cpp
)

add_executable(${PROJECT_NAME} ${SOURCE})

find_package(glfw3 3.3 REQUIRED)
target_link_libraries(${PROJECT_NAME} glfw)

find_package(OpenGL REQUIRED)
target_link_libraries(${PROJECT_NAME} OpenGL::GL)
