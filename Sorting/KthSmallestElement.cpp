/*We have to find Kth smallest element in Unsorted Array*/
#include<iostream>
using namespace std;
int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if (arr[j]<pivot)
        {
            i++;
            swap(arr[j],arr[i]);
        }
        
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}
int kthsmele(int arr[],int len,int k)
{   int low=0,high=len-1;
    while (low<=high)
    {
        int p=partition(arr,low,high);  //Lomuto Partition
        if(p==k-1)
        {
            return p;
        }
        else if(p>k-1)
        {
            high=p-1;
        }
        else
        {
            low=p+1;
        }
    }
    return -1;
    
}
int main()
{
    int len,K;
    cout<<"enter the len\n";
    cin>>len;
    int arr[len];
    cout<<"Enter the array element\n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the K value\n";
    cin>>K;
   cout<<"Kth Smallest is "<<arr[kthsmele(arr,len,K)];
}