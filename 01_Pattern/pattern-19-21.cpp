#include<bits/stdc++.h>
using namespace std;

/*
pattern-19=>
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

pattern-20 =>
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

pattern-21=>
*****
*   *
*   *
*   *
*****

pattern-22 =>
4444444
4333334
4322234
4321234
4322234
4333334
4444444

*/

void pattern19(int n){
    int initSpace = 0;
    for(int i = 0; i< n; i++){
        for(int j = 1; j<= n-i; j++){
           cout << "*";
        }
        for(int j = 0; j< initSpace; j++){
            cout << " ";
        }
        for(int j = 1; j<= n-i; j++){
            cout << "*";
        }
        initSpace += 2;
        cout << endl;
    }
     initSpace = 2*n - 2;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<= i; j++){
           cout << "*";
        }
        for(int j = 0; j< initSpace; j++){
            cout << " ";
        }
        for(int j = 1; j<= i; j++){
            cout << "*";
        }
        initSpace -= 2;
        cout << endl;
    }
}

void pattern20(int n) {
    int initSpace = 2*n - 2;
    for(int i = 1; i<=2*n-1; i++){
       int stars = i;
       if(i > n) stars = 2*n-i;
       for(int j = 1; j<=stars; j++){
        cout << "*";
       }
       for(int j = 1; j<=initSpace; j++){
        cout << " ";
       }
       for(int j = 1; j<=stars; j++){
        cout << "*";
       }
       cout << endl;
       if(i < n) initSpace -= 2;
       else initSpace += 2;
    }
}

void pattern21(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i == 0 || j==0 || i == n-1 || j == n-1){
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }
}

void pattern22(int n){
   for(int i = 0; i<2*n-1; i++){
    for(int j =0; j<2*n-1; j++){
        int top = i;
        int left = j;
        int right = (2*n - 2) - j;
        int down = (2*n - 2) - i;
       cout << n - min(min(top,down), min(left, right));
    }
    cout << endl;
   }
}

int main(){
       int n;
    cout << "Enter the number => ";
    cin >> n;
    pattern22(n);
   return 0;
}