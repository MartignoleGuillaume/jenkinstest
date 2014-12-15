set(headers include/gui.hpp)
set(sources src/gui.cpp)
add_library(strikeback_gui SHARED ${headers} ${sources})
target_link_libraries(strikeback_gui ${SFML_LIBRARIES})
install(TARGETS strikeback_gui
    RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin
    LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
)
