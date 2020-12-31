//Finding the Missing number in An Array
//Using XOR Operation
#include<iostream>
using namespace std;
int missingNumber(int arr[],int len)
{
    int x1=arr[0];
    int x2=1;
    for(int i=1;i<len;i++)
    {
        x1=x1^arr[i];
    }
    for(int i=2;i<=len+1;i++)
    {
        x2=x2^i;
    }
    return (x1^x2);
}
int main()
{
    int len;
    cout<<"Enter the array length"<<endl;
    cin>>len;
    int arr[len];
    cout<<"Enter the Array Elements"<<endl;
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Missing NUmber Is -> "<<missingNumber(arr,len);
}