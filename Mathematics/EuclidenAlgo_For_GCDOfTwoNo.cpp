/*
Euclidean Algorithm for GCD of two numbers
*/
#include<iostream>
using namespace std;
int GCD(int a, int b);
int main()
{
    int a,b;
    cout<<"enter two nnumbers"<<endl;
    cin>>a>>b;
    int result = GCD(a,b);
    cout<<result;
}
// int GCD(int a,int b)
// {
//     while (a!=b)
//     {
//         if (a>b)
//         {
//             a-=b;
//         }
//         else
//         {
//             b-=a;
//         }
        
//     }
//     return a;
// }

/* Optimized*/
int GCD(int a, int b)
{
    if(b==0)
    return a;
        else
        {   
            return GCD( b,a%b);
        }
        
}