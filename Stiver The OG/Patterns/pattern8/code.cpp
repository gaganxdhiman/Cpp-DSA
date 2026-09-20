#include <iostream>
using namespace std;

int main() 
{
    int n = 5;
    for(int i = 0; i<n; i++){
        for(int sp = 0; sp<i; sp++){
            cout<<" ";
        }
        for(int star = 1; star<= (n*2-1) - 2*(i) ; star++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}