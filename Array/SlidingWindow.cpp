//Given Array of lenght len and K find the max sum of K consecutive element
#include<iostream>
using namespace std;
int sumKElem(int arr[],int len,int K)
{
    int temp_sum=0;
    for(int i=0;i<K;i++)
    {
       temp_sum+=arr[i];
    }
   int final_sum=temp_sum;
    for(int i=K;i<len;i++)
    {
        temp_sum+=(arr[i]-arr[i-K]);
        final_sum=max(final_sum,temp_sum);
    }
    return final_sum;
}
int main()
{
     int len,K;
    cout<<"enter the array lenght"<<endl;
    cin>>len;
    int arr[len];
    cout<<"Enter the elements"<<endl;
for(int i=0;i<len;i++)
{
    cin>>arr[i];
}
cout<<"Enter The K value"<<endl;
cin>>K;
cout<<"Sum of "<<K<<" Consecutive Elements is "<<sumKElem(arr,len,K);
}