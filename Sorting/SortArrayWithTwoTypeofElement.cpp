/*We have given array in with there are two types of element -ve and +ve */
#include<iostream>
using namespace std;
void sortTwotype(int arr[],int len)
{
        int j=len;    
        int i=-1;
   while (true)
   {
       do
       {
           i++;
       } while (arr[i]<0);
       do
       {
          j--;
       } while (arr[j]>=0);
       if(i>=j)
       {
           return; 
       }
       swap(arr[i],arr[j]);
   }   
}
int main()
{
    int len;
    cout<<"enter the len\n";
    cin>>len;
    int arr[len];
    cout<<"Enter the array element\n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    sortTwotype(arr,len);
    for(auto x: arr)
    {
        cout<<x<<" ";
    }
}