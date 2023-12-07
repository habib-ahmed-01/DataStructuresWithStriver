// Similar to Union of array

#include <bits/stdc++.h>
using namespace std;

vector<int> IntersectionofTwoSortedArray(vector<int>& a, vector<int>& b) {
    vector<int> x;
    int pointer1 = 0;
    int pointer2 = 0;
    int arr_size_1 = a.size();
    int arr_size_2 = b.size();

    while (pointer1 < arr_size_1 && pointer2 < arr_size_2) {
        
        if(a[pointer1]<b[pointer2]){
            pointer1++;
        }

        if(b[pointer2]<a[pointer2]){
            pointer2++;
        }

        if(a[pointer1]==b[pointer2]){
            x.push_back(a[pointer1]);
            pointer1++;
            pointer2++;
        }
    }

    return x;
}

void PrintVector(vector <int> arr, int arrLen) {
    for (int i = 0; i < arrLen; i++)
    {
        cout << arr[i] << " ";
    }
}

int main() {

    vector <int> arr = {1,2,3,4,5,6,7};
    vector <int> arr2 = {5,6,7,8,9,10};
    vector <int> x = IntersectionofTwoSortedArray(arr,arr2);
    PrintVector(x, x.size());
    return 0;
}