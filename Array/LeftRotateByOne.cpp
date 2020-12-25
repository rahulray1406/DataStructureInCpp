#include<iostream>
using namespace std;
void leftRotateOne(int arr[],int len);
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
    leftRotateOne(arr,len);
    cout<<"After Left Rotation by One"<<endl;
    for(int i=0;i<len;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}
void leftRotateOne(int arr[],int len)
{
    int temp=arr[0];
    for(int i=1;i<len;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[len-1]=temp;
}