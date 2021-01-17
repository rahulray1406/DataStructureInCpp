#include<iostream>
using namespace std;
void selectionSort(int arr[],int len)
{
    for(int i=0;i<len-1;i++)
    {
        int min_idx=i;
        for(int j=i+1;j<len;j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx=j;
            }
        }
        swap(arr[min_idx],arr[i]);
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
    selectionSort(arr,len);
    cout<<"Sorted array is "<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
}