#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int arrLen)
{
    int didSwap = 0;
    for (int i = 0; i <= arrLen - i; i++)
    {
        for (int j = 0; j < arrLen - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        if(didSwap==0) {
            cout<<"Break!";
            break;
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

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    BubbleSort(arr, 10);
    printArray(arr, 10);
    return 0;
}
