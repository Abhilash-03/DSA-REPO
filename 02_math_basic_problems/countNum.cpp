#include<bits/stdc++.h>
using namespace std;

// T.C => o(n); //brute force
int countNum(int n){
  int cnt = 0;
   while(n > 0){
      cnt++;
      n = n/10;
   }
   return cnt;
}

//T.C => O(log10(n)) //optimized
int countNum2(int n){
  int cnt = log10(n);

  return cnt;
}

int main(){
   int n, res;
   cout << "Enter a number: ";
   cin >> n;
   res = countNum2(n) + 1;
   cout << res;
   return 0;
}