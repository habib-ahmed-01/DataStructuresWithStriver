// Optimal Solution
// D = D % len(arr)
// if D = 10
// len(arr) = 7
// D = 3 rotations required.

#include <bits/stdc++.h>
using namespace std;

void leftRotateArrayDtimes(int arr[], int arrLen, int D) {

    // Actual rotations
    D = D % arrLen;
    int temp[D];

    // Taking temp array of D elements
    for (int i = 0; i < D;i++) {
        temp[i] = arr[i];
    }

    // Shifting from D position of left 0
    for (int i = D; i < arrLen;i++) {
        arr[i - D] = arr[i];
    }

    // Adding temp elements at last
    for (int i = arrLen - D; i < arrLen; i++)
    {
        arr[i] = temp[i - (arrLen - D)];
    }

}

void PrintArray(int arr[], int arrLen) {
    for (int i = 0; i < arrLen; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    leftRotateArrayDtimes(arr, 10, 5);
    PrintArray(arr, 10);
    return 0;
}