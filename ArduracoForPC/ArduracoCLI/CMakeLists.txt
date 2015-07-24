project(arduracocli)

add_executable(arduracocli main.cpp)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")

install(TARGETS arduracocli RUNTIME DESTINATION bin)

add_subdirectory(menuefunktionen)
add_subdirectory(datenstruktur)

target_link_libraries(arduracocli menuefunktionen)
target_link_libraries(arduracocli datenstruktur)