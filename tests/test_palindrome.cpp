#include <cassert>
#include <iostream>
#include "palindrome.h"

int main() {

    assert(isPalindrome("Hello") == false);
    std::cout << "Hello is not palindrome!" << std::endl;
    
    assert(isPalindrome("ABCDCBA") == true);
    std::cout << "ABCDCBA is palindrome!" << std::endl;

}

