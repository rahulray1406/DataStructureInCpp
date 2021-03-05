/*Given an array and k -> window size we have to print elements occuring more then n/k times */
#include <bits/stdc++.h>
using namespace std;
void printNbyKOccurence(const vector<int> &arr, int k)
{
    unordered_map<int, int> map;
    for (int i = 0; i < arr.size(); i++)
    {
        map[arr[i]]++;
    }
    for (auto x : map)
    {
        if (x.second > arr.size() / k)
            cout << x.first << " ";
    }
}
int main()
{
    vector<int> arr = {10, 20, 30, 10, 10, 20};
    int k = 3;
    printNbyKOccurence(arr, k);
    cout << endl;
}