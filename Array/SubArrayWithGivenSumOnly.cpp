// A sliding window technique 
//in this we have given a unsorted array of non -ve elements with the sum and have to check if a subarray exist with the given sum.
#include<iostream>
using namespace std;
bool checkIfexist(int arr[],int len,int sum)
{
    int curr_sum=arr[0],start=0,i;
    for(i=1;i<len;i++)
    {
        while (curr_sum>sum && start<i-1)
        {
            curr_sum-=arr[start];
            start++;
        }
        if (curr_sum==sum) 
        {
            return true;
        }
        if (i<len)
        {
            curr_sum+=arr[i];
        }       
    }
    return(curr_sum==sum);
}
int main()
{
     int len,sum;
    cout<<"enter the array lenght"<<endl;
    cin>>len;
    int arr[len];
    cout<<"Enter the elements"<<endl;
for(int i=0;i<len;i++)
{
    cin>>arr[i];
}
cout<<"Enter the sum value"<<endl;
cin>>sum;
if(checkIfexist(arr,len,sum))
{
    cout<<"Yes Subarray exist of sum "<<sum;
}
else
{
    cout<<"No Subarray exist of sum "<<sum;
}

}