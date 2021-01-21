/*We have given an array in which each index value is represented as number of chocolates and given M which is number of children we have to distribute the chocolate to the children in these condition
i) Every child should get only one chocolate
ii) we have to minimize the diff b/w the Max chocolate given to a childe and Min chocolate given to a child*/
#include <bits/stdc++.h>
using namespace std;
int chocolatedis(int arr[],int len,int M)
{
    if(M>len)
    {
        return -1;
    }
    sort(arr,arr+len);
    int res=arr[M-1]-arr[0];
    for(int i=1;(i+M-1)<len;i++)
    {
        res=min(res,arr[i+M-1]-arr[i]);
    }
    return res;
}
int main()
{
     int len,m;
    cout<<"enter the len\n";
    cin>>len;
    int arr[len];
    cout<<"Enter the array element\n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the m value\n";
    cin>>m;
    cout<<"The min diff is "<<chocolatedis(arr,len,m);
}