#pragma once

#include "Memory.hpp"

class Interpreter {
public:
    void Run(Memory &mem, int maxIterations = 100) const;
};