#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    for (int i = 0; i < n;i++){
        if(start<=end)
        {
            // swap
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}

void printArray(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Even Length Case
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse(arr, 10);
    printArray(arr, 10);

    // Odd Length Case
    int brr[5] = {1, 2, 3, 4, 5};
    reverse(brr, 5);
    printArray(brr, 5);

    return 0;
}