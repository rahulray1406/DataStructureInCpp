/* We have given an Infinite Sized Array in this we have to perform searching operation
By using Unbounded Binary Searching Algo we can perform the searching operation in O(Log(pos)) time*/
#include<iostream>
using namespace std;
int bsearch(int arr[],int low,int high,int ele)
{
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==ele)
         return mid;
         else if (arr[mid]>ele)
         {
             high=mid-1;
         }
         else if (arr[mid]<ele)
         {
             low=mid+1;
         }
         
         
    }
    return -1;
}
/*This is the function for infinite size array searching*/
int searchelement(int arr[],int ele)
{
    if(arr[0]==ele)
    {return 0;}
    int i=1;
    while (arr[i]<ele)
    {
        i=i*2;
    }
    if(arr[i]==ele)
        {
            return i;
        }
    return(bsearch(arr,i/2+1,i-1,ele));
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
    cout<<"The element you search for is at index "<<searchelement(arr,element);
}