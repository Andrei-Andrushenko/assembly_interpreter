#include <iostream>
#include "ValueRegister.hpp"
#include "ValueLiteral.hpp"
#include "Interpreter.hpp"
#include "MovOp.hpp"
#include "MulOp.hpp"
#include "AddOp.hpp"
#include "CmpOp.hpp"
#include "JgrOp.hpp"
#include "JeqOp.hpp"
#include "JleOp.hpp"
#include "JmpOp.hpp"
#include "PopOp.hpp"
#include "PushOp.hpp"

using namespace std;

void Assert(bool a) {
    if (a) {
        cout << "EQUAL" << endl;
        return;
    }
    cout << "FAIL" << endl;
}

int main() {
    // Это тот самый код, который считает факториал числа в регистре r0
    Interpreter interpreter;
    Memory mem;

// "вставляем" код в память нашего fantasy-компьютера
// обратите внимание, что все операторы принимают на вход интерфейсы операндов.
    mem.PushOp(new MovOp(new ValueRegister(r0), new ValueLiteral(5))); // первый операнд обязан быть IMutableValue, а второй может быть просто IValue
    mem.PushOp(new MovOp(new ValueRegister(r1), new ValueLiteral(1)));
    mem.PushOp(new MulOp(new ValueRegister(r1), new ValueRegister(r0)));
    mem.PushOp(new AddOp(new ValueRegister(r0), new ValueLiteral(-1)));
    mem.PushOp(new CmpOp(new ValueRegister(r0), new ValueLiteral(0)));
    mem.PushOp(new JgrOp(new ValueLiteral(-4))); // например тут сказано, что можно подавать IValue

    interpreter.Run(mem);
    
    Assert(mem.GetReg(r1) == 1 * 2 * 3 * 4 * 5);
    Assert(mem.GetReg(r0) == 0);
    return 0;
}
