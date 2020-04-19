#include "JmpOp.hpp"
#include <iostream>

void JmpOp::Apply(Memory &mem) {
    auto a = mem.GetReg(line) + op1_->Get(mem);
    mem.SetReg(line, a);
}

JmpOp::~JmpOp() {
    delete(op1_);
    std::cout << "~JmpOp" << std::endl;
}