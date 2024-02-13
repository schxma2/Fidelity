-- premake5.lua
workspace "Fidelity"
    configurations { "Debug", "Release" }
    platforms { "x64" } 
project "Fidelity"
    kind "ConsoleApp"
    language "C++"
    targetdir "bin/%{cfg.buildcfg}"

    files { "../fidelity/**.h", "../fidelity/**.cpp" }
    libdirs { "../3rdParty/freeglut/lib" }
    links { "freeglut.lib" }
    
    includedirs { "../3rdParty" }

    filter "configurations:Debug"
        defines { "DEBUG" }
        symbols "On"

    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On"