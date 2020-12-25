#include<iostream>
#include<math.h>
#include<typeinfo>
using namespace std;
int f1(int num);
int main()
{
    int num;
    long n1=(long)num;
    cout<<typeid(n1).name()<<endl;
    cout<<"Enter the number"<<endl;
    cin>>num;
    cout<<"No of Digit in "<<num<<" is "<<f1(num);
    return 0;
}
int f1(int num)
{
return floor(log10 (num)+1);
}
/*
int f1(long n);
using namespace std;
int main(){
    int num;
    long nu1=(long) num;
    cin>>
}



*/