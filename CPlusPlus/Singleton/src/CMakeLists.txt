find_package(Threads REQUIRED)
aux_source_directory(. DIR_SRCS)
add_executable(Singleton ${DIR_SRCS})
target_link_libraries(Singleton ${CMAKE_THREAD_LIBS_INIT})
