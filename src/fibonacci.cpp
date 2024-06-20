#include "fibonacci.h"

/**
 * @file fibonacci.cpp
 * @brief implementation of fibonacci function
 */
 
/**
 * @fn fibonacci
 * @brief Calculer le n-ième terme de la suite de Fibonacci.
 * @param un entier
 * @return un entier
 */ 

int fibonacci(int n) {
    if (n < 0) return -1; // Erreur pour les nombres négatifs
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 2) + fibonacci(n - 1);
}

