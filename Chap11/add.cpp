//
// Created by Admin on 6/3/2025.
//
#include <iostream>
#include "add.h"

void ex3_chap11() {
    std::cout << "Add Int " << add(2,3 ) << std::endl;
    std::cout << "Add Double" << add(2.4 ,5.3) << std::endl;
    std::cout << "Add Int/Double " << add<int> (20, 30) << std::endl;
}
