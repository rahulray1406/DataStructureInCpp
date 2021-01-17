#include<iostream>
using namespace std;
void bubbleSort(int arr[],int len)
{
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)  //len-i-1 is small optimization
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
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
    bubbleSort(arr,len);
    cout<<"Sorted array is "<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
}