#include<iostream>
using namespace std;
void maxFreq(int arr[], int len)
{   int freq=1,i=1;
    while (i<len)
    {
        while (i<len && arr[i]==arr[i-1])
        {
            freq++;
            i++;
        }
        cout<<"Element is-> "<<arr[i-1]<<" and freq is-> "<<freq<<endl;
        freq=1;i++;
    }
    
}
int main()
{
    int len;
     cout<<"enter the lenght of array"<<endl;
     cin>>len;
     int arr[len];
     cout<<"Enter the element of array"<<endl;
     for (int i =0;i<len;i++)
     {
         cin>>arr[i];
     }
     maxFreq(arr,len);
}