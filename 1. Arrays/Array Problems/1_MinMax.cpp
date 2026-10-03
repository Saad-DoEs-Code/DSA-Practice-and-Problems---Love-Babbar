#include <iostream>
using namespace std;

int getMax(int arr[], int n){

    int max = INT_MIN;

    for (int i = 0; i < n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    // Returning MAX
    return max;
}

int getMin(int arr[], int n){

    int min = INT_MAX;

    for (int i = 0; i < n; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    // Return MIN
        return min;
}


int main()
{

    int arr[10] = {4, 12, 8, 10, 0 , -6, -200, 92, 868, -768};

    cout << "Max Value in array is: " << getMax(arr,10) << endl;
    cout << "Min Value in array is: " << getMin(arr,10) << endl;
    return 0;
}