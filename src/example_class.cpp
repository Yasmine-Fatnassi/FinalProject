#include "example_class.h"

/**
 * @file example_class.cpp
 * @brief implementation of getter and setter functions
 */
 

ExampleClass::ExampleClass() : val(0) {}
/**
 * @fn setVal
 * @brief Setter d'un nombre entier.
 * @param un entier
 * @return void
 */ 
void ExampleClass::setVal(int newVal) {
    val = newVal;
}
/**
 * @fn getVal
 * @brief Getter d'un nombre entier.
 * 
 * @return un entier
 */ 
int ExampleClass::getVal() const {
    return val;
}

