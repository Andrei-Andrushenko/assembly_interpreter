#include "Memory.hpp"

IOperation *Memory::GetCurrentOp() const {
    return instructions.at(GetReg(line));
}

int Memory::GetOpsCount() const {
    return instructions.size();
}

void Memory::PushOp(IOperation *op) {
    instructions.push_back(op);
}

int Memory::GetReg(Register reg) const {
    return registers.find(reg)->second;
}

void Memory::SetReg(Register reg, int value) {
    registers.find(reg)->second=value;
}

void Memory::Push(int value) {
    stack.push(value);
}

int Memory::Pop() {
    int a = stack.top();
    stack.pop();
    return a;
}

Memory::~Memory() {
    for (int i=0; i<instructions.size(); i++) {
        delete(instructions[i]);
    }
}
