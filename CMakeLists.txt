cmake_minimum_required(VERSION 3.15)
project(assembly_interpreter)

set(CMAKE_CXX_STANDARD 17)

add_executable(assembly_interpreter main.cpp IOperation.hpp IMutableValue.hpp Memory.cpp Memory.hpp IValue.hpp
               ValueLiteral.cpp ValueLiteral.hpp ValueRegister.cpp ValueRegister.hpp Interpreter.cpp Interpreter.hpp
               AddOp.cpp AddOp.hpp CmpOp.cpp CmpOp.hpp JeqOp.cpp JeqOp.hpp JgrOp.cpp JgrOp.hpp JleOp.cpp JleOp.hpp
               JmpOp.cpp JmpOp.hpp MovOp.cpp MovOp.hpp MulOp.cpp MulOp.hpp PopOp.cpp PopOp.hpp PushOp.cpp PushOp.hpp)