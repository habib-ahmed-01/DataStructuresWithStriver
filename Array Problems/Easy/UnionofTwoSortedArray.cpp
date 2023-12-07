// 2 pointer approach
// Union of 2 sorted arrays

#include <bits/stdc++.h>
using namespace std;

vector<int> UnionofTwoSortedArray(vector<int>& a, vector<int>& b) {

    // Answer Array
    vector<int> x;

    // 2 Pointer one on each array
    int pointer1 = 0;
    int pointer2 = 0;

    // Size of both the arrays
    int arr_Size_1 = a.size();
    int arr_Size_2 = b.size();

    // Loop through the array
    while (pointer1 < arr_Size_1 && pointer2 < arr_Size_2) {

        // If array 1 has smallest element
        if (a[pointer1] <= b[pointer2]) {

            // Answer array is empty at first, so 0 || union should have unique elements, hence last element should not be equal to the current element
            if (x.size() == 0 || x.back() != a[pointer1]) {

                // Add to the array if the above condition satifies
                x.push_back(a[pointer1]);
            }

            // Move the pointer ahead
            pointer1++;
        }

        // If array 1 has smallest element
        if (b[pointer2] <= a[pointer1]) {

            // Answer array is empty at first, so 0 || union should have unique elements, hence last element should not be equal to the current element
            if (x.size() == 0 || x.back() != b[pointer2]) {

                // Add to the array if the above condition satifies
                x.push_back(b[pointer2]);
            }

            // Move the pointer ahead
            pointer2++;
        }
    }

// If any of the array is exhausted at first, array1 < array2, we loop the remaining array and find unique in them and add to the Answer array

    // if array1 still have few elements left
    while (pointer1 < arr_Size_1) {
        if (a[pointer1] <= b[pointer2]) {
            if (x.back() != a[pointer1]) {
                x.push_back(a[pointer1]);
            }
            pointer1++;
        }
    }

    // if array2 still have few elements left
    while (pointer2 < arr_Size_2) {
        if (b[pointer2] <= a[pointer1]) {
            if (x.back() != b[pointer2]) {
                x.push_back(b[pointer2]);
            }
            pointer2++;
        }
    }


    return x;
}

void PrintArray(vector<int>& arr, int arrLen) {
    for (int i = 0; i < arrLen; i++)
    {
        cout << arr[i] << " ";
    }
}

int main() {
    vector <int> arr1 = { 1,2,3,4,5,6 };
    vector <int> arr2 = { 1,2,3,4,5,6, 7,10 };
    vector <int> x = UnionofTwoSortedArray(arr1, arr2);
    PrintArray(x , x.size());
    return 0;
}