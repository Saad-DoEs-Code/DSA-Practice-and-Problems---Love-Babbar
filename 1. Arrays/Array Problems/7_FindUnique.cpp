#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    int ans = 0;

    // XOR all elements
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{
    int arr[] = {2, 3, 1, 6, 3, 6, 2};

    int size = sizeof(arr) / sizeof(arr[0]);

    int unique = findUnique(arr, size);

    cout << "Unique element: " << unique << endl;

    return 0;
}