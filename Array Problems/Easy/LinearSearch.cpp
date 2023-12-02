// Optimal Solution

#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int arrLen, int num){
    for(int i=0;i<arrLen; i++){
        if(arr[i]==num) return i;
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,6,33,16,89,65,346,9};
    int num = 346;
    cout<< "The Index of Element: " << LinearSearch(arr, 10, num) << endl;
    return 0;
}