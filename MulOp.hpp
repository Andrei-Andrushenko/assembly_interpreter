#pragma once

#include "IOperation.hpp"
#include "IMutableValue.hpp"

class MulOp : public IOperation {
    MutableValue *const op1_;
    const IValue *const op2_;

public:
    MulOp(MutableValue *op1, const IValue *op2) : op1_(op1), op2_(op2) {}
    void Apply(Memory &mem) override;
    ~MulOp() override;
};