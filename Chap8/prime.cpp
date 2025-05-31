//
// Created by Jayden Nguyen on 31/05/2025.
//

#include <iostream>

bool is_prime(int x) {
    int count = 0;

    for (int i = 2; i <= x/2; ++i) {
        if (x % i == 0) {
            count++;
        }
    }

    return count <= 0;
}

void prime_check(int prime) {
    bool result = is_prime(prime);

    std::cout << " This number is Prime ? " << std::boolalpha << result << "\n";
}