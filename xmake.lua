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

    add_includedirs("include", {public = true})


package("AFK")
    set_urls("https://github.com/Al-Andrew/AFK")

    on_install("windows", function(package)
        import("package.tools.xmake").install(package)
    end)
package_end()