/* we have given 2 sorted array and need to merge them in sorted order without using extra space
O(len1+len2) time taken*/
#include<iostream>
using namespace std;
void merge2Array(int arr1[],int arr2[],int len1,int len2)
{
    int i=0,j=0;
    while (i<len1 && j<len2)
    {
        if(arr1[i]<=arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
        else
        {
            cout<<arr2[j]<<" ";
            j++;
        }
        
    }
    while (i<len1)
    {
        cout<<arr1[i]<<" ";
        i++;
    }
    while (j<len2)
    {
        cout<<arr2[j]<<" ";
        j++;
    }
    
    
}
int main()
{
    int len1,len2;
    cout<<"Enter Length 1 and Length 2"<<endl;
    cin>>len1>>len2;
    int arr1[len1],arr2[len2];
    cout<<"Enter 1st Sorted Array"<<endl;
    for(int i=0;i<len1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter 2nd Sorted Array"<<endl;
    for(int j=0;j<len2;j++)
    {
        cin>>arr2[j];
    }
    cout<<"Sorted array is "<<endl;
    merge2Array(arr1,arr2,len1,len2);
}
