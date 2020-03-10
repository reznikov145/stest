#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rank" for configuration "Debug"
set_property(TARGET rank APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(rank PROPERTIES
  IMPORTED_IMPLIB_DEBUG "${_IMPORT_PREFIX}/lib/rank.lib"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/bin/rank.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rank )
list(APPEND _IMPORT_CHECK_FILES_FOR_rank "${_IMPORT_PREFIX}/lib/rank.lib" "${_IMPORT_PREFIX}/bin/rank.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
