/*
GCD => GREATEST COMMON DIVISOR
T.C => o(log min(a,b));
*/

#include<bits/stdc++.h>
using namespace std;

void gcd(int a, int b){
    while(a > 0 && b > 0){
        if(a > b) a = a%b;
        else b = b%a;
    }
    if(a == 0) cout << b;
    else cout << a;
}


int main(){
    int a, b;
   cout << "Enter a number: ";
   cin >> a >> b;
   gcd(a, b);
   return 0;
}