cmake_minimum_required(VERSION 3.16)
project(hesjustaboi)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

find_package(raylib)

set(EYES_SRC
  ${CMAKE_CURRENT_SOURCE_DIR}/src/eyes.c
  ${CMAKE_CURRENT_SOURCE_DIR}/include/eyes.h
)

add_library(eyes)
target_sources(eyes
 PRIVATE
  ${EYES_SRC}
  )

target_include_directories(eyes
 PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(eyes
  ${raylib}
)

set(MAIN
  ${CMAKE_CURRENT_SOURCE_DIR}/src/main.c
  )

add_executable(main)
target_sources(main
 PRIVATE
  ${MAIN}
)

target_link_libraries(main
  raylib
  eyes
)
