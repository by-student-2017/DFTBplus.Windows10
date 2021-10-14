#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Mbd::mbd" for configuration "RelWithDebInfo"
set_property(TARGET Mbd::mbd APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(Mbd::mbd PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELWITHDEBINFO "Fortran"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libmbd.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS Mbd::mbd )
list(APPEND _IMPORT_CHECK_FILES_FOR_Mbd::mbd "${_IMPORT_PREFIX}/lib/libmbd.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
