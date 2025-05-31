//
// Created by Jayden Nguyen on 31/05/2025.
//
#include <iostream>
#include <random>
#include "hifi_game.h"


int turn_number {0};
int choosed_value;
char replay;


int generate_random_number(int min, int max) {
    // Random number generator
    std::random_device rd;                      // seed source
    std::mt19937 gen(rd());                     // Mersenne Twister engine
    std::uniform_int_distribution<> dist(min, max);

    int randomNumber = dist(gen);
    return randomNumber;
}

int validation_number(int value, int result) {
    if (value > result) {
        std::cout << "TOO HIGH" << std::endl;
        return Constant::high;
    } else if (value < result) {
        std::cout << "TOO LOW" << std::endl;
        return Constant::low;
    } else {
        std::cout << "Correct, You win " << std::endl;
        return Constant::equal;
    }
}

void play_game() {
    const int result = generate_random_number(1, 100);
    std::cout << "Result is " << result << std::endl;
    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is." << std::endl;
    while (turn_number < Constant::max_guess) {
        turn_number++;
        std::cout << "Guest #" << turn_number << ": " << std::endl;
        std::cin >> choosed_value;
        if (validation_number(choosed_value, result) == Constant::equal) {
            std::cout << "Would you like to play again (y/n)?" ;
            std::cin >> replay;
            if (replay == 'n' || replay == 'N') {
                std::exit(0);
            } else {
                turn_number = 0;
            }
        }
    }

    std::cout << "Sorry, you lose. The correct number was " << result;
}