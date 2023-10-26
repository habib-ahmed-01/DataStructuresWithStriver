#include <bits/stdc++.h>
using namespace std;

void ReverseArray(int arr[], int start, int end){
    if(start<end){
        swap(arr[start], arr[end]);
        ReverseArray(arr, start+1, end-1);
    }
}

void printArray(int arr[], int n) {
   cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}

int main(){
    int arr[] = { 1,2,3,4,5,6,7 };
    ReverseArray(arr, 0, 6);
    printArray(arr, 7);
    return 0;
}