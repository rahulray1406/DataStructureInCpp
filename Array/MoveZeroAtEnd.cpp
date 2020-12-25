#include<iostream>
using namespace std;

void Movezero(int arr[],int len)
{
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
    
}

int main()
{
    int len;
    cout<<"Enter the lenght"<<endl;
    cin>>len;
    int arr[len];
    cout<<"enter the elemnts"<<endl;
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
Movezero(arr,len);
cout<<"After moving 0's at end"<<endl;
for(int i=0;i<len;i++)
{
    cout<<arr[i]<<" ";
}
}