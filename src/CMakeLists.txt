#project (tdd_test)
#file(GLOB SOURCES "./*.c" "./*.cpp")

#set(MAIN_BIN_NAME Src)
#add_library(${MAIN_BIN_NAME} STATIC ${SOURCES})
#target_include_directories(${MAIN_BIN_NAME} PUBLIC ${CMAKE_CURRENT_LIST_DIR} ${PROJECT_SOURCE_DIR}/Include)

add_subdirectory(hello)
#target_link_libraries(${PROJECT_NAME} hello)
