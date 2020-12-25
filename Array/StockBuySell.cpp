#include<iostream>
using namespace std;
int maxProfit(int arr[],int len)
{
int profit=0;
for(int i=1;i<len;i++)
{
    if(arr[i]>arr[i-1])
    {
        profit+=(arr[i]-arr[i-1]);
    }
}

return profit;
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
    cout<<"Max Profit is "<<maxProfit(arr,len)<<endl;
}