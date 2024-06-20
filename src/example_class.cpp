#include "example_class.h"

ExampleClass::ExampleClass() : val(0) {}

void ExampleClass::setVal(int newVal) {
    val = newVal;
}

int ExampleClass::getVal() const {
    return val;
}

