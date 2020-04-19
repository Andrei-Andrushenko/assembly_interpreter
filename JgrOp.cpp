#include <iostream>
#include "JgrOp.hpp"

void JgrOp::Apply(Memory &mem) {
    if (mem.Pop()==1) {
        mem.SetReg(line, mem.GetReg(line) + op1_->Get(mem));
        return;
    }
}

JgrOp::~JgrOp() {
    delete(op1_);
    std::cout << "~JgrOp" << std::endl;
}
