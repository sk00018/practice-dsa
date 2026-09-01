

    
// Pattern 11:number_palindrome_pattern

    int n = 4;
    
    for (int i = 1; i <= n; i++) {

          // num
        for (int j = 1; j <= i; j++) {
            cout << j ;
        }

        // Space
        for (int j = 1; j <= 2*(n-i); j++) {
            cout << " ";
        }

           // num
        for (int j = i; j >= 1; j--) {
            cout << j ;
        }

        cout << endl;
        
    }
