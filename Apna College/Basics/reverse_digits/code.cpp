#include <iostream> 
using namespace std; 
int main() { 
    int n = 546, result = 0; 
    while(n > 0){ 
        result = (result * 10) + n % 10; 
        n = n / 10; 
    } 
    cout<<result; 
    return 0; 
}