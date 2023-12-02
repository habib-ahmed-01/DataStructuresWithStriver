// Brute force -> Iterate and get all non zeroes in one array, then add them to first orgArray and then add zeroes
// Optimal Solution -> 2 pointer approach
// [1,0,2,3,0,0,9]

#include <bits/stdc++.h>
using namespace std;

void MoveZeroesAtEnd(int arr[], int arrLen) {
    int pointer = -1;

    // find the first zero
    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] == 0) {
            pointer = i;
            break;
        }
    }

    // If zero exists
    if (pointer != -1) {
        for (int i = pointer + 1; i < arrLen; i++)
        {
            if (arr[i] != 0) {
                swap(arr[pointer], arr[i]);
                pointer++;
            }
        }

    }

}

void PrintArray(int arr[], int arrLen) {
    for (int i = 0; i < arrLen; i++)
    {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = { 1,0,4,2,5,0,0,9,0,8,7,0 };
    MoveZeroesAtEnd(arr, 12);
    PrintArray(arr, 12);
    return 0;
}