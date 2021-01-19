/*We have given two sorted array we need to find common elements among them*/
#include<iostream>
using namespace std;
void intersection2Array(int arr1[],int arr2[],int len1,int len2)
{
    int i=0,j=0;
    while (i<len1 && j<len2)
    {
        if(i>0 && arr1[i]==arr1[i-1]) //for duplicate elements
        {
            i++;
            continue;
        }
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if (arr1[i]>arr2[j])
        {
            j++;
        }
        else
        {
            cout<<arr1[i]<<" ";
            i++;
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
    cout<<"Intersecting Elements of 2 arrays is/are : ";
    intersection2Array(arr1,arr2,len1,len2);
}