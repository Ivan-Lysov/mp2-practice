set(target ${MP2_LIBRARY_LISTS})

file(GLOB hdrs "*.h*" "${MP2_INCLUDE_LISTS}/*.h*")
file(GLOB srcs "*.cpp")

include_directories("${MP2_INCLUDE_LISTS}")

add_library(${target} STATIC ${srcs} ${hdrs})