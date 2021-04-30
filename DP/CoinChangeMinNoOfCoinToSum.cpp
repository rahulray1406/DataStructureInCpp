/*Leetcode problem 322
https://leetcode.com/problems/coin-change/*/
#include<bits/stdc++.h>
using namespace std;
int minCoinCount(vector<int> &coins,int amount)
{   int len=coins.size();
    vector<int> dp(amount+1,INT16_MAX);
    dp[0]=0;
    for(int i=1;i<=amount;i++)
    {
        for(auto x:coins)
        {
            if(x<=i)
            {
                dp[i]=min(dp[i],dp[i-x]+1);
            }
        }
        
    }
    return dp.back()==INT16_MAX?-1:dp.back();
}
int main()
{
    vector<int> coins={2};
    int amount=3;
    cout<<minCoinCount(coins,amount)<<endl;
    return 0;
}