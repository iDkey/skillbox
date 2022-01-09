# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/skillbox_34_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/skillbox_34_autogen.dir/ParseCache.txt"
  "skillbox_34_autogen"
  )
endif()
