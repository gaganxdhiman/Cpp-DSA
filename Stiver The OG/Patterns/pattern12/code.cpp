#include <iostream>
using namespace std;

int main() 
{
    int n =4;
    
    for(int i =0; i<n; i++){
        for(int num = 1; num<=i+1; num++){
            cout<<num ;
        }
        for(int sp = 1; sp<= (n*2 -2)- (i*2 ); sp++){
            cout<<"-";
        }
        for(int num =i+1; num>=1; num--){
            cout<<num;
        }
        cout<<endl;
    }
    return 0;
}