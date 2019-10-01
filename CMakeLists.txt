cmake_minimum_required(VERSION 2.8)

project(uv-cpp)

set(LIBUV_PATH, "${PROJECT_SOURCE_DIR}/libuv/")
set(LIBUV_NAME, "libuv.a")
set(SOURCES, "${PROJECT_SOURCE_DIR}")
set(LIBUV_SRC, "${PROJECT_SOURCE_DIR}/libuv/src")

include_directories(${PROJECT_SOURCE_DIR}
                    ${LIBUV_PATH}
                    )

add_library(uv STATIC IMPORTED)
set_target_properties(uv PROPERTIES
  IMPORTED_LOCATION "${LIBUV_SRC}"
  INTERFACE_INCLUDE_DIRECTORIES "${PROJECT_SOURCE_DIR}/libuv/include"
)
set(LIBUV_SRC ${LIBUV_NAME})
##add_executable(uv ${LIBUV_SRC})
##target_link_libraries(libuv uv)

link_directories(${LIBUV_PATH})
#link_libraries(uv)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11 -02")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -stdlib=libc++ -g -O0 -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} "${LIBUV_NAME}" -pthread)
#target_link_libraries(${PROJECT_NAME} "libuv.a" -pthread)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")
#add_executable(${PROJECT_NAME} ${SOURCES})
