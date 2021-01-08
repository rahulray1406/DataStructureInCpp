/*We have given sorted rotated Array we have to find the given element X*/
#include<iostream>
using namespace std;
int bsearch(int arr[],int len, int ele)
{
    int low=0,high=len-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if (arr[mid]==ele)
        {
            return mid;
        }
        if(arr[mid]>arr[low])
        {
            if(ele>=arr[low] && ele<arr[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
            
        }
        else
        {
            if (ele>arr[mid] && ele<=arr[high])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
            
            
        }
        
        
    }
    return -1;
}

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
    cout<<"Element is present at "<<bsearch(arr,len,element);
}