#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int arrLen) {
    for (int i = 0; i <= arrLen - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}


void printArray(int arr[], int arrLen)
{
    for (int i = 0; i < arrLen; i++)
    {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = { 2, 3, 4, 6, 7, 5, 8, 1, 9, 10 };
    InsertionSort(arr, 10);
    printArray(arr, 10);
    return 0;
}