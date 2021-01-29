/*We have given a string we need to find the longest substring having distinct character*/
#include<iostream>
#include<vector>
using namespace std;
int largestDist(string &S)
{
    int res=0;
    int i=0;
    vector<int> prev(256,-1);
    for(int j=0;j<S.length();j++)
    {
        i=max(i,prev[S[j]]+1);
        int maxEnd=j-i+1;
        res=max(res,maxEnd);
        prev[S[j]]=j;
    }
    return res;
}
int main()
{
    string S;
    cout<<"Enter the String\n";
    getline(cin,S);
    cout<<"Lenght of largest Substring with Distinct char is "<<largestDist(S);
}