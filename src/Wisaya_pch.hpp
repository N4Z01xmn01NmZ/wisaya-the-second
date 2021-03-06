#ifndef WISAYA_PCH_H
#define WISAYA_PCH_H

#pragma once

#include <wsydef.hpp>

#include <iostream>
#include <memory>
#include <utility>
#include <algorithm>
#include <functional>

#include <string>
#include <sstream>
#include <array>
#include <vector>
#include <unordered_map>
#include <unordered_set>

#include <type/wsyBasicType.hpp>

#include <wisaya/core/WAppLog.hpp>
#include <wsylog.hpp>
#include <wsyassert.hpp>

#include <wsymemory.hpp>

#ifdef WSY_PLATFORM_WINDOWS
    #include <Windows.h>
#endif

#endif // WISAYA_PCH_H