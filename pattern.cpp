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






// // // Pattern 11:binary trangle Pattern
//     int n = 5;

//     for (int i = 1; i <= n; i++) {

//         for (int j = 1; j <= i; j++) {
//             if ((i + j) % 2 == 0)
//                 cout << "1";
//             else
//                 cout << "0";
//         }

//         cout << endl;
//     }




    
// // Pattern 11:number_palindrome_pattern

//     int n = 4;
    
//     for (int i = 1; i <= n; i++) {

//           // num
//         for (int j = 1; j <= i; j++) {
//             cout << j ;
//         }

//         // Space
//         for (int j = 1; j <= 2*(n-i); j++) {
//             cout << " ";
//         }

//            // num
//         for (int j = i; j >= 1; j--) {
//             cout << j ;
//         }

//         cout << endl;
        
//     }



// //  problem 12: Number triangle
 
//      int num = 1;
//      int n = 5;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << num << " " ;
//          num = num + 1;
//         }
//         cout << endl;
//     }





// // //  problem 13: Alphabet Increasing Pattern
 
//      int n = 5;
     
//     for (int i = 1; i <= n; i++) {
//          for (int j = 1; j <= i; j++){
//             cout << char('A'+j-1) << " " ;
//          }
//         cout << endl;
//     }



//  // //  problem 15: Reverse Alphabet triangle Pattern
//     for (int i = 5; i >= 1; i--) {
//         for (int j = 0; j < i; j++) {
//             cout << char('A' + j);
//         }
//         cout << endl;
//     }




// // //  problem 16:Repeated Alphabet Pattern
      
//       int n = 5;

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++) {
//             cout << char('A' + i);
//         }
//         cout << endl;
//     }




// // // //  problem 17: Palindrome Alphabet Pattern

//         int n = 5;

//     for (int i = 0; i < n; i++) {

//         // Increasing part
//         for (int j = 0; j <= i; j++) {
//             cout << char('A' + j);
//         }

//         // Decreasing part
//         for (int j = i - 1; j >= 0; j--) {
//             cout << char('A' + j);
//         }

//         cout << endl;
//     }




// // //  problem 18:Alphabet pyrmaid Pattern

//     int n = 5;

//     for (int i = 1; i <= n; i++) {

//         // Spaces
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }

//         // Alphabets
//         for (char ch = 'A' + n - i; ch <= 'E'; ch++) {
//             cout << ch << " ";
//         }

//         cout << endl;
//     }

 


//  // //  problem 19: Hollow Hourglass Star Pattern

//     int n = 5;

//     // Upper half
//     for (int i = n; i >= 1; i--) {

//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }

//         // Middle space
//         for (int j = 1; j <= 2 * (n - i); j++) {
//             cout << " ";
//         }

//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     // Lower half
//     for (int i = 1; i <= n; i++) {

//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }

//         // Middle space
//         for (int j = 1; j <= 2 * (n - i); j++) {
//             cout << " ";
//         }

//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }

//         cout << endl;
//     }

    



// // //  problem 20: Hollow Diamond Star Pattern

//     int n = 5;

//     // Upper half
//     for (int i = 1; i <= n; i++) {

//         // Left stars
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }

//         // Middle spaces
//         for (int j = 1; j <= 2 * (n - i); j++) {
//             cout << " ";
//         }

//         // Right stars
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     // Lower half
//     for (int i = n - 1; i >= 1; i--) {

//         // Left stars
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }

//         // Middle spaces
//         for (int j = 1; j <= 2 * (n - i); j++) {
//             cout << " ";
//         }

//         // Right stars
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }

//         cout << endl;
//     }

  



//  problem 20:Hollow Rectangle Square Pattern


    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 4; j++) {
            if (i == 1 || i == n || j == 1 || j == 4)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    
    return 0;
}
