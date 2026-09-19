#include <iostream>
using namespace std;

int main() 
{
    int n = 5;
    for(int i = 0; i<n; i++){
        for(int sp = 0; sp<n -i -1; sp++){
            cout<<" ";
        }
        for(int star = 0; star< i + (i+1); star++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}