#include "MulOp.hpp"
#include <iostream>

void MulOp::Apply(Memory &mem) {
    op1_->Set(mem, op1_->Get(mem) * op2_->Get(mem));
    mem.Push(op1_->Get(mem));
    std::cout << mem.Pop() << std::endl;
}

MulOp::~MulOp() {
    delete(op1_);
    delete(op2_);
    std::cout << "~MulOp" << std::endl;
}
