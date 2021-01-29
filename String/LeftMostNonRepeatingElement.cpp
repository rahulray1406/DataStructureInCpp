/*We need to return left most non repeating element*/
#include<iostream>
using namespace std;
const int CHAR=256;
int leftNoNRep(const string &S)
{
    int Fi[CHAR];
    fill(Fi,Fi+CHAR,-1);
    for(int i=0;i<S.length();i++)
    {
        if(Fi[S[i]]==-1)
        {
            Fi[S[i]]=i;
        }
        else
        {
            Fi[S[i]]=-2;
        }
    }
    int res=INT16_MAX;
    for(int i=0;i<CHAR;i++)
    {
        if(Fi[i]>=0)
        {
            res=min(res,Fi[i]);
        }
    }
    return(res==INT16_MAX)?-1:res;
}
int main()
{
    string S;
    cout<<"Enter the string\n";
    getline(cin,S);
    cout<<"the left most NoN repating element is at "<<leftNoNRep(S);
}