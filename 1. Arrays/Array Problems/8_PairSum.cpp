#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;

                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));

                ans.push_back(temp);
            }
        }
    }

    return ans;
}

int main()
{
    // Example array
    vector<int> arr = {2, -3, 3, 3, -2};

    // Required sum
    int s = 0;

    // Call the function
    vector<vector<int>> result = pairSum(arr, s);

    // Print the pairs
    cout << "Pairs whose sum is " << s << ":" << endl;

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i][0] << " " << result[i][1] << endl;
    }

    return 0;
}