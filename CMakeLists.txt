CMAKE_MINIMUM_REQUIRED(VERSION 2.6) #cmake 版本限定
PROJECT(ExperimentProject)  #工程名称

include(cmake/ConfigureOpenCV.cmake)
include(cmake/MyConfigure.cmake)
include(cmake/ConfigureOpengl.cmake)

#set(CMAKE_BUILD_TYPE Release) # 等同于 cmake -DCMAKE_BUILD_TYPE=release


# ---Includes
set(INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/include/glfw-3.1.2/include/GLFW
        ${PROJECT_SOURCE_DIR}/include/pangolin-ui
        )

include_directories(${INCLUDE_DIR})


message(STATUS "crazylog--------------LIBRARIES=" ${LIBRARIES} )

add_subdirectory(${PROJECT_SOURCE_DIR}/src)
add_subdirectory(${PROJECT_SOURCE_DIR}/main)
