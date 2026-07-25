// 1 1 1 1
//   2 2 2 
//     3 3
//       4
#include <iostream>
using namespace std;
int main() {
    int n =4;

    for(int row=0;row <n; row++){
    
    for(int space =0; space<row; space++){
        cout<<" ";
    }
    
        for(int num=n-row; num>=1; num--){
            cout<<row+1;
        }
        cout<<endl;
    }
    

    return 0;
}