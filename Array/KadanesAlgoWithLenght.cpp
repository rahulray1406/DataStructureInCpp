//This will return the Lenght of largest sum SubArray.
#include<iostream>
using namespace std;
int subArrayLength(int arr[],int len)
{
    int Curr_sum=0, Final_sum=0;
    int start=0,end=0,temp=0;
    for(int i=0;i<len;i++)
    {
        Curr_sum+=arr[i];
        if(Curr_sum<0)
        {
            Curr_sum=0;
            temp=i+1;
        }
        else if(Final_sum<Curr_sum)
        {
            Final_sum=Curr_sum;
            start=temp;
            end=i;
        }
    }
    return(end-start+1);
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
    cout<<"Lenght of Largest sum SubArray is "<<subArrayLength(arr,len)<<endl;
}