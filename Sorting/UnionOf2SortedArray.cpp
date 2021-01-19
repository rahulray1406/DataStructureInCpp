/*We have given two sorted array we need to find union of two sorted array*/
#include<iostream>
using namespace std;
void unionOf2SortedArray(int arr1[],int arr2[],int len1,int len2)
{
    int i=0,j=0;
    while (i<len1 && j<len2)
    {
        if(i>0 && arr1[i]==arr1[i-1])
        {   i++; continue;  }
        if(j>0 && arr2[j]==arr2[j-1])
        {   j++; continue;  }
        if(arr1[i]>arr2[j])
        {
            cout<<arr2[j]<<" ";
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            cout<<arr1[i]<<" ";
                i++;
        }
        else
        {
            cout<<arr1[i]<<" ";
            i++;j++;
        }
    }
    while (i<len1)
    {
        if(i>0 && arr1[i]!=arr1[i-1])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
    }
    while (j<len2)
    {
        if(j>0 && arr2[j]!=arr2[j-1])
        {
            cout<<arr2[j]<<" ";
            j++;
        }
    }
    
    

}
int main()
{
    int len1,len2;
    cout<<"Enter the Two Array length\n";
    cin>>len1>>len2;
    int arr1[len1],arr2[len2];
    cout<<"Enter the 1st array elements\n";
    for(int i=0;i<len1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the 2nd Array element\n";
    for(int i=0;i<len2;i++)
    {
        cin>>arr2[i];
    }
    cout<<"Union of Sorted array are : ";
    unionOf2SortedArray(arr1,arr2,len1,len2);
}