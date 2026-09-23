//BEST CODE FOR LOGIC AND DSA

#include <iostream>
using namespace std;


int main(){

    int n = 5; 

    for(int i =1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(i ==1 || i == n || j==1 || j== n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}


#include <iostream>
using namespace std;
// ***** n = 5
// *   * 
// *   * 
// *   * 
// ***** 

// n= 4
// ****
// *  *
// *  *
// ****

// n = 2
// **
// **




int main() // My code but remvoing extra star variable that i had in BELOW code that is previous code i did
{
    int n = 4; 
    
    for(int i = 1; i<=n; i++){
        
        if(i==1 || i==n){
          for(int j = 1; j<=n; j++ ){
            cout<<"*";
        }
        }
        
       else{
        cout<<"*";
        for(int j = 1; j<=n-2; j++){
            cout<<"-";
        }
       cout<<"*";

        }
        cout<<endl;
       }
    

    return 0;
}






#include <iostream>
using namespace std;


// ***** n = 5
// *   * 
// *   * 
// *   * 
// ***** 

// n= 4
// ****
// *  *
// *  *
// ****

// n = 2
// **
// **

int main() // MY CODE THAT I DID
// 1. unnessary star variable, and extra for loop for just printing one star at end
// 2. SEE code of gpt below
{
    int n = 4; 
    
    for(int i = 1; i<=n; i++){
        int star = 1;
        if(i==1 || i==n){
            star = n;
        }
        for(int j = 1; j<=star; j++ ){
            cout<<"*";
        }
        if(star!= n){
            for(int j = 1; j<=n-2; j++){
                cout<<"-";
            }
            for(int j = 1; j<=1; j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
}




