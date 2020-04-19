#pragma once

#include "IValue.hpp"

class MutableValue : public IValue {
public:
    virtual void Set(Memory &mem, int value) = 0;
    ~MutableValue() override = default;
};