#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int arrLen)
{
    for (int i = 0; i <= arrLen - 2; i++)
    {
        int min = i;
        for (int j = i; j <= arrLen - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

void printArray(int arr[], int arrLen){
    for(int i=0;i<arrLen;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {2, 3, 4, 6, 7, 5, 8, 1, 9, 10};
    SelectionSort(arr, 10);
    printArray(arr, 10);

    return 0;
}