#include<bits/stdc++.h>
using namespace std;

/*
pattern-7 => 
    *
   ***
  *****
 *******
*********

pattern-8 => 
*********
 *******
  *****
   ***
    *
    
 pattern-9=> pattern7 + pattern8
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *   
    
pattern-10 =>
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*    

*/

void pattern7(int n){
    for(int i = 0; i<n; i++){
        // space
        for(int j = 0; j<n-i-1; j++){
            cout << " ";
        }

        // stars
        for(int j = 0; j<2*i + 1; j++){
            cout << "*";
        }

        // space
        for(int j = 0; j<n-i-1; j++){
            cout << " ";
        }

        cout << endl;

    }
}

void pattern8(int n){
    for(int i = 0; i<n; i++){
        // space
        for(int j = 0; j<i; j++){
            cout << " ";
        }

        // stars
        for(int j = 0; j<2*n - (2*i + 1); j++){
            cout << "*";
        }

        // space
        for(int j = 0; j<i; j++){
            cout << " ";
        }

        cout << endl;

    }
}

void pattern9(int n){
    pattern7(n);
    pattern8(n);
}

void pattern10(int n){
    for(int i = 1; i<= 2*n-1; i++){
        int stars = i;
        if(i > n) stars = 2* n - i;
        for(int j = 1; j<= stars; j++){
            cout << "* ";
        }

        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter the number => ";
    cin >> n;
    pattern10(n);

   return 0;
}