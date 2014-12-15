set(sources src/client_main.cpp)
set(headers)
#set(CMAKE_EXE_LINKER_FLAGS "-mwindows")  YOLO HOOK TEST
add_executable(strikeback_client ${headers} ${sources})
target_link_libraries(strikeback_client strikeback_common)
target_link_libraries(strikeback_client strikeback_gui)
target_link_libraries(strikeback_client ${SFML_LIBRARIES})
target_link_libraries(strikeback_client ${OPENGL_gl_LIBRARY})
install(TARGETS strikeback_client
    RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin
)
