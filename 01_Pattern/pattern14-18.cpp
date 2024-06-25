#include<bits/stdc++.h>
using namespace std;

/*
pattern14=>
A
A B
A B C
A B C D 

pattern-15=>
A B C D
A B C
A B
A 

pattern-16 =>
A
B B
C C C
D D D D 

pattern-17 =>
  A
  ABA
 ABCBA
ABCDCBA

pattern-18 =>


*/

void pattern14(int n){
    for(int i = 0; i<n; i++){
        for(char ch = 'A'; ch <= 'A' + i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern15(int n){
    for(int i = 0; i<n; i++){
        for(char ch = 'A'; ch <= 'A' + (n - i - 1) ; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern16(int n){
    for(int i = 0; i<n; i++){
        char ch = 'A' + i;
        for(int j = 0; j<=i; j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern17(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (2*i + 1)/2;
        for(int j = 1; j<=2*i+1; j++){
            cout << ch;
            if(j <= breakpoint) ch++;
            else ch--;
        }

        for(int j = 0; j<n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}

void pattern18(int n){
 for(int i = 0; i<n; i++){
    for(char ch = ('A'+n-1) - i; ch <= ('A' + n - 1); ch++){
        cout << ch << " ";
    }
    cout << endl;
 }
}

int main(){
     int n;
    cout << "Enter the number => ";
    cin >> n;
    pattern18(n);
   return 0;
}