#include <iostream>
#include <cassert>
#include "factorial.h"

int main() {
    bool success = true;


    assert(factorial(0) == 1);
    std::cout << "Test 0! passed!" << std::endl;

    assert(factorial(-5) == -1);
    std::cout << "Test -5! passed!" << std::endl;
    
    assert(factorial(5) == 120);
    std::cout << "Test 5! passed!" << std::endl;

}
  

