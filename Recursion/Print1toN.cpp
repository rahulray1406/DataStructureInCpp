#include<bits/stdc++.h>
using namespace std;
//Not Tail recursive
// void print1toN(int n)
// {
//     if(n==0) return ;
//     print1toN(n-1);
//     cout<<n<<" ";
// }

//Tail recursive code
void print1toN(int n,int k)
{
    if(n==0)return ;
    cout<<k<<" ";
    print1toN(n-1,k+1);
}
int main()
{
    int N,k=1;
    cin>>N;
    print1toN(N,k);
    return 0;
}