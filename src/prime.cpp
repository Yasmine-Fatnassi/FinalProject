#include "prime.h"
#include <cmath>
/**
 * @file prime.cpp
 * @brief implementation of isPrime function
 */
 
/**
 * @fn isPrime
 * @brief Vérifier si un nombre entier est un nombre premier.
 * @param n un integer
 * @return true ou false
 */ 

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= std::sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

