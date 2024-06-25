#include<bits/stdc++.h>
using namespace std;

/*
pattern-11 =>
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

pattern-12=>
1        1
12      21
123    321
1234  4321
1234554321

pattern-13=>
1 
2 3 
4 5 6 
7 8 9 10

*/

void pattern11(int n){
    for(int i = 0; i<n; i++){
        int start = 1;
        if(i % 2 == 0 ) start = 1;
        else start = 0;

        for(int j = 0; j<=i; j++){
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern12(int n){
    for(int i = 1; i<= n; i++){
        // print numbers
        for(int j = 1; j<=i; j++){
            cout << j;
        }
        // print space
        for(int j = 1; j<=2*n - 2* i; j++){
            cout << " ";
        }
        // print numbers
        for(int j = i; j >= 1; j--){
            cout << j;
        }

        cout << endl;
    }
}

void pattern13(int n){
    int num = 1;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter the number => ";
    cin >> n;
    pattern13(n);
   return 0;
}