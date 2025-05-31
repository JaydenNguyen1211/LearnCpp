//
// Created by Jayden Nguyen on 31/05/2025.
//
#include <iostream>
#include <random>
#include "hifi_game.h"



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

int validation_number(int value, int result, int turn) {
    if (turn <= Constant::max_guess) {
        if (value > result) {
            std::cout << "TOO HIGH" << std::endl;
            return Constant::high;
        }
        if (value < result) {
            std::cout << "TOO LOW" << std::endl;
            return Constant::low;
        } else {
            std::cout << "Correct, You win " << std::endl;
            return Constant::equal;
        }
    } else {
        std::cout << "Sorry, you lose. The correct number was " << result;
        return Constant::lose;
    }
}

bool is_reset() {
    std::cout << "Would you like to play again (y/n)?" ;
    std::cin >> replay;
    if (replay == 'y') {
        return true;
    }
    return false;
}

void play_hilo() {

    int turn_number {0};
    const int result = generate_random_number(Constant::min, Constant::max);

    std::cout << "Result is " << result << std::endl;
    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is." << std::endl;

    while (turn_number < Constant::max_guess) {
        turn_number++;

        std::cout << "Guest #" << turn_number << ": " << std::endl;
        std::cin >> choosed_value;

        if (validation_number(choosed_value, result, turn_number) == Constant::equal) {
            turn_number = 0;
            break;
        }
    }
}

void play_game() {
    do {
      play_hilo();
    } while (is_reset());
}