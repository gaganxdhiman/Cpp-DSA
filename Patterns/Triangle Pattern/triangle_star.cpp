#include <iostream>
using namespace std;
int main(){
int n =5;

        for(char i = 'A'; i<'A'+n; i++){
           
            
            for(char j ='A'; j<=i; j++){
                    cout<<i;
            }
            cout<<endl;
        }

    return 0;
}


//With own logic and approach

// #include <iostream>
// using namespace std;
// int main(){
// int n =5;
// int rowCount=0;
//         for(char i = 'A'; i<65+n; i++){
//             ++rowCount;
//             cout<<rowCount;
            
//             for(char j =0; j<rowCount; j++){
//                     cout<<i;
//             }
//             cout<<endl;
//         }

//     return 0;
// }