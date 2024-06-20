#include "factorial.h"

/**
 * @file factorial.cpp
 * @brief implementation of factorial function
 */
 
/**
 * @fn factorial
 * @brief Calculer la factorielle d'un nombre entier.
 * @param un entier
 * @return un entier
 */ 

int factorial(int n) {
    if (n < 0) return -1; // Erreur pour les nombres négatifs
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

