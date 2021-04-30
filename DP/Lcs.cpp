/*----------DP problem LCS Uisng Memoization-----------*/
// #include <bits/stdc++.h>
// using namespace std;
// int lcs(string &s, string &s1,const int &len,const int &len1)
// {
//     vector<vector<int>> dp(len + 1, vector<int>(len1 + 1, -1));
//     //Lookup
//     if (dp[len][len1] != -1)
//         return dp[len][len1];
//     //Base condition
//     if (len == 0 || len1 == 0)
//         dp[len][len1] = 0;
//     else
//     {
//         if (s[len - 1] == s1[len1 - 1])
//             dp[len][len1] = 1 + lcs(s, s1, len - 1, len1 - 1);
//         else
//         {
//             dp[len][len1] = max(lcs(s, s1, len - 1, len1), lcs(s, s1, len, len1 - 1));
//         }
//     }
//     return dp[len][len1];
// }
// int main()
// {
//     string S, S1;
//     cin >> S >> S1;
//     cout << lcs(S, S1, S.length(), S1.length())<<endl;
//     return 0;
// }


/*----------------------Lcs using tabulation------------------------------*/
#include<bits/stdc++.h>
using namespace std;
int lcs(string &S1,string &S2)
{   int len1=S1.length(),len2=S2.length();
    vector<vector<int>> dp (len1+1,vector<int>(len2+1));
    for(int i=0;i<=len1;i++)
    {
        dp[i][0]=0;
    }
    for(int j=0;j<=len2;j++)
    {
        dp[0][j]=0;
    }
    for(int i=1;i<=len1;i++)
    {
        for(int j=1;j<=len2;j++)
        {
            if(S1[i-1]==S2[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[len1][len2];
}
int main()
{
    string S1,S2;
    cin>>S1>>S2;
    cout<<lcs(S1,S2);
    return 0;
}