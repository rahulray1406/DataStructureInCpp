/* We have to count number of duplicate element in an sorted array
Using First occurence and last occurence we can solve this in 
O(log n) time*/
#include<iostream>
using namespace std;
int firstOcc(int arr[],int len,int ele);
int lastOcc(int arr[],int len,int ele);
int Occ(int arr[],int len,int ele);
int main()
{
     int len,element;
    cout<<"Enter the lenght of array"<<endl;
    cin>>len;
    int arr[len];
    cout<<"Enter the Array element"<<endl;
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched"<<endl;
    cin>>element;
    cout<<"Count of "<<element<<" in array is "<<Occ(arr,len,element);
}
int Occ(int arr[],int len,int ele)
{
    int first=firstOcc(arr,len,ele);
    if(first==-1)
        return 0;
    else
    {
        return(lastOcc(arr,len,ele)-first+1);
    }
    
}
int firstOcc(int arr[],int len,int ele)
{
    int low=0,high=len-1;
    while (low<=high)
    {
      int  mid=(low+high)/2;
        if(arr[mid]<ele)
        {
            low=mid+1;
        }
        else if(arr[mid]>ele)
        {
            high=mid-1;
        }
        else
        {
            if(mid==0 || arr[mid]!=arr[mid-1])
            {
                return mid;
            }
            else
            {
                high=mid-1;
            }
            
        }
        
    }
    return -1;
}
int lastOcc(int arr[],int len,int ele)
{
int low=0,high=len-1;
    while (low<=high) 
    {
        int mid=(low+high)/2;
        if(arr[mid]>ele)
        {
            high=mid-1;
        }
        else if(arr[mid]<ele)
        {
            low=mid+1;
        }
        else
        {
            if(mid==len-1 || arr[mid+1]!=arr[mid])
            return mid;
            else
            {
                low=mid+1;
            }
            
        }
        
    }
    return -1;
}