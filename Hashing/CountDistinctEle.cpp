#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    int len;
    cout<<"Enter the len of array\n";
    cin>>len;
    int arr[len];
    cout<<"Enter the array element\n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    unordered_set<int> us(arr,arr+len);
    cout<<"Number of distinct elements are.. "<<us.size()<<endl;
    return 0;

}