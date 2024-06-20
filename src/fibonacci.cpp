#include "fibonacci.h"

int fibonacci(int n) {
    if (n < 0) return -1; // Erreur pour les nombres négatifs
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 2) + fibonacci(n - 1);
}

