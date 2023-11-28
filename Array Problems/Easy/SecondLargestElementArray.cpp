// Brute Force O(nlogN) + O(N)
// - Sort the array and check from back, and find second largest
// {1,2,3,4,5,7,7} --> 5 is second largest

// Better soln O(2N)
// 2 - pass solution. Find largest and then find Slargest but it should not be largest
// 1 pass : largestElement
// 2 pass: if(arr[i] > sLargest && arr[i] != largestElement) sLargest = arr[i]

// Optimal solution

#include <bits/stdc++.h>
using namespace std;

int Secondlargest(int arr[], int arrLen) {
    int largest = arr[0];
    int sLargest = INT_MIN;
    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] > largest) {
            sLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>sLargest){
            sLargest = arr[i];
        }
    }
    return sLargest;
}

int main() {
    int arr[] = { 11,2,1,34,567,5,32,34,778,84,32,114,2221 };
    cout << Secondlargest(arr, 13) << endl;
    return 0;
}