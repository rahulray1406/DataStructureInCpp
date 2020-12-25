#include<iostream>
using namespace std;
void RotateByD(int arr[],int len,int D);
void reverse(int arr[],int low,int high);
int main()
{    
    int T,len,D;
    cout<<"Enter the number of test case\n";
    cin>>T;
    for(int i=0;i<T;i++)
    {
    cout<<"Enter the lenght and D"<<endl;
    cin>>len>>D;
    int arr[len];
    cout<<"enter the elemnts"<<endl;
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    
    RotateByD(arr,len,D);
    //reverse(arr,len,D);
    cout<<"After Rotation by D"<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
    }
    return 0;
}
void RotateByD(int arr[],int len, int D)
{
 reverse(arr,0,D-1);
 reverse(arr,D,len-1);
 reverse(arr,0,len-1);
}
void reverse(int arr[],int low,int high)
{
while (low<high)
{
   swap(arr[low],arr[high]);
   low++;
   high--;
}

}
