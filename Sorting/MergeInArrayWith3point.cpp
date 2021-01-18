/*we have given an array with three pointer low,mid,high elements b/w low to mid is sorted and elements b/w mid+1 to high is sorted we have to sort the array from low to high*/
#include<iostream>
using namespace std;
void merge(int arr[],int len,int low,int mid,int high)
{
    int n=mid-low+1,m=high-mid;
    int a1[n],a2[m];
    for(int i=0;i<n;i++)
    {
        a1[i]=arr[low+i];
    }
    for(int j=0;j<m;j++)
    {
        a2[j]=arr[n+j];
    }
    int i=0,j=0,k=0;
    while (i<n && j<m)
    {
        if(a1[i]<=a2[j])
        {
            arr[k]=a1[i];
            k++; i++;
        }
        else
        {
            arr[k]=a2[j];
            k++; j++;
        }
        
    }
    while (i<n)
    {
        arr[k]=a1[i];
        k++;
        i++;
    }
    while (j<m)
    {
        arr[k]=a2[j];
        k++;
        j++;
    }
    
    cout<<"The sorted array in \n";
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int len,mid,low,high;
    cout<<"enter the len\n";
    cin>>len;
    cout<<"Enter the low value\n";
    cin>>low;
    cout<<"Enter the mid value\n";
    cin>>mid;
    cout<<"Enter the high value\n";
    cin>>high;
    int arr[len];
    cout<<"Enter the array element\n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    merge(arr,len,low,mid,high);
}