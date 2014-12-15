set(sources src/server_main.cpp)
add_executable(strikeback_server ${sources})
target_link_libraries(strikeback_server strikeback_common)
install(TARGETS strikeback_server
    RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin
)
