#include<bits/stdc++.h>
using namespace std;

// void PrintLinearlyToN(int i, int n){
//    if(i > n) return;
//    cout << i << endl;
//    PrintLinearlyToN(i+1, n);
// }

void PrintLinearlyNTo1(int n){
   if(n == 0) return;
   cout << n << endl;
   PrintLinearlyNTo1(n-1);
}

int main(){
    int n, i = 1;
    cout << "Enter your number: ";
    cin >> n;
    PrintLinearlyNTo1(n);
   return 0;
}