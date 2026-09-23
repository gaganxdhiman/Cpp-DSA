#include <iostream>
using namespace std;

void printFirst(int n){
      int iniS = 0;
    for(int i = 0; i<n; i++){
        for(int star = 1; star<=n-i; star++ ){
            cout<<"*";
        }
        for(int space=0; space<iniS; space++){
            cout<<" ";
        }
        for(int star2 = 1; star2<=n-i; star2++){
            cout<<"*";
        }
        iniS+=2;
        cout<<endl;
    }
}
void printSecond(int n){
    int iniS = n-2+n;
   for(int i = 0; i<n; i++){
        for(int star = 1; star<=i+1; star++){
            cout<<"*";

        }
        for(int sp = 1; sp <=iniS; sp++){
            cout<<" ";
        }
        for(int star2=1; star2<=i+1; star2++){
            cout<<"*";
        }
        iniS-=2;
        cout<<endl;
   }
}
int main() 
{
   
    
    int n =5;
    printFirst(n);
    printSecond(n);
    
    return 0;
}



