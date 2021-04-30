/*Given array of coins and a sum need to find count of total combination of coins to make sum */
#include<bits/stdc++.h>
using namespace std;
int getCoin(vector<int> coins, int len,int sum)
{
    vector<vector<int>>dp (sum+1,vector<int>(len+1));   
    //Base
    for(int i=0;i<=sum;i++)
        dp[i][0]=0;
    for(int i=0;i<=len;i++)
        dp[0][i]=1;
    //Table filling
    for(int i=1;i<=sum;i++)
    {
        for(int j=1;j<=len;j++)
        {
            dp[i][j]=dp[i][j-1];
            if(coins[j-1]<=i)
                dp[i][j]+=dp[i-coins[j-1]][j];
        }
    }
    return dp[sum][len];
}
int main()
{
    int sum=10;
    vector<int> coins={2,5,3,6};
    cout<<"Total ways you can make "<<sum<<" is "<<getCoin(coins,coins.size(),sum)<<endl;
    return 0;
}