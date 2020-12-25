//Based on Kadens Algo returns Lenght of subArray having max even-odd elements
#include<iostream>
using namespace std;
int maxLenghtEvenOdd(int arr[],int len)
{
    int res=1,curr=1;
    for(int i=1;i<len;i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0)|| (arr[i]%2!=0 && arr[i-1]%2==0))
        {
            curr++;
            res=max(res,curr);
        }
        else
        {
            curr=1;
        }
        
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
    cout<<"max lenght of even-odd subarray is "<<maxLenghtEvenOdd(arr,len);
}