set_project("AFK")
set_description("Andrew's field kit. C++ utilities library.")
set_version("0.0.0")

set_xmakever("2.7.9")

add_rules("mode.debug", "mode.release")

set_warnings("all")
set_languages("c++20")

target("AFK")
    set_kind("static")
    add_files("src/*.cpp")
    add_headerfiles("include/**.hpp")

    add_includedirs("include", {public = true})