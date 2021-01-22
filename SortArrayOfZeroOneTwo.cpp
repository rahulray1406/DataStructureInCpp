/*We have given Array of 0's ,1's and 2's need to sort them
Also Known as Dutch National Flag Algo*/
#include<iostream>
using namespace std;
void sort012(int arr[],int len)
{
    int low=0,mid=0,high=len-1;
    while (mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[high]);
            high--;
        }
        
    }
    
}
int main()
{
    int len;
    cout<<"Enter the len of arrya\n";
    cin>>len;
    cout<<"Enter the Array elements only 0's,1's,and 2's\n";
    int arr[len];
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    sort012(arr,len);
    for(auto x : arr)
    {
        cout<<x<<" ";
    }
}