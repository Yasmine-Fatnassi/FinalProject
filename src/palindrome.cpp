#include "palindrome.h"
#include <bits/stdc++.h>

/**
 * @file palindrome.cpp
 * @brief implementation of isPalindrome function
 */
 
/**
 * @fn isPalindrome
 * @brief Vérifier si une chaîne de caractères est un palindrome.
 * @param une chaîne de caractères
 * @return true ou false
 */ 

using namespace std;

bool isPalindrome(string S)
{
    // Stores the reverse of the string S
    
    string P = S;
 
    // Reverse the string P
    reverse(P.begin(), P.end());
 
  
    if (S == P) {
       
        return true;
    }
    
    else {
       
        return false;
    }
}
 
