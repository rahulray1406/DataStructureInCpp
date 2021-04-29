/*Nth fibonachi using memoization*/
#include<bits/stdc++.h>
using namespace std;
int Nfib(int N)
{
    vector<int> dp(N+1,-1);
    if(dp[N]==-1)
    {   
        if(N==0||N==1)
            dp[N]= N;
        else
        {
            dp[N]=Nfib(N-1)+Nfib(N-2);
        }
    }
    return dp[N];
}
int main()
{
    int N;
    cin>>N;
    cout<<Nfib(N)<<endl;
    return 0;
}