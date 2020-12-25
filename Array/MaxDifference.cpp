#include<iostream>
using namespace std;
int maxDiff(int arr[],int len)
{
    int res=arr[1]-arr[0]; int minVal=arr[0];
    for(int j=1;j<len;j++)
    {
        res=max(res,arr[j]-minVal);
        minVal=min(minVal,arr[j]);
    }
    return res;
}
int main()
{
    int len;
     cout<<"enter the lenght of array"<<endl;
     cin>>len;
     int arr[len];
     cout<<"Enter the element of array"<<endl;
     for (int i =0;i<len;i++)
     {
         cin>>arr[i];
     }
   cout<<"Maximum Difference is "<<maxDiff(arr,len);

}