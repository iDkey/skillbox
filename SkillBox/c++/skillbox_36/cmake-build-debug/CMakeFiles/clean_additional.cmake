# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/skillbox_36_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/skillbox_36_autogen.dir/ParseCache.txt"
  "skillbox_36_autogen"
  )
endif()
