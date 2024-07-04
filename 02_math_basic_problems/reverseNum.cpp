#include<bits/stdc++.h>
using namespace std;

int reversedNum(int n){
 int rev = 0;
 while(n > 0){
    int last_digit = n%10;
    rev = (rev * 10) + last_digit;
    n = n/10;
 } 
 return rev;
}

int main(){
   int n, res;
   cout << "Enter a number: ";
   cin >> n;
   res = reversedNum(n);
   cout << res;
   return 0;
}