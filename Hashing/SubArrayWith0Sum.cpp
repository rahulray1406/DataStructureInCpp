#include<bits/stdc++.h>
using namespace std;
bool subArrayZeroSum(int arr[],int len)
{   unordered_set<int> set;
    int prefixSum=0;
    for(int i=0;i<len;i++)
    {   prefixSum+=arr[i];
        if(set.find(prefixSum)!=set.end())
            return true;
        if(prefixSum==0)
            return true;
        set.insert(prefixSum);
    }
    return false;

}
int main()
{
    int len;
    cout<<"Enter the len of array\n";
    cin>>len;
    int arr[len];
    cout<<"Enter the array ellements\n";
    for(int i=0;i<len;i++)
    {
       
        cin>>arr[i];
    }
    if(subArrayZeroSum(arr,len))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}