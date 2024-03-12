# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TareaArmarHarry_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TareaArmarHarry_autogen.dir\\ParseCache.txt"
  "TareaArmarHarry_autogen"
  )
endif()
