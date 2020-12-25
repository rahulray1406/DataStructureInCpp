//Given a Binary array either of 0 and 1;
#include<iostream>
using namespace std;
int maxCon1s(bool arr[],int len)
{
    int res=0,count=0;
    for(int i=0;i<len;i++)
    {       
        if(arr[i]==0)
        {
            count=0;
        }
        else
        {
            count++;
            res=max(res,count);
        }
    }
    return res;
}
int main()
{
     int len;
    cout<<"enter arr lenght"<<endl;
    cin>>len;
    bool arr[len];
    cout<<"Enter arr elements 1's or 0's \n";
    for(int i=0;i<len;i++)
    {
            cin>>arr[i];    
    }
    cout<<"Max Consecutive 1's are "<<maxCon1s(arr,len)<<endl;
}