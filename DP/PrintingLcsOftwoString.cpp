#include<bits/stdc++.h>
using namespace std;
void lcs(string &S1,string &S2)
{
    int len1=S1.length(),len2=S2.length();
    vector<vector<int>> dp(len1+1,vector<int>(len2+1));
    for(int i=0;i<=len1;i++)
    {
        for(int j=0;j<=len2;j++)
        {
            if(i==0 || j==0)
                dp[i][j]=0;
            else if(S1[i-1]==S2[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
            
        }
    }
    //Logic for Printing
    int idx=dp[len1][len2];
    char arr[idx];
    arr[idx]='\0';
    int i=len1,j=len2;
    while (i>0 && j>0)
    {
        if(S1[i-1]==S2[j-1])
        {
            arr[idx-1]=S1[i-1];
            i--;j--;idx--;
        }
        else if(dp[i-1][j]>dp[i][j-1])
            i--;
        else
            j--;
    }
    cout<<"LCS is "<<arr<<" of length "<<dp[len1][len2]<<endl;
    
}
int main()
{
    string S1,S2;
    cin>>S1>>S2;
    lcs(S1,S2);
    return 0;
}