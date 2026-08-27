#include<iostream>
using namespace std;
int main(){

// // Pattern 8: Pyramid Pattern  
//     int n = 5;


//     for (int i=0; i<n ; i++){
//         // space
//         for (int j = 0 ; j < n-i-1 ; j++){
//             cout << " ";
//         }
//         // star
//         for (int j = 0 ; j < 2*i+1 ; j++){
//             cout << "*" ;
//         }
//        // space
//         for (int j = 0 ; j < n-i-1 ; j++){
//             cout << " ";
//         }
//         cout << endl;
//     }




    
// Pattern 9:Reverse star pyr. Pattern

    int n = 5;

    for (int i = 0; i < n; i++) {

          // Spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Stars
        for (int j = 0; j < 2*(n-i); j++) {
            cout << "*";
        }

           // Spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        cout << endl;
    }


    return 0;
}
