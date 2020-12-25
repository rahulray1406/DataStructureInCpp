//Kadanes Algo for largest sum of contigous SubArray it returns only the largest sum.
#include<iostream>
using namespace std;
int largestSum(int arr[],int len)
{
    int final_sum=0,current_sum=0;
    for(int i=0;i<len;i++)
    {
        current_sum+=arr[i];
        if(current_sum<0)
        {
            current_sum=0;
        }
        else if(final_sum<current_sum)
        {
            final_sum=current_sum;
        }
    }
    return final_sum;
}
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
    cout<<"Largest Sum of Contigous Sub-Array is "<<largestSum(arr,len)<<endl;
}