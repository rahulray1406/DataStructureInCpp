#include<iostream>
#include<unordered_map>
using namespace std;
void getFre(int arr[],int len)
{
    unordered_map<int ,int> um;
    for(int i=0;i<len;i++)
    {
        um[arr[i]]++;
    }
    for(auto x: um)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}
int main()
{   int len;
    cout<<"Enter the len\n";
    cin>>len;
    int arr[len];
    cout<<"Enter the arr ele\n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    getFre(arr,len);
    return 0;

}