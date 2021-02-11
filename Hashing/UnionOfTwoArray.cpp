/*we have given two unsorted array need to find number of union/distinct elements of both the arrays
 time O(m+n) space O(m+n)*/
#include<iostream>
#include<unordered_set>
using namespace std;
int getUnion(int arr1[],int arr2[],int len1,int len2)
{
    unordered_set <int> us(arr1,arr1+len1);
    for(int i=0;i<len2;i++)
    {
        us.insert(arr2[i]);
    }
    
    // for(auto x:us)   this is to show the elements
    // {  
    //     cout<<x<<" ";
    // }
    // cout<<"\n";
    return (us.size());
}
int main()
{
    int len1,len2;
    cout<<"Enter two lenghts\n";
    cin>>len1>>len2;
    int arr1[len1],arr2[len2];
    cout<<"enter 1st array ele\n";
    for(int i=0;i<len1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"2nd arr ele\n";
    for(int i=0;i<len2;i++)
    {
        cin>>arr2[i];
    }
    cout<<"Union of two arrays are "<<getUnion(arr1,arr2,len1,len2)<<"\n";
}