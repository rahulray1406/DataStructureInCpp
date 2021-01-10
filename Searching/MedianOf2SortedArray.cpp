/*We have given two Sorted Array and we have to find Median of the two sorted array*/
#include<iostream>
using namespace std;
double getMedian(int arr1[],int arr2[],int len1,int len2)
{
    int begin1=0,end1=len1;
    while (begin1<=end1)
    {
        int mid1=(begin1+end1)/2;
        int mid2=(len1+len2+1)/2 - mid1;
        int Min1=(mid1==len1)?INT16_MAX:arr1[mid1];
        int Max1=(mid1==0)?INT16_MIN:arr1[mid1-1];  
        int Min2=(mid2==len2)?INT16_MAX:arr2[mid2];
        int Max2=(mid2==0)?INT16_MIN:arr2[mid2-1];

        if(Max1<=Min2 && Max2<=Min1)
        {
            if ((len1+len2)%2==0)
            {
                return((double)(max(Max1,Max2)+min(Min1,Min2))/2);
            }
            else
            {
                return((double) max(Max1,Max2));
            }  
        }
        else if(Max1>Min2)
        {
            end1=mid1-1;
        }
        else
        {
            begin1=mid1+1;
        }
        
    }
    return -1;
}
int main()
{
    int len1,len2;
    cout<<"enter the 2 lenghts"<<endl;
    cin>>len1>>len2;
    int arr1[len1],arr2[len2];
    cout<<"Enter the Array1 elements"<<endl;
    for(int i=0;i<len1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the Array2 elements"<<endl;
    for(int i=0;i<len2;i++)
    {
        cin>>arr2[i];
    }
    cout<<"Median of Two Sorted Arrya is "<<getMedian(arr1,arr2,len1,len2);
}