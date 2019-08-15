cmake_minimum_required(VERSION 3.5)
project(libexponent VERSION 1.0.0 LANGUAGES CXX)

list(INSERT CMAKE_MODULE_PATH 0 ${CMAKE_SOURCE_DIR}/cmake)

add_library(exponent
    src/exponent.cpp
)

add_library(Exponent::exponent ALIAS exponent)

target_include_directories(exponent
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_compile_features(exponent PRIVATE cxx_auto_type)
target_compile_options(exponent PRIVATE $<$<CXX_COMPILER_ID:GNU>:-Wall>)


include(GNUInstallDirs)
set(INSTALL_CONFIGDIR ${CMAKE_INSTALL_LIBDIR}/cmake/Exponent)

install(TARGETS exponent
    EXPORT exponent-targets
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

set_target_properties(exponent PROPERTIES EXPORT_NAME Exponent)

install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

install(EXPORT exponent-targets
  FILE
    ExponentTargets.cmake
  NAMESPACE
    Exponent::
  DESTINATION
    ${INSTALL_CONFIGDIR}
)

include(CMakePackageConfigHelpers)
write_basic_package_version_file(
    ${CMAKE_CURRENT_BINARY_DIR}/ExponentConfigVersion.cmake
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY AnyNewerVersion
)

configure_package_config_file(${CMAKE_CURRENT_LIST_DIR}/cmake/ExponentConfig.cmake.in
    ${CMAKE_CURRENT_BINARY_DIR}/ExponentConfig.cmake
    INSTALL_DESTINATION ${INSTALL_CONFIGDIR}
)

install(FILES
    ${CMAKE_CURRENT_BINARY_DIR}/ExponentConfig.cmake
    ${CMAKE_CURRENT_BINARY_DIR}/ExponentConfigVersion.cmake
    DESTINATION ${INSTALL_CONFIGDIR}
)

export(EXPORT exponent-targets FILE ${CMAKE_CURRENT_BINARY_DIR}/ExponentTargets.cmake NAMESPACE Exponent::)

export(PACKAGE Exponent)

add_subdirectory(test)