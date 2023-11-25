package("AFK")
    set_homepage("https://github.com/Al-Andrew/AFK")
    set_description("Andrew's field kit. C++ utilities library.")

    add_urls("https://github.com/Al-Andrew/AFK/archive/$(version).tar.gz")

    add_versions("v0.0.1", "998d4f115154007fdc08057e9d86750c0235d6b5")

    on_install("windows", function(package)
        import("package.tools.xmake").install(package)
    end)
package_end()