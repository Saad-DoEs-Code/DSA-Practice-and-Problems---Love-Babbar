#include <iostream>
using namespace std;

void swapAlternate(int arr[], int n){

    int first = 0;
    int second = 1;
    while(second<n)
    {
        swap(arr[first], arr[second]);
        first = first + 2;
        second = second + 2;
    }
}

void printArray(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate2(int arr[], int n){

    for (int i = 0; i < n; i=i+2){
        if(i+1<n){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){

    // Even Case
    cout << "Array of Even Length: " << endl;
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // swapAlternate(arr, 10);
    swapAlternate2(arr, 10);
    printArray(arr, 10);

    // Odd Case
    cout << "Array of Odd Length: " << endl;
    int brr[5] = {0, 1, 0, 1, 0};
    swapAlternate(brr, 5);
    printArray(brr, 5);


    return 0;
}