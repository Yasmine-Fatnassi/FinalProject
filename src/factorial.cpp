#include "factorial.h"

int factorial(int n) {
    if (n < 0) return -1; // Erreur pour les nombres négatifs
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

