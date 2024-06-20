#include "palindrome.h"
#include <bits/stdc++.h>

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
 
