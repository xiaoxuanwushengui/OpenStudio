set(target_name openstudio_sdd)

set(${target_name}_src
  SDDAPI.hpp
  mainpage.hpp
  ForwardTranslator.hpp
  ForwardTranslator.cpp
  ReverseTranslator.hpp
  ReverseTranslator.cpp
  MapEnvelope.cpp
  MapGeometry.cpp
  MapSchedules.cpp
  MapHVAC.cpp
  Helpers.hpp
  Helpers.cpp
)

set(${target_name}_test_src
  Test/SDDFixture.hpp
  Test/SDDFixture.cpp
  Test/ForwardTranslator_GTest.cpp
  Test/ReverseTranslator_GTest.cpp
)

set(${target_name}_swig_src
  SDD.i
)

set(${target_name}_depends
  openstudio_model
  openstudio_energyplus
  openstudio_osversion
)

add_library(${target_name} ${${target_name}_src})

target_link_libraries(${target_name} ${${target_name}_depends})

# No need to install static library
#if(NOT APPLE)
#install(TARGETS ${target_name}
#  RUNTIME DESTINATION bin
#  LIBRARY DESTINATION lib
#)
#endif()

CREATE_SRC_GROUPS("${${target_name}_src}")
CREATE_SRC_GROUPS("${${target_name}_test_src}")
CREATE_SRC_GROUPS("${${target_name}_swig_src}")

if(BUILD_TESTING)
  CREATE_TEST_TARGETS(${target_name} "${${target_name}_test_src}" "${${target_name}_depends}")
  add_dependencies(${target_name}_tests openstudio_sdd_resources)
endif()

MAKE_SWIG_TARGET(OpenStudioSDD SDD "${CMAKE_CURRENT_SOURCE_DIR}/SDD.i" "${${target_name}_swig_src}" ${target_name} "OpenStudioEnergyPlus;OpenStudioOSVersion")
