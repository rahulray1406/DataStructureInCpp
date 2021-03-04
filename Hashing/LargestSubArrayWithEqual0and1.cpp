/*The problem is to find the largest Sub array with equal number of 0's and 1's 
the idea is to use PrefixSum,Hashing, replace 0 with -1 if Allowed to change the given array*/
#include<bits/stdc++.h>
using namespace std;
int largestSubArrayWithEqual0And1(vector<int>&arr)
{
    int presum=0,res=0,sum=0;
    unordered_map<int,int>map;
    //if Allowed to change the Array or if the array is of type int not bool then 
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==0)
            arr[i]=-1;
            presum+=arr[i];
        if(presum==sum)
        {
            res=i+1;
        }
        if(map.find(presum)==map.end())
            map[presum]=i;
        if(map.find(presum-sum)!=map.end())
            res=max(res,i-map[presum-sum]);
    }
    

    return res;
}
int main()
{
    vector<int> arr={1,0,1,1,0,1};
    cout<<largestSubArrayWithEqual0And1(arr)<<endl;
    
}