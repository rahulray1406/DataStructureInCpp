#include<iostream>
using namespace std;
int Second(int arr[],int len)
{
int res=-1;
int largest=0;
for(int i=1;i<len;i++)
{
    if(arr[i]>arr[largest])
   { res=largest;
    largest=i; }
    else if (arr[i]!=arr[largest])
    {
        if(res==-1 || arr[i]>arr[res])
        {
            res=i;
        }
    }    
}
cout<<arr[res]<<" at index ";
return res;
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
    cout<<"Second Largest Element is "<<Second(arr,len);
}
