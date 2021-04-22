/* if n>=1 then print numbers from n to 1*/
#include <bits/stdc++.h>
using namespace std;
void printNto1(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    printNto1(n - 1);
}
int main()
{
    int N;
    cin >> N;
    printNto1(N);
    return 0;
}