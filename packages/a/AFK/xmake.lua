package("AFK")
    set_description("Andrew's field kit. C++ utilities library.")

    add_urls("https://github.com/Al-Andrew/AFK.git")
    add_versions("0.0.1", "74e1bee71ec28c2f4f3ec4b298c0811bfc1bdb09")

    on_install(function (package)
        os.cp("include", package:installdir())
    end)
