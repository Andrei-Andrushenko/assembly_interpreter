#include <iostream>
#include "JleOp.hpp"

void JleOp::Apply(Memory &mem) {
    if (mem.GetReg(cmp)==-1) {
        auto a = mem.GetReg(line) + op1_->Get(mem);
        mem.SetReg(line, a);
        return;
    }
}

JleOp::~JleOp() {
    delete(op1_);
    std::cout << "~JleOp" << std::endl;
}
