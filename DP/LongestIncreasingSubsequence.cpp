#include<bits/stdc++.h>
using namespace std;
int cilIdx(int tail[],int l,int r,int k)
{
    while (r>l)
    {
        int m=l+(r-l)/2;
        if(tail[m]>=k)
            r=m;
        else
        {
            l=m+1;
        }
    }
    return r;
}
int lemgthOfLIS(int arr[],int n)
{
    int tail[n];int len=1;
    tail[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>tail[len-1])
        {
            tail[len]=arr[i];
            len++;
        }
        else
        {
            int c=cilIdx(tail,0,len-1,arr[i]);
            tail[c]=arr[i];
        }
    }
    return len;

}
int main()
{
    int arr[]={10,9,2,5,3,7,101,18};
    int n=8;
    cout<<lemgthOfLIS(arr,n)<<endl;
    return 0;
}