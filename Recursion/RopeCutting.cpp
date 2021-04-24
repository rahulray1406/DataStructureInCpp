#include <bits/stdc++.h>
using namespace std;
int maxCut(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    int res =max(max(maxCut(n - a, a, b, c), maxCut(n - b, a, b, c)), maxCut(n - c, a, b, c));
    if (res == -1)
        return -1;
    return res + 1;
}
int main()
{
    int N, A, B, C;
    cin >> N >> A >> B >> C;
    cout << maxCut(N, A, B, C)<<endl;
    return 0;
}