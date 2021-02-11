#include<iostream>
#include<unordered_set>
using namespace std;
int countInter(int arr1[],int arr2[],int len1,int len2)
{   int count=0;
    unordered_set<int> s(arr1,arr1+len1);
    for(int i=0;i<len2;i++)
    {
        if(s.find(arr2[i])!=s.end())
        {
            count++;
            s.erase(arr2[i]);
        }
    }
    return count;
}
int main()
{
    int len1,len2;
    cout<<"Enter two lenghts\n";
    cin>>len1>>len2;
    int arr1[len1],arr2[len2];
    cout<<"enter 1st array ele\n";
    for(int i=0;i<len1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"2nd arr ele\n";
    for(int i=0;i<len2;i++)
    {
        cin>>arr2[i];
    }
    cout<<"number of intersecting elements are "<<countInter(arr1,arr2,len1,len2)<<endl<<"\n";    
    return 0;

}