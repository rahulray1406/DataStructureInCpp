// A sliding window technique 
//in this we have given a unsorted array of non -ve elements with the sum and have to check if a subarray exist with the given sum.
#include<iostream>
using namespace std;
int checkIfexist(int arr[],int len,int sum)
{
    int curr_sum=0,start=0;
    for(int i=0;i<len;i++)
    {   curr_sum+=arr[i];
        while (curr_sum>sum)
        {
            curr_sum-=arr[start];
            start++;  
        }
        if (curr_sum==sum) 
        {    cout<<start+1<<" "<<i+1;
              return 1;           
        }   
    }
    
    return -1;
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
if(checkIfexist(arr,len,sum)==-1)
{
     cout<<"No subarray exist of sum "<<sum;
}
}