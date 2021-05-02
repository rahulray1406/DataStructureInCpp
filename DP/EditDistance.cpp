/*Given two Strings we need to find min operations to make 1st string to 2nd string uind Dp*/
#include<bits/stdc++.h>
using namespace std;
int minOperations(string &S1,string &S2,int m,int n)
{
    vector<vector<int>>dp (m+1,vector<int>(n+1));
    for(int i=0;i<=m;i++)
        dp[i][0]=i;
    for(int j=0;j<=n;j++)
        dp[0][j]=j;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(S1[i-1]==S2[j-1])
                dp[i][j]=dp[i-1][j-1];
            else
            {
                dp[i][j]=1+ min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);    
            }
            
        }
    }
    return dp[m][n];
}
int main()
{
    string S1,S2;
    S1="horse";S2="ros";
    cout<<minOperations(S1,S2,S1.length(),S2.length())<<endl;
    return 0;
}
