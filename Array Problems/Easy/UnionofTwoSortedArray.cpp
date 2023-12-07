// 2 pointer approach
// Union of 2 sorted arrays

#include <bits/stdc++.h>
using namespace std;

vector<int> UnionofTwoSortedArray(vector<int>& a, vector<int>& b) {
    vector<int> x;
    int pointer1 = 0;
    int pointer2 = 0;
    int arr_Size_1 = a.size();
    int arr_Size_2 = b.size();

    while (pointer1 < arr_Size_1 && pointer2 < arr_Size_2) {

        if (a[pointer1] <= b[pointer2]) {
            if (x.size() == 0 || x.back() != a[pointer1]) {
                x.push_back(a[pointer1]);
            }
            pointer1++;
        }

        if (b[pointer2] <= a[pointer1]) {
            if (x.size() == 0 || x.back() != b[pointer2]) {
                x.push_back(b[pointer2]);
            }
            pointer2++;
        }
    }


    while (pointer1 < arr_Size_1) {
        if (a[pointer1] <= b[pointer2]) {
            if (x.back() != a[pointer1]) {
                x.push_back(a[pointer1]);
            }
            pointer1++;
        }
    }

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