#include <cassert>
#include <iostream>
#include "example_class.h"

int main() {

    ExampleClass example;
    example.setVal(42);

    assert(example.getVal() == 42);
    std::cout << "Test ExampleClass::getVal passed!" << std::endl;

}

