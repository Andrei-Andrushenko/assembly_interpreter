#pragma once

#include "Memory.hpp"

class IValue {
public:
    virtual int Get(const Memory &mem) const = 0;
    virtual ~IValue() = default;
};