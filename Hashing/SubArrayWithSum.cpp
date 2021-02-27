#include <bits/stdc++.h>
using namespace std;
bool subArrayGivenSum(int arr[], int len, int sum)
{
    unordered_map<int, int> map;
    int preSum = 0;
    for (int i = 0; i < len; i++)
    {
        preSum += arr[i];
        if (preSum == sum)
        {
            cout << "index "
                 << "[ " << 0 << ", " << i << "]" << endl;
            return true;
        }
        if (map.find(preSum - sum) != map.end())
        {
            cout << "index [" << map[preSum - sum] + 1 << " , " << i << "]" << endl;
            return true;
        }
        map[preSum] = i;
    }
    return false;
}
int main()
{
    int len, sum;
    cout << "Enter the len of array\n";
    cin >> len;
    int arr[len];
    cout << "Enter the array elements \n";
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the sum\n";
    cin >> sum;
    if (subArrayGivenSum(arr, len, sum))
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO" << endl;
    }
}