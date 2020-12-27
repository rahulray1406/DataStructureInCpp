//It uses Prefix Sum technique
#include<iostream>
using namespace std;
int isEquilibrium(int arr[],int len)
{
    int sum=0;
    for(int i=0;i<len;i++)
    {
        sum+=arr[i];
    }
    int L_sum=0;
    for(int i=0;i<len;i++)
    {
        if(L_sum==sum-arr[i])
        {
            return i;
        }
        L_sum+=arr[i];
        sum-=arr[i];
    }
    return -1;
}
int main()
{
    int len;
    cout<<"Enter the Array length\n";
    cin>>len;
    int arr[len];
    cout<<"Enter the array elements\n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    if(isEquilibrium(arr,len)!=-1)
   { cout<<"Index of the Equilibrium point is "<<isEquilibrium(arr,len);}
   else
   {
       cout<<"*--No--* Equilibrium point exist";
   }
   
}