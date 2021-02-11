/*We have given unsorted array need to find the pair of given sum*/
#include<iostream>
#include<unordered_set>
using namespace std;
bool findPair(int arr[],int len,int sum)
{   int count=1;
    unordered_set <int> us;
    for(int i=0;i<len;i++)
    {
        if(us.find(sum-arr[i])!=us.end())
        {  
            return true;
        }
        us.insert(arr[i]);
    }
    return false;
}
int main()
{
     int len,sum;
    cout<<"Enter the len of array\n";
    cin>>len;
    int arr[len];
    cout<<"Enter the array element\n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }   
    cout<<"Enter the sum\n";
    cin>>sum;
   if(findPair(arr,len,sum)) 
   {
       cout<<"YES\n";
   }
   else
   {
       cout<<"NO\n";
   }
   
}