#include <iostream>
using namespace std;



int main() 
{
    int n = 8;
    for(int i= 1; i<=n*2-1; i++){
        int until;
        if(i<=n){
            until = i;
        }
        else{
            until = i - ((i-n) * 2);
        }
        for(int star = 1; star<=until; star++){
            
            cout<<"*";
        }
        cout<<endl;
    }
   

    return 0;
}