#pragma once

#include "IOperation.hpp"
#include "IMutableValue.hpp"

class PopOp : public IOperation {
    MutableValue *const op1_;

public:
    explicit PopOp(MutableValue *const op1) : op1_(op1) {}
    void Apply(Memory &mem) override;
    ~PopOp() override;
};