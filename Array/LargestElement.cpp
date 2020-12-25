#include<iostream>
using namespace std;
int Lergest(int arr[],int len)
{
    int largest=arr[0];
    for(int i=0;i<len;i++)
    {
        if(arr[i]>largest)
        largest=arr[i];
    
    }
    return largest;
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
cout<<"The Largest Element is "<<Lergest(arr,len);
}