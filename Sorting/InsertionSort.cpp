#include<iostream>
using namespace std;
void insertionSort(int arr[],int len)
{
    for(int i=1;i<len;i++)
    {
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        
    }
}
int main()
{
     int len;
    cout<<"Enter the lenght of array"<<endl;
    cin>>len;
    int arr[len];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr,len);
    cout<<"Sorted array is "<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}