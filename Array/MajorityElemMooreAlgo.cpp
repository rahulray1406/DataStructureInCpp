// Moores Voting Algo for Majority element, It works by selecting one elements as a Candidate and checking if it is in majority 
#include<iostream>
using namespace std;
int majorityElem(int arr[],int len)
{
    int res=0,count=1;
    for(int i=1;i<len;i++)
    {
        if(arr[res]==arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count==0)
        {
            res=i; count=1;
        }
        
    }
  int   count1=0;
    for(int i=0;i<len;i++)
    {
        if(arr[res]==arr[i])
        {
            count1++;
        }
        
    }
    if(count1<=len/2)
        {
            res=-1;
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
     if(majorityElem(arr,len)!=-1)
    {
        cout<<"Index of majority element is "<<majorityElem(arr,len)<<" And element is "<<arr[majorityElem(arr,len)]<<endl;
    }
    else
    {
        cout<<"No majority element -1";
    }
}