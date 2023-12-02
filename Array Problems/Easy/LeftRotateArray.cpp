// Optimal Solution

#include <bits/stdc++.h>
using namespace std;

void LeftRotateArray(int arr[], int arrLen) {
    int temp = arr[0];
    for (int i = 1; i < arrLen; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[arrLen - 1] = temp;
}

void PrintArray(int arr[], int arrLen) {
    for (int i = 0; i < arrLen; i++)
    {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    LeftRotateArray(arr, 10);
    PrintArray(arr, 10);
    return 0;
}