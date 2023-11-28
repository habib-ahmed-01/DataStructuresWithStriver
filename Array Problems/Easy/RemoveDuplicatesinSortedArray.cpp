// Do not create new array
// Modify array only

// Brute Force
// Take elements one by one and add into set. 
// Take unique elements from set and add in beginning of array.
// [Adding into set + Iterating in array]  + [Taking elements from set and adding to array] O(N logN) + O(N) TIME COMPLEXITY
// SPACE O(N) Creating set

// Optimal Solution - Two Pointer approach

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int arrLen) {
    int pointer = 0;
    for (int i = 1; i < arrLen; i++)
    {
        if (arr[pointer] != arr[i]) {
            arr[pointer + 1] = arr[i];
            pointer++;
        }
    }

}

int main() {
    return 0;
}