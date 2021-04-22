#include<bits/stdc++.h>
using namespace std;
// int fun(int x)
// {
//     if(x==1)return 0;
//     else return 1+fun(x/2);
// }
void fun(int x)  //This fxn works for Decimal to binary conversion.
{
    if(x==0)return ;
    fun(x/2);
    cout<<x%2<<" ";
}
int main()
{
    fun(13);
    return 0;
}