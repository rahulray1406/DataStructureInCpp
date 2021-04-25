/*The Problem is there are N people in circle we need to kill Kth person in every itteration and
has to be done in circular manner operation 
We need to find position of the survivor*/
#include <bits/stdc++.h>
using namespace std;
int SurvivorPos(int N, int K)  //This Fxn assumes that the position starts from 0 to N-1;
{
    if (N == 1)
        return 0;
    return (SurvivorPos(N - 1, K) + K) % N;
}
// int Pos1toN(int N,int K) //This fxn assumes that pos is from 1 to N
// {
//    return SurvivorPos(N,K)+1;
// }
int main()
{
    int N, K;
    cin >> N >> K;
    cout << SurvivorPos(N, K)<<endl;
    // cout<< Pos1toN(N,K);
    return 0;
}
