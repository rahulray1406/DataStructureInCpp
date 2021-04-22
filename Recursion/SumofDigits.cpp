#include<bits/stdc++.h>
using namespace std;
int sumofDigit(int n)
{
    if(n==0)return 0;
    return sumofDigit(n/10)+n%10;
}
int main()
{
    int n;
    cin>>n;
    cout<<sumofDigit(n)<<endl;
    return 0;
}