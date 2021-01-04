/* Again using Binary Search technique we can solve it in O(logn) time*/
#include<iostream>
using namespace std;
int lastOcc(int arr[],int len,int ele)
{ int low=0,high=len-1;
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
    cout<<"Index of Last Occurence of the element is at "<<lastOcc(arr,len,element);
}