#include<bits/stdc++.h>
using namespace std;

void printName(int n){
    if(n == 0) return;
    cout << "Ganesha" << endl;
    printName(n - 1);
}

int main(){
    int n;
    cout << "Enter your number: ";
    cin >> n;
    printName(n);
   return 0;
}