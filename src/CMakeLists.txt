add_library("AFK")

target_include_directories("AFK"
    PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)

set_target_properties("AFK"
    PROPERTIES
    CXX_STANDARD 23
    CXX_STANDARD_REQUIRED on
)

add_subdirectory("memory")