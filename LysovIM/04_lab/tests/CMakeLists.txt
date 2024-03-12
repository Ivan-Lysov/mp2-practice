set(target ${MP2_TESTS})


file(GLOB hdrs "*.h*")
file(GLOB srcs "*.cpp")

include_directories("${MP2_INCLUDE_LISTS}" "${MP2_INCLUDE_POLYNOMS}" "../gtest")

add_executable(${target} ${srcs} ${hdrs})
target_link_libraries(${target} gtest ${MP2_LIBRARY_LISTS} ${MP2_LIBRARY_POLYNOMS})