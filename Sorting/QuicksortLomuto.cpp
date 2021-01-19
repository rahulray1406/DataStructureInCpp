/*Quick Sort using Lomuto Partitioning */
#include<iostream>
using namespace std;
int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return (i+1);
}
void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int p=partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
}
int main()
{
    int len;
    cout<<"Enter the len\n";
    cin>>len;
    int arr[len];
    cout<<"Enter the Array element\n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    quickSort(arr,0,len-1);
    cout<<"the sorted array : ";
    for(auto x : arr)
    {
        cout<<x<<" ";
    }
}