#include<bits/stdc++.h>
using namespace std;

int isPalindrome(int n){
 int dubN = n;  
 int rev = 0;
 while(n > 0){
    int last_digit = n%10;
    rev = (rev * 10) + last_digit;
    n = n/10;
 } 
 if(dubN == rev) return true;
 else return false;
}

int main(){
   int n, res;
   cout << "Enter a number: ";
   cin >> n;
   res = isPalindrome(n);
   cout << res;
   return 0;
}