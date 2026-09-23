#include <iostream>
using namespace std;

int main() 
{
   int n =4; 
   for(int i = 1; i<=n; i++){
    for(int sp = 1; sp<=n-i; sp++){
        cout<<" ";
    }
    
    char ch = 'A';
    int breakPoint = (2*i-1) /2;
   for(int j = 1; j<=(2*i-1); j++){
        cout<<ch;
        if(j<=breakPoint){
            ch++;
        }
        
        else ch--;
   }
    cout<<endl;
   }
    return 0;
}