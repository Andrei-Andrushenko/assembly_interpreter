#pragma once

#include "IOperation.hpp"
#include "IValue.hpp"

class PushOp : public IOperation {
    const IValue *const op1_;

public:
    explicit PushOp(IValue *const op1) : op1_(op1) {}
    void Apply(Memory &mem) override;
    ~PushOp() override;
};