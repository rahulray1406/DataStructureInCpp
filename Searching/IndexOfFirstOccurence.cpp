/* Our Task is to Find the Index of first occurence of the element in a Sorted Array
In O(Logn) time Idea is to Implement using Binary Search*/
#include<iostream>
using namespace std;
int firstOccOfElem(int arr[],int len,int ele)
{   int low=0,high=len-1;
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
    cout<<"Index of First Occurence of the element is at "<<firstOccOfElem(arr,len,element);
}