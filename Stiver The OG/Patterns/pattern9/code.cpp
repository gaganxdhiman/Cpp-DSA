#include <iostream>
using namespace std;

void printNormal(int n){
    for(int row = 1; row<=n; row++){
    for(int sp = 1 ; sp<= n-row; sp++){
        cout<<" ";
    }
    for(int star = 1; star<= (row*2) -1; star++){
        cout<<"*";
    }
    cout<<endl;
   }
}
void printReverse(int n){
    for(int row = 1; row<=n; row++){
    for(int sp = 1; sp<=row-1; sp++){
        cout<<" ";
    }
    for(int star=1 ; star<=n*2 -1 -(2*(row-1)); star++){
        cout<<"*";
    }
    cout<<endl;
}
}

int main() 
{
    int n = 8; 
   printNormal(n);
   printReverse(n);

    return 0;
}