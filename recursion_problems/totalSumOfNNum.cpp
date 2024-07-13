#include<bits/stdc++.h>
using namespace std;

void totalSum(int n, int sum){
   if(n < 1) {
    cout << sum << endl;
    return;
   }

   totalSum(n - 1, sum + n);
}

int main(){
    int n, sum = 0;
    cout << "Enter your number: ";
    cin >> n;
    totalSum(n, sum);
   return 0;
}