-- premake5.lua
workspace "Fidelity"
    configurations { "Debug", "Release" }
    platforms { "x64" } -- Use this line instead of architectures

project "Fidelity"
    kind "ConsoleApp"
    language "C++"
    targetdir "bin/%{cfg.buildcfg}"

    files { "../fidelity/**.h", "../fidelity/**.cpp" }

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"