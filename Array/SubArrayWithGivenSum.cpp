//Sliding Window Technique is used
// In this we have K and the sum given we need to find if there exist a subarray with the given Sum 'sum'
#include<iostream>
using namespace std;
int sumExistOrNot(int arr[],int len,int K,int sum)
{   int curr_sum=0;
    for (int i = 0; i < K; i++)
    {
        curr_sum+=arr[i];
        if(sum==curr_sum)
        {
            return sum;
        }
    }
   // int final_sum=curr_sum;

    for(int i=K;i<len;i++)
    {
        curr_sum+=(arr[i]-arr[i-K]);
        //final_sum=max(final_sum,curr_sum);
        if(sum==curr_sum)
        {
            return sum;
        }
    }
    return -1;
}
int main()
{   
     int len,K,sum;
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
cout<<"Enter the sum value"<<endl;
cin>>sum;
if(sumExistOrNot(arr,len,K,sum)==sum)
 {
     cout<<"Sub array exist of size "<<K<<" and sum "<<sumExistOrNot(arr,len,K,sum);
 }
else
 {
     cout<<"*--No--* sub array exist of size "<<K<<" and sum "<<sum;
 }

}