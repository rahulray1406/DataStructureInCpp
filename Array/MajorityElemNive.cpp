//Nive Solution O(n^2)
#include<iostream>
using namespace std;
int majorityElem(int arr[],int len)
{
    int major=len/2;
    int count=1;
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
            if(count>major+1)
            {
                return i;
            }
        }
    }
    return -1;
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
    if(majorityElem(arr,len)!=-1)
    {
        cout<<"Index of majority element is "<<majorityElem(arr,len)<<" And element is "<<arr[majorityElem(arr,len)]<<endl;
    }
    else
    {
        cout<<"No majority element -1";
    }
    
}
