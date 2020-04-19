#pragma once


#include "IOperation.hpp"
#include "IValue.hpp"

class JeqOp : public IOperation {
    const IValue *const op1_;

public:
    explicit JeqOp(IValue *const op1) : op1_(op1) {}
    void Apply(Memory &mem) override;
    ~JeqOp() override;
};