/*We have given a sorted array and we have to find number of pairs exist for the given sum 'sum'
will use 2 pointer approch*/
#include<iostream>
using namespace std;
int isPair(int arr[],int len,int sum)
{
    int ptr1=0,ptr2=len-1,count=0;
    while (ptr1<ptr2)
    {
       if(arr[ptr1]+arr[ptr2]==sum)
       {
           count++;
           ptr1++;
           ptr2--;
       }
       else if(arr[ptr1]+arr[ptr2]>sum)
       {
           ptr2--;
       }
       else
       {
           ptr1++;
       }
       
    }
    return count;
}
int main()
{
    int len,sum;
    cout<<"Enter the lenght of array"<<endl;
    cin>>len;
    int arr[len];
    cout<<"Enter the Array element"<<endl;
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the sum\n";
    cin>>sum;
    cout<<"Count of Pair is "<<isPair(arr,len,sum)<<" ";
}