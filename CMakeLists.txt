cmake_minimum_required(VERSION 3.0.0)
project(aux_01 VERSION 0.1.0)

set(LIBRARY_NAME
    adversario
)

set(LIBRARY_HEADERS_DIR
    include
)

set(LIBRARY_HEADERS
    ${LIBRARY_HEADERS_DIR}/common.h
)

set(LIBRARY_SOURCE
    busqueda_segmentada.cpp
)

add_library(${LIBRARY_NAME} STATIC
    ${LIBRARY_HEADERS}
    ${LIBRARY_SOURCE}
)



include(CTest)
enable_testing()

add_executable(aux_01 main.cpp)
add_executable(busqsegmentada busqueda_segmentada.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
