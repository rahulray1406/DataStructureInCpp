#include<bits/stdc++.h>
using namespace std;
// void fun(int x)
// {
//     if(x==0) return ;
//     cout<<x<<endl;
//     fun(x-1);
//     cout<<x<<"\n";
// }
void fun(int x)
{
    if(x==0) return ;
    fun(x-1);
    cout<<x<<" ";
    fun(x-1);
}
int main()
{
    fun(3);
    return 0;
}