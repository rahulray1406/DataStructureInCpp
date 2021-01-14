/*In this we have given only One Repating element and smallest element is 0*/
#include<iostream>
using namespace std;
int isRepeating(int arr[],int len)
{
    int fast=arr[0]+1,slow=arr[0]+1;
    do
    {
        slow=arr[slow]+1;
        fast=arr[arr[fast]+1]+1;
    } while (slow!=fast);
    slow=arr[0]+1;
    while (slow!=fast)
    {   fast=arr[fast]+1;
        slow=arr[slow]+1;
        
    }
    return slow-1;  //returns the element
    
}
int main()
{
    int len;
    cout<<"Enter the length\n";
    cin>>len;
    int arr[len];
    cout<<"Enter the array element\n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Repeating element is "<<isRepeating(arr,len);
}