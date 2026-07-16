#include <iostream>
using namespace std;
int main (){
  
    int skip = 4;
    for(char i='A'; i<='Z'; i++){
    
        cout<<i<< " ";
        for(char j =i+1; j<= i+(skip-1); j++){
            if(j == 91){ // to exist at Z
                break;
            }
            cout<<j<<" ";
        }
        cout<<endl;
        i+=(skip-1);
       
    }


    return 0;
}