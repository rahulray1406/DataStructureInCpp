/*We have given an unsorted array with K value 
time O(n*log sum)*/
#include<iostream>
using namespace std;
bool isFeasible(int arr[],int len,int K,int ans)
{
    int req=1,sum=0;
    for(int i=0;i<len;i++)
    {
        if(sum+arr[i]>ans)
        {
            req++;
            sum=arr[i];
        }
        else
        {
            sum+=arr[i];
        }    
    }
    return(req<=K);
}
int minPage(int arr[],int len,int K)
{
    int sum=0,mx=0;
    for(int i=0;i<len;i++)
    {
        sum+=arr[i];
        mx=max(mx,arr[i]);
    }
    int low=mx,high=sum,res=0;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(isFeasible(arr,len,K,mid))
        {
            res=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        
    }
    return res;
}
int main()
{
    int len,K;
    cout<<"Enter the length of array \n";
    cin>>len;
    cout<<"Enter the K value\n";
    cin>>K;
    int arr[len];
    cout<<"Enter the values in the array\n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    cout<<"Minimum page Value is "<<minPage(arr,len,K);
}