#include <cassert>
#include <iostream>
#include "fibonacci.h"

int main() {

    assert(fibonacci(0) == 0);
    std::cout << "Test fibonacci(0) passed!" << std::endl;

    assert(fibonacci(-5) == -1);
    std::cout << "Test fibonacci(-5) passed!" << std::endl;
    
    assert(fibonacci(10) == 55);
    std::cout << "Test fibonacci(10) passed!" << std::endl;
    
}

