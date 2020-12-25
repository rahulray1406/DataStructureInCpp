#include<iostream>
using namespace std;
bool primeOrNot(int a);
int main()
{
    int a;
    cout<<"enter the nnumber"<<endl;
    cin>>a;
    cout<<primeOrNot(a);
}
bool primeOrNot(int a)
{
    if(a==1)
    return false;
    if(a==2 || a==3)
    return true;
    if(a%2==0 || a%3==0)
    return false;
    for (size_t i = 5; i*i<=a; i=i+6)
    {
        if(a%i==0 || a%(i+2)==0)
        return false;
    }
    return true;
}