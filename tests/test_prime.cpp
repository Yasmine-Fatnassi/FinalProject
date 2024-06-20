#include <cassert>
#include <iostream>
#include "prime.h"

int main() {

    assert(isPrime(18) == false);
    std::cout << "18 is not Prime number!" << std::endl;
    
    assert(isPrime(17) == true);
    std::cout << "17 is Prime number!" << std::endl;
}


