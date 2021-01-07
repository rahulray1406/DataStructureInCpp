/* Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].
We have to Return the array in the form [x1,y1,x2,y2,...,xn,yn].*/
#include<iostream>
using namespace std;
void shuffle(int arr[],int n)
{   int New_arr[n*2];
    int start_ptr=0,end_ptr=n;
    for(int i=0;i<=n*2;i++)
    {
        New_arr[i]=arr[start_ptr];
        New_arr[i+1]=arr[end_ptr];
        i++;
        start_ptr++;
        end_ptr++;

    }
    cout<<"new array is\n";
    for(int i=0;i<n*2;i++)
    {
        cout<<New_arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the N value"<<endl;
    cin>>n;
    int arr[n*2];
    cout<<"Enter the array element\n";
    for(int i=0;i<n*2;i++)
    {
        cin>>arr[i];
    }
    shuffle(arr,n);
}