#include<bits/stdc++.h>
using namespace std;

// brute force
void checkPrime2(int n){
    int cnt = 0;
    for(int i = 1; i<=n; i++){
        if(n%i == 0) cnt++;
    }
    if(cnt == 2) cout << "true";
    else cout << "false";
}

// optimized
void checkPrime(int n){
    int cnt = 0;
    for(int i = 1; i*i<=n; i++){
        if(n%i == 0){
            cnt++;
           if(n/i != i) cnt++;
        }
    }
    if(cnt == 2) cout << "true";
    else cout << "false";
}

int main(){
    int n;
   cout << "Enter a number: ";
   cin >> n;
   checkPrime(n);
}