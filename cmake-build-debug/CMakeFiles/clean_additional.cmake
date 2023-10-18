# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\GreedySnake_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\GreedySnake_autogen.dir\\ParseCache.txt"
  "GreedySnake_autogen"
  )
endif()
