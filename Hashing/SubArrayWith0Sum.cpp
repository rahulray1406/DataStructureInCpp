#include <bits/stdc++.h>
using namespace std;
bool subArrayZeroSum(int arr[], int len)
{
    unordered_map<int, int> map;
    int prefixSum = 0;
    for (int i = 0; i < len; i++)
    {
        prefixSum += arr[i];
        if (map.find(prefixSum) != map.end())
        {
            cout << "index " << map[prefixSum] + 1 << " " << i << endl;
            return true;
        }
        if (prefixSum == 0)
        {
            cout << "index " << 0 << " " << i << endl;
            return true;
        }
        map[prefixSum] = i;
    }
    return false;
}
int main()
{
    int len;
    cout << "Enter the len of array\n";
    cin >> len;
    int arr[len];
    cout << "Enter the array ellements\n";
    for (int i = 0; i < len; i++)
    {

        cin >> arr[i];
    }
    if (subArrayZeroSum(arr, len))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}