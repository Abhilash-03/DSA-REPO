#include<bits/stdc++.h>
using namespace std;

void isArmstrong(int n){
 int dubN = n;  
 int sum = 0;
 int k = to_string(n).length();
 while(n > 0){
    int digit = n%10;
    sum += pow(digit, k);
    n = n/10;
 } 

 if(dubN == sum) cout<< "Armstrong number";
 else  cout << "Not an armstrong number";
}   

int main(){
   int n, res;
   cout << "Enter a number: ";
   cin >> n;
   isArmstrong(n);
   return 0;
}