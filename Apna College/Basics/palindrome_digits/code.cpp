#include <iostream> 
using namespace std; 
int main() { 
    int n = 11, result = 0, originalNumber=n; 
    while(n > 0){ 
        result = (result * 10) + n % 10; 
        n = n / 10; 
    } 
    if(originalNumber == result){ 
        cout<<"Number is Palindrome"; 
        return 0; 
    } 
    cout<<"Number is not Palindrome."; 
    return 0; 
}