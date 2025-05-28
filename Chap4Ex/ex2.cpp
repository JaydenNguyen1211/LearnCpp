//
// Created by Jayden Nguyen on 28/05/2025.
//
#include <iostream>
#include "ex2.h"

double x {};
double y {};
char z;
void ex2() {
    std::cout << "Enter a double value:";
    std::cin  >> x;
    std::cout << "Enter a double value:";
    std::cin  >> y;
    std::cout << "Enter +, -, *, or /:";
    std::cin >> z;

    std::cout << "z is " << z;
}