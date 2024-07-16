#include<bits/stdc++.h>
using namespace std;

bool reverseArr(int i, int n, string str){
    if(i>= n/2) return true;
    if(str[i] != str[n-i-1]) return false;
    swap(str[i], str[n-i-1]);
   return reverseArr(i+1, n, str);
    
}

int main(){
    int i, j;
    string str = "madam";
    int n = size(str);
    bool result = reverseArr(0, n, str); // using one pointers
    cout << result;

   return 0;
}