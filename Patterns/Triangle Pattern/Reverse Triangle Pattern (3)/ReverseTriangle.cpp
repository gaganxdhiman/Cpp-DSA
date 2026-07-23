#include <iostream>
using namespace std;
int main(){

/* 
1
2 1
3 2 1
4 3 2 1
*/
        for(int i=1; i<=4; i++){
            cout<<i<<" ";
            for(int j =i-1;j>=1;j--){
                
                cout<<j<<" ";
            }
            cout<<endl;
        }

    return 0;
}