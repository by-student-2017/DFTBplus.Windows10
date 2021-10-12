#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "DftbPlus::mudpack" for configuration "RelWithDebInfo"
set_property(TARGET DftbPlus::mudpack APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(DftbPlus::mudpack PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELWITHDEBINFO "Fortran"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libmudpack.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS DftbPlus::mudpack )
list(APPEND _IMPORT_CHECK_FILES_FOR_DftbPlus::mudpack "${_IMPORT_PREFIX}/lib/libmudpack.a" )

# Import target "DftbPlus::dftbplus" for configuration "RelWithDebInfo"
set_property(TARGET DftbPlus::dftbplus APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(DftbPlus::dftbplus PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELWITHDEBINFO "Fortran"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libdftbplus.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS DftbPlus::dftbplus )
list(APPEND _IMPORT_CHECK_FILES_FOR_DftbPlus::dftbplus "${_IMPORT_PREFIX}/lib/libdftbplus.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
