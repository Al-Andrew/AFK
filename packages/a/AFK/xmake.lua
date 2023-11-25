package("AFK")
    set_urls("https://github.com/Al-Andrew/AFK")

    on_install("windows", function(package)
        import("package.tools.xmake").install(package)
    end)
package_end()