/*BY inversion we mean i<j & ar[i]>ar[j] solving using merge sort approch*/
#include<iostream>
using namespace std;
int countAndMerge(int arr[],int low,int mid,int high)
{
    int n=mid-low+1,m=high-mid;
    int left[n],right[m];
    for(int i=0;i<n;i++)
    {
        left[i]=arr[i+low];
    }
    for(int j=0;j<m;j++)
    {
        right[j]=arr[mid+1+j];
    }
    int res=0,i=0,j=0,k=low;
    while (i<n && j<m)
    {
        if(left[i]<=right[j])
        {   arr[k]=left[i];
            i++;k++;
        }
        else
        {
            arr[k]=right[j];
            j++; k++;
            res=res+(n-i);
        }
    }
    while (i<n)
    {
        arr[k]=left[i];
        i++;k++;
    }
    while (j<m)
    {
        arr[k]=right[j];
        j++;k++;
    }
    
    return res;
    
}
int countInversion(int arr[],int low,int high)
{
    int res=0;
    if(low<high)
    {
        int mid=(low+high)/2;
        res+=countInversion(arr,low,mid);
        res+=countInversion(arr,mid+1,high);
        res+=countAndMerge(arr,low,mid,high);
    }
    return res;
}
int main()
{
    int len;
    cout<<"Enter the len \n";
    cin>>len;
    int arr[len];
    cout<<"Enter the array element\n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    cout<<"Count of Inversion is "<<countInversion(arr,0,len-1);
}