/*O(nlogn)*/
#include<iostream>
#include<algorithm>
using namespace std;
struct Interval
{
    int s,e;
};
bool mycmp(Interval a,Interval b)
{
    return a.s<b.s;
}
void mergeInterval(Interval arr[],int len)
{
    sort(arr,arr+len,mycmp);
    int res=0;
    for(int i=1;i<len;i++)
    {
        if(arr[res].e>=arr[i].s)
        {
            arr[res].s=min(arr[res].s,arr[i].s);
            arr[res].e=max(arr[res].e,arr[i].e);
        }
        else
        {
            res++; 
            arr[res]=arr[i];
        }
        
    }
    for(int i=0;i<=res;i++)
    {
        cout<<" ["<<arr[i].s<<" , "<<arr[i].e<<"]"<< " ";
    }

}
int main()
{
    Interval arr[] =  { {5,10}, {3,15}, {18,30}, {2,7} }; 
    int len=sizeof(arr)/sizeof(arr[0]);
    mergeInterval(arr,len);

}