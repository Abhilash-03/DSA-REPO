#include<bits/stdc++.h>
using namespace std;

// using two pointers
// void reverseArr(int i, int j, int arr[]){
//     if(i>=j) return;
//     swap(arr[i], arr[j]);
//     reverseArr(i+1, j-1, arr);
// }

// using single pointer
void reverseArr(int i, int n, int arr[]){
    if(i>= n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverseArr(i+1, n, arr);
}



int main(){
    int i, j;
    int arr[] = {8, 4, 2, 9, 1};
    int n = size(arr);
//    reverseArr(0, n-1, arr); // using two pointers
   reverseArr(0, n, arr); // using one pointers
  for(int i = 0; i<n; i++) cout << arr[i] << " ";
   return 0;
}