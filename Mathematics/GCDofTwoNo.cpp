#include<iostream>
#include<math.h>
using namespace std;
int GCD(int a,int b);
int main()
{
    int a,b;
    cout<<"enter two Numbers"<<endl;
    cin>>a>>b;
    int result=GCD(a,b);
    cout<<result;
}
int GCD(int a,int b)
{
    int temp=min(a,b);
    while (temp>0)
    {
        if(a%temp==0 && b%temp==0)
        {break;}
        temp--;
    }
    return temp;
}