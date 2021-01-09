/* We have given sorted array we have to find a Triplate for the given sum 
using two pointer approch*/
#include<iostream>
using namespace std;
bool isTriplate(int arr[],int len,int sum);
bool isPair(int arr[],int ptr1,int ptr2,int sum);
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
    if(!isTriplate(arr,len,sum))
    {
        cout<<"*--No--* Triplate exist for given sum";
    }
}
bool isTriplate(int arr[],int len,int sum)
{
    for(int i=0;i<len;i++)
    {
        if(isPair(arr,i+1,len-1,sum-arr[i]))
          { cout<<"Triplate found ";
            return true;}
        
    }
    return false;
}
bool isPair(int arr[],int ptr1,int ptr2,int sum)
{
    while (ptr1<ptr2)
    {
        if(arr[ptr1]+arr[ptr2]==sum)
          { 
            return true;}
        else if(arr[ptr1]+arr[ptr2]>sum)
            ptr2--;
        else
        {
            ptr1++;
        }
        
    }
    return false;
}