#pragma once

#include "IOperation.hpp"
#include "IValue.hpp"

class JleOp : public IOperation {
    const IValue *const op1_;

public:
    explicit JleOp(IValue *const op1) : op1_(op1) {}
    void Apply(Memory &mem) override;
    ~JleOp() override;
};
