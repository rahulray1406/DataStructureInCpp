//We have to return the Running Sum
//we can also solve this with partial_sum including <numeric>
#include<iostream>
using namespace std;
void runningSum(int arr[],int len)
{
    // int temp[len];  //This will cost O(N) extra space
    // temp[0]=arr[0];
    // for(int i=1;i<len;i++)
    // {
    //     temp[i]=temp[i-1]+arr[i];
    // }
    int i=1;
    while (i<len)   //O(1) Extra space;
    {
        arr[i]+=arr[i-1];
        i++;
    }
    
    cout<<"Running Sum of given Array is.."<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
} 
int main()
{
    int len;
    cout<<"Enter the Array Length"<<endl;
    cin>>len;
   int arr[len];
    cout<<"Enter the Array Elements"<<endl;
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    runningSum(arr,len);

}