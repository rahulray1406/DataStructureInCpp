/* We have given an sorted array we have to find there exist a pair for the given sum
We will use Two pointer approch to solve this problem*/
#include<iostream>
using namespace std;
bool givenSum(int arr[],int len,int sum)
{
    int ptr1=0,ptr2=len-1;
    while(ptr1<ptr2)
    {
        if(arr[ptr1]+arr[ptr2]==sum)
        {    
            cout<<"Pair exist for sum "<<sum<<" at position ("<<ptr1<<","<<ptr2<<")";
            return true;
        }
        if(arr[ptr1]+arr[ptr2]>sum)
        {
            ptr2--;
        }
        else
        {
            ptr1++;
        }
        
    }
    return false;
}
int main()
{
    int len,sum;
    cout<<"Enter the lenght of array"<<endl;
    cin>>len;
    int arr[len];
    cout<<"Enter the Array element"<<endl;
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the sum\n";
    cin>>sum;
    if(!givenSum(arr,len,sum))
    {
        cout<<"*--No--* Pair exist for given sum";
    }
    
    
}