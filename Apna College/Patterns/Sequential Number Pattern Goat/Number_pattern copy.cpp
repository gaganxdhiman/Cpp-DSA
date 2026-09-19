#include <iostream>
using namespace std;
int main (){
// 1 2 3
// 4 5 6
// 7 8 9

  
    int skip = 5;
    for(int i=1; i<=9; i++){
    
        cout<<i<< " ";
        for(int j =i+1; j<= i+(skip-1); j++){
            cout<<j<<" ";
        }
        cout<<endl;
        i+=(skip-1);
       
    }

    return 0;
}