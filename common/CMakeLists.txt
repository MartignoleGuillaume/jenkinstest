set(headers include/lib.hpp)
set(sources src/lib.cpp)
add_library(strikeback_common SHARED ${headers} ${sources})
install(TARGETS strikeback_common
    RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}/bin
    LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
)
