#include<iostream>
#include<algorithm>
using namespace std;
int countmaxMeeting(int arr[],int dep[],int len)
{
    sort(arr,arr+len);
    sort(dep,dep+len);
    int i=1,j=0,res=1,count=1;
    while(i<len && j<len)
    {
        if(arr[i]<=dep[j])
        {
            count++; i++;
        }
        else
        {
            count--; j++;
        }
        res=max(res,count);
    }
    return res;
}
int main()
{
    int len;
    cout<<"Enter the len\n";
    cin>>len;
    int arr[len],dep[len];
    cout<<"Enter the Arrival array\n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Departure array\n";
    for(int i=0;i<len;i++)
    {
        cin>>dep[i];
    }
    cout<<"you can MAX meeting "<<countmaxMeeting(arr,dep,len)<<" Guest";
}