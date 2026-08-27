#include<iostream>
using namespace std;
int main() {

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




    
// // Pattern 9:Reverse star pyr. Pattern

//     int n = 5;

//     for (int i = 0; i < n; i++) {

//           // Spaces
//         for (int j = 0; j < i; j++) {
//             cout << " ";
//         }

//         // Stars
//         for (int j = 0; j < 2*(n-i); j++) {
//             cout << "*";
//         }

//            // Spaces
//         for (int j = 0; j < i; j++) {
//             cout << " ";
//         }

//         cout << endl;
//     }






// // Pattern 11:binary trangle Pattern
    int n = 5;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0)
                cout << "1 ";
            else
                cout << "0 ";
        }

        cout << endl;
    }


    return 0;
}
