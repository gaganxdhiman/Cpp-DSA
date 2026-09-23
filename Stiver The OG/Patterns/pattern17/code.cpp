#include <iostream>
using namespace std;

int main() 
{
   
    for(int i = 1; i<=4; i++){
        for(int ch = 1; ch<=i; ch++ ){
            cout<<char('A'+i-1);
        }
        cout<<endl;
    }
    return 0;
}