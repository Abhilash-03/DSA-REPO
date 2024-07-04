#include<bits/stdc++.h>
using namespace std;

void extractNum(int n){
   while(n > 0){
      int last_digit = n%10;
      cout << last_digit << endl;
      n = n/10;
   }
}

int main(){
   int n;
   cout << "Enter a number: ";
   cin >> n;
   return 0;
}