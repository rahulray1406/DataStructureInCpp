/* remove duplicate Elements from Sorted Array*/
#include<iostream>

using namespace std;
int RemoveDup(int arr[], int len)
{ int res=1;
for(int i=1;i<len;i++)
{
    if(arr[res-1]!=arr[i])
    {
        arr[res]=arr[i];
        res++;
    }
}
return res;
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
     cout<<"Befor removal Array is"<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nAfter Removal"<<endl;
  int n=  RemoveDup(arr,len);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}