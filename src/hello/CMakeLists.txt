file(GLOB SOURCES "./*.c" "./*.cpp")

add_library(hello STATIC ${SOURCES})
target_include_directories(hello PUBLIC ${CMAKE_CURRENT_LIST_DIR} ${PROJECT_SOURCE_DIR}/include/hello)
