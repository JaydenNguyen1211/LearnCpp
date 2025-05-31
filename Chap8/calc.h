//
// Created by Jayden Nguyen on 31/05/2025.
//

#ifndef LEARNCPP_CALC_H
#define LEARNCPP_CALC_H
void printBallHeight(double ballHeight, int seconds);
double calculateBallHeight(double towerHeight, int seconds);
double getTowerHeight();
double calculateAndPrintBallHeight(double towerHeight, int seconds);
namespace Constant {
    constexpr double gravity { 9.8 };
}
#endif //LEARNCPP_CALC_H
