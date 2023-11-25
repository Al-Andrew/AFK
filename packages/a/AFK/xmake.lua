package("AFK")
    set_homepage("https://github.com/Al-Andrew/AFK")
    set_description("Andrew's field kit. C++ utilities library.")

    add_urls("https://github.com/Al-Andrew/AFK/archive/$(version).tar.gz")

    add_versions("v0.0.1", "5186912284926bf05f5fe76dcba3b034cc8e673c")

    on_install("windows", function(package)
        import("package.tools.xmake").install(package)
    end)
package_end()