/**============================================================================
Name        : Tests.cpp
Created on  : 15.09.2021
Author      : Tokmakov Andrey
Version     : 1.0
Copyright   : Your copyright notice
Description : Tests C++ project
============================================================================**/

#include <iostream>
#include <vector>
#include <string_view>

//#include "obj_dir/Vand_gate.h"
// #include "verilated.h"


int main([[maybe_unused]] const int argc,
         [[maybe_unused]] char** argv)
{
    const std::vector<std::string_view> args(argv + 1, argv + argc);

    return EXIT_SUCCESS;
}

// verilator --cc and_gate.sv --exe test_and.cpp
// make -j -C obj_dir/ Vand_gate