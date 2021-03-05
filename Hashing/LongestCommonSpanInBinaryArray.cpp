/*We have given two binary array we need to find the longest span having same sum in both the sub array
We can Assume lenght of two arrays are same */
#include<bits/stdc++.h>
using namespace std;
int commonSpan(vector<int> arr1,vector<int>arr2)
{
    int res=0,sum=0,presum=0;
    unordered_map<int,int> map;
    int temp[arr1.size()];
    for(int i=0;i<arr1.size();i++)
    {
        temp[i]=arr1[i]-arr2[i];
    }
    
    for(int i=0;i<arr1.size();i++)
    {
        presum+=temp[i];
        if(presum==sum)
        {
            res=i+1;
        }
        if(map.find(presum)==map.end())
        {
            map[presum]=i;
        }
        if(map.find(presum-sum)!=map.end())
        {
            res=max(res,i-map[presum-sum]);
        }
    }
    return res;
}
int main()
{
    vector<int> arr1={0, 1, 0, 0, 0, 0};
    vector<int> arr2={1, 0, 1, 0, 0, 1};
    cout<<commonSpan(arr1,arr2)<<endl;
}