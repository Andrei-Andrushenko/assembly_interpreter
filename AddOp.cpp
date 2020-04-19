#include <iostream>
#include "AddOp.hpp"

void AddOp::Apply(Memory &mem) {
    op1_->Set(mem, op1_->Get(mem) + op2_->Get(mem));
    mem.Push(op1_->Get(mem));
    std::cout << mem.Pop() << std::endl;
}
AddOp::~AddOp() {
    delete(op1_);
    delete(op2_);
    std::cout << "~AddOp" << std::endl;
}
