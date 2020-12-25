#include<iostream>
using namespace std;
int Deletion(int arr[],int len,int del)
{
    for(int i=0;i<len;i++)
    {
        if(arr[i]==del)
        break;

    
    if(i==len)
    return len;
    for(int j=i;j<len-1;j++)
    {
        arr[i]=arr[i+1];
    }
    }
    return len-1;
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
    cout<<"Enter the elemnt to be deleted"<<"\n";
    int del;
    cin>>del;
    cout<<Deletion(arr,len,del);
}