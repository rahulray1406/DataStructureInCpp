// Again this problem can be solved using Kaden's Algo
#include<iostream>
using namespace std;
int maxSum(int arr[],int len);
int totalSum(int arr[],int len);
int main()
{
     int len;
    cout<<"enter arr lenght"<<endl;
    cin>>len;
    int arr[len];
    cout<<"Enter arr elements \n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    cout<<"Max Circular subarray sum is "<<totalSum(arr,len)<<endl;
}
int maxSum(int arr[],int len)
{
    int Cur_res=0, finalResult=0;
    for(int i=0;i<len;i++)
    {    Cur_res+=arr[i];
        if(Cur_res<0)
        {
            Cur_res=0;
        }
        else if(finalResult<Cur_res)
        {
            finalResult=Cur_res;
           
        }
    }
    return finalResult;
}
int totalSum(int arr[],int len)
{
    int NormalMax=maxSum(arr,len);
    if(NormalMax<0)
    {return NormalMax;}
    int arr_sum=0;
    for(int i=0;i<len;i++)
    {
        arr_sum+=arr[i];
        arr[i]= -arr[i];
    }
    int Circular_max=arr_sum+maxSum(arr,len);
    return(max(NormalMax,Circular_max));
}