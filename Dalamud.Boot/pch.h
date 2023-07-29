// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

// Exclude rarely-used stuff from Windows headers
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX

// Windows Header Files (1)
#include <Windows.h>

// Windows Header Files (2)
#include <Dbt.h>
#include <dwmapi.h>
#include <PathCch.h>
#include <Psapi.h>
#include <ShlObj.h>
#include <SubAuth.h>
#include <TlHelp32.h>

// MSVC Compiler Intrinsic
#include <intrin.h>

// C++ Standard Libraries
#include <cassert>
#include <chrono>
#include <cstdio>
#include <deque>
#include <filesystem>
#include <format>
#include <fstream>
#include <functional>
#include <iostream>
#include <mutex>
#include <ranges>
#include <set>
#include <span>
#include <string>
#include <type_traits>

// https://www.akenotsuki.com/misc/srell/en/
#include "../lib/srell3_009/single-header/srell.hpp"

// https://github.com/TsudaKageyu/minhook
#include "../lib/TsudaKageyu-minhook/include/MinHook.h"

// https://github.com/Nomade040/nmd
#include "../lib/Nomade040-nmd/nmd_assembly.h"

// https://github.com/dotnet/coreclr
#include "../lib/CoreCLR/boot.h"
#include "../lib/CoreCLR/CoreCLR.h"

// https://github.com/nlohmann/json
#include "../lib/nlohmann-json/json.hpp"

// https://github.com/crosire/reshade/tree/main/include
#include "../lib/reshade/include/reshade.hpp"

#include "unicode.h"

// Commonly used macros
#define DllExport extern "C" __declspec(dllexport)

// Global variables
extern HMODULE g_hModule;
extern HINSTANCE g_hGameInstance;
extern bool g_bReshadeAvailable;
extern std::optional<CoreCLR> g_clr;

#endif //PCH_H
