project(arduracocli)

add_executable(arduracocli befehl.cpp befehlsgruppe.cpp main.cpp)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")

install(TARGETS arduracocli RUNTIME DESTINATION bin)

add_subdirectory(datenstruktur)

target_link_libraries(arduracocli datenstruktur serial)