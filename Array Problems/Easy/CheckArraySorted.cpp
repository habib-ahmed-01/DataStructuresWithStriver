#include <bits/stdc++.h>
using namespace std;

bool checkSorted(int arr[], int arrLen) {
    for (int i = 1; i < arrLen; i++)
    {
        if (arr[i] >= arr[i - 1]) {}
        else {
            return false;
        }
    }
    return true;

}

int main() {
    int arr[] = {1,2,3,4,5,6,1,8,9,20};
    cout<<checkSorted(arr, 10)<<endl;
    return 0;
}