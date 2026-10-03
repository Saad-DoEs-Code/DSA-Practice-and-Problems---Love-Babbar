#include <iostream>
#include <algorithm>
using namespace std;


void printArray(int arr[]){
    for (int i = 0; i < sizeof(arr); i++)
    {
        cout << arr[i] << endl;
    }
}

int main() {

    // Declaration & Initialisation: 
    // 1. Assign the Value = 0 to all the indices; Works only for Zeros
    int arr[3] = {0}; 
    cout << arr[0] << endl;
    
    // 2. To fill an entire array with a specific value i.e. 5
    int arr2[10];
    fill_n(arr2, 10, 5);
    cout << "N Filled Array: " << arr2[0] << endl;

    // 3. Assign the values to corresponding indices
    int arr3[3] = {4, 8, 1}; 
    cout << arr3[0] << endl;

    // Print an Array
    printArray(arr);
    printArray(arr2);
    printArray(arr3);
    
    return 0;
}