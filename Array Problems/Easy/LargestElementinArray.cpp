// Brute force
// - Sort it first then return the last element arr[n-1]

// Optimal Soln
// - Compare to find largest linearly

#include <bits/stdc++.h>
using namespace std;

int largestInArray(int arr[], int arrLen) {
    int largest = 0;
    for (int i = 0;i < arrLen;i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int arr[] = { 4,2,5,7,3,22,46,88,31,39,87 };
    cout << largestInArray(arr, 11) << endl;;
    return 0;
}