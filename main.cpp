#include <iostream>
#include "factorial.h"
#include "fibonacci.h"
#include "palindrome.h"
#include "prime.h"
#include "example_class.h"

int main() {
    // Test de la fonction Factorial
    int num = 5;
    std::cout << "Factorial of " << num << " is " << factorial(num) << std::endl;

    // Test de la fonction Fibonacci
    num = 10;
    std::cout << "Fibonacci of " << num << " is " << fibonacci(num) << std::endl;

    // Test de la fonction Palindrome
    std::string str = "A man a plan a canal Panama";
    std::cout << "\"" << str << "\" is " << (isPalindrome(str) ? "a palindrome" : "not a palindrome") << std::endl;

    // Test de la fonction Prime
    num = 17;
    std::cout << num << " is " << (isPrime(num) ? "a prime number" : "not a prime number") << std::endl;

    // Test de la classe ExampleClass
    ExampleClass example;
    example.setVal(42);
    std::cout << "ExampleClass val is " << example.getVal() << std::endl;

    return 0;
}

