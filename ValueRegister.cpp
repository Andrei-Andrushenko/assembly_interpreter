#include "ValueRegister.hpp"
#include <iostream>

void ValueRegister::Set(Memory &mem, int value) {
    mem.SetReg(reg_, value);
}

int ValueRegister::Get(const Memory &mem) const {
    return mem.GetReg(reg_);
}

ValueRegister::~ValueRegister() {
    std::cout << "~ValueRegister" << std::endl;
}
