/*Tower of Hanoi*/
#include <bits/stdc++.h>
using namespace std;
void Toh(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout << "Move " << n << " from " << A << " to " << C << endl;
        return;
    }
    Toh(n - 1, A, C, B);
    cout << "Move " << n << " form " << A << " to " << C << endl;
    Toh(n - 1, B, A, C);
}
int main()
{
    int N;
    cin >> N;
    Toh(N, 'A', 'B', 'C');
    return 0;
}