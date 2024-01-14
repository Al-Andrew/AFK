add_executable("sandbox")

target_link_libraries("sandbox"
    "AFK"
)

target_sources("sandbox"
    PRIVATE
    "sandbox.cpp"
)

set_target_properties("sandbox"
    PROPERTIES
    CXX_STANDARD 23
    CXX_STANDARD_REQUIRED on
)
