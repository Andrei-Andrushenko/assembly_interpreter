#pragma once

#include "Memory.hpp"

class Memory;

class IOperation {
public:
    virtual void Apply(Memory &mem) = 0;
    virtual ~IOperation() = default;
};