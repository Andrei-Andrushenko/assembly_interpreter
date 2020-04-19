#include <iostream>
#include "JeqOp.hpp"

void JeqOp::Apply(Memory &mem) {
    if (mem.GetReg(cmp)==0) {
        auto a = mem.GetReg(line) + op1_->Get(mem);
        mem.SetReg(line, a);
        return;
    }
}

JeqOp::~JeqOp() {
    delete(op1_);
    std::cout << "~JeqOp" << std::endl;
}
