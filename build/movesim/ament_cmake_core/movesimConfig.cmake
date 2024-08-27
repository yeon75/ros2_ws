# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_movesim_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED movesim_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(movesim_FOUND FALSE)
  elseif(NOT movesim_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(movesim_FOUND FALSE)
  endif()
  return()
endif()
set(_movesim_CONFIG_INCLUDED TRUE)

# output package information
if(NOT movesim_FIND_QUIETLY)
  message(STATUS "Found movesim: 0.0.0 (${movesim_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'movesim' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${movesim_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(movesim_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${movesim_DIR}/${_extra}")
endforeach()
