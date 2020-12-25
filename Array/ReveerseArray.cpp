#include<iostream>
#include<vector>
using namespace std;
void ReverseArr(int arr[],int len);
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
    ReverseArr(arr,len);
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void ReverseArr(int arr[],int len)
{
    int low=0; int high=len-1;
    while (low<high)
    {
    //    int temp=arr[low];
    //    arr[low]=arr[high];
    //    arr[high]=temp;
    swap(arr[low],arr[high]);
       low++;
       high--;
    }
    

}