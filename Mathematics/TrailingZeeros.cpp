#include<iostream>
using namespace std;
int countZero(int n);
 int main()
 {
     int n;
     cout<<"Enter the number"<<"\n";
     cin>>n;
     cout<<countZero(n);

 }
 int countZero(int n)
 {
    int res=0;
    for (size_t i = 5; i <=n; i=i*5)
    {
        res=res + n/i;
    }
    return res;
 }