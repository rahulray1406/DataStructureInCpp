#include<iostream>
using namespace std;
int totalWater(int arr[],int len)
{
    int res=0;
    int Lmax[len],Rmax[len];
    Lmax[0]=arr[0];
    for(int i=1;i<len;i++)
    {
        Lmax[i]=max(arr[i],arr[i-1]);
    }
    Rmax[len-1]=arr[len-1];
    for(int i=len-2;i>=0;i--)
    {
        Rmax[i]=max(arr[i],arr[i+1]);
    }
    for(int i=1;i<len-1;i++)
    {
        res+=(min(Lmax[i],Rmax[i])-arr[i]);
    }
    return res;
}
int main()
{
    int len;
    cout<<"enter arr lenght"<<endl;
    cin>>len;
    int arr[len];
    cout<<"Enter arr elements \n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    cout<<"Total Water you can store is "<<totalWater(arr,len)<<" Blocks"<<endl;
}