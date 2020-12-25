#include<iostream>
using namespace std;
bool CheckSorted(int arr[],int len)
{
    for(int i=1;i<len;i++)
    {
        if(arr[i]<arr[i-1])
        return false;
    }
    return true;
}
int main()
{
    int len;
    cout<<"enter the lenght "<<"\n";
    cin>>len;
    int arr[len];
    cout<<"Enter the elements "<<"\n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
   if( CheckSorted(arr,len)==1)
   {
       cout<<"True";
   }
   else
   {
       cout<<"False";
   }
   
}