//
// Created by Jayden Nguyen on 30/05/2025.
//
#include <iostream>
#include "constant.h"

void ex2()  {

    std::cout << "How many students are in your class? ";
    int students{};
    std::cin >> students;


    if (students > Constants::maxClassSize)
        std::cout << "There are too many students in this class";
    else
        std::cout << "This class isn't too large";
}

void ex3(int param) {
    static int sum {0};
    sum += param;
    std::cout << "Sum is " << sum;
}