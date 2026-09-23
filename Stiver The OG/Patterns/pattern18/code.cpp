#include <iostream>
using namespace std;

int main() 
{
   
    
    int n =5;

    for(int i = 0; i<5; i++){
        
       
        for(char ch = ('A' + n-1)- i; ch<= 'E'; ch++){
            cout<<ch<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}



