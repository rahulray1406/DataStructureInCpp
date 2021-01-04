/*Our task is to Count no of 1's In binary Sorted Array 
we can use Binary search for O(log n) sol*/
#include<iostream>
using namespace std;
int countOnes(bool arr[],int len)
{
    int low=0,high=len-1;
    while (low<=high)
    {
       int mid=(low+high)/2;
       if(arr[mid]<1)
            high=mid-1;
        else if(arr[mid]>1)
            low=mid+1;
        else
        {
            if(mid==0 || arr[mid]!=arr[mid-1])
            return(len-mid);
            else
            {
                high=mid-1;
            }
            
        }
        
    }
    return -1;
}
int main()
{
    int len;
    cout<<"Enter the lenght of array"<<endl;
    cin>>len;
    bool arr[len];
    cout<<"Enter the Array element"<<endl;
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    cout<<"Count of 1's in the array is "<<countOnes(arr,len);
}