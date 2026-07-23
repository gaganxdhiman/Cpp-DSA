
#include <iostream>
using namespace std;
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
int main() {
    int num=1; // num for counting the already printed numbers of J LOOP
    int n= 7; // dynamic number to get the pattern
    for(int i=1; i<=n ;i++){
        
        int jLoopElementCount = 0; //element count for J LOOP to break when RowNum = ele count 
        
        for(int j=num; j<=n*5;j++){
            cout<<j<<" ";
            num++;
            ++jLoopElementCount;
            
            if(jLoopElementCount ==i){
                 break;
                
            }
        }
        cout<<endl;
    }
        
    return 0;
}