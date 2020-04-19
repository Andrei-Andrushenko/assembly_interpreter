#include <iostream>
#include "PushOp.hpp"

void PushOp::Apply(Memory &mem) {
    mem.Push(op1_->Get(mem));
}

PushOp::~PushOp() {
    delete(op1_);
    std::cout << "~PushOp" << std::endl;
}