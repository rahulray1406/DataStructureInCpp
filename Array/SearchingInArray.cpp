/* Searching in Unsorted Array*/

#include<iostream>
using namespace std;
int SearchArr(int arr[],int len,int element) //Function is for Linear Search
{
    for(int i=0;i<len;i++)
    {
        if(arr[i]==element)
        return i;

    }
    return -1;
}
int main()
{ int len;
    cout<<"enter the arrya lenght"<<endl;
    cin>>len;
    int arr[len];
    cout<<"Enter the elements"<<endl;
for(int i=0;i<len;i++)
{
    cin>>arr[i];
}
int element;
cout<<"Enter the element to be searched"<<"\n";
cin>>element;
int result=SearchArr(arr,len,element);
cout<<"index of the searched element is "<<result<<" and the element is "<<arr[result]<<endl; //only if element is found.
    return 0;
}