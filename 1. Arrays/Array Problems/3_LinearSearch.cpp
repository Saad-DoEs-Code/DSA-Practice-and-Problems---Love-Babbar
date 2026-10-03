#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int j){

    for (int i = 0; i < n;i++){
        if(arr[i]==j){
            return true;
        }
    }
        return false;
}

int main(){

    int arr[10] = {1, 5, 2, 8, 34, 75, 29, 05, 90, 10};

    // Linear Search the Value of J
    bool result = linearSearch(arr, 10, 95);
    if(result){
        cout << "Value is Present";
    }
    else{
        cout << "Couldn't Find Value";
    }
    return 0;
}