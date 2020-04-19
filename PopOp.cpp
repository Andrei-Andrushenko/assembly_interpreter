#include <iostream>
#include "PopOp.hpp"

void PopOp::Apply(Memory &mem) {
    mem.Pop();
}

PopOp::~PopOp() {
    delete(op1_);
    std::cout << "~PopOp" << std::endl;
}
