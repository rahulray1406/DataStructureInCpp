/*Given an array and sum need to count how many subset forms given sum*/
#include <bits/stdc++.h>
using namespace std;
int CountOfSubset(int arr[], int N, int sum)
{
    if (N == 0)
        return (sum == 0) ? 1 : 0;
    return (CountOfSubset(arr, N - 1, sum) + CountOfSubset(arr, N - 1, sum - arr[N - 1]));
}
int main()
{
    int N, sum;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    cin >> sum;
    cout << CountOfSubset(arr, N, sum) << endl;
}