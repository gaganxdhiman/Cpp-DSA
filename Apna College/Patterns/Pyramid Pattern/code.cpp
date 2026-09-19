// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    
    int n =4;

   
    for(int row=1; row<=n; row++){
        for(int spaces =1; spaces<=n-row; spaces++){
            cout<<" ";
           
        }
   
        for(int num =1; num <= row ;num ++){
            cout<<num;
        }
        for(int k = row-1; k>=1; k--){
            if(row==1){
                break;
            }
            cout<<k;
            
        }
        
        cout<<endl;
    }
    
    return 0;
}