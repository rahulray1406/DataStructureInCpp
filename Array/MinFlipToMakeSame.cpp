#include<iostream>
using namespace std;
void minFlip(bool arr[],int len)
{
    for(int i=1;i<len;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i]!=arr[0])
            {
                cout<<"Flip from "<<i<<" to ";
            }
            else
            {
                cout<<i-1<<endl;
            }
            
        }
    }
    if(arr[len-1]!=arr[0])
    {
        cout<<len-1<<endl;
    }
}
int main()
{
    int len;
    cout<<"enter arr lenght"<<endl;
    cin>>len;
    bool arr[len];
    cout<<"Enter arr elements \n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    minFlip(arr,len);
}