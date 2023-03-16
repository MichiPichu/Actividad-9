# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Lista_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Lista_autogen.dir\\ParseCache.txt"
  "Lista_autogen"
  )
endif()
