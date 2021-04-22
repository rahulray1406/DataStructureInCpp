#include<bits/stdc++.h>
using namespace std;
bool ispalin(string &s,int start,int end)
{
    if(start>=end) return true;
    return((s[start]==s[end])&& ispalin(s,start+1,end-1));
}
int main()
{
    string s;
    cin>>s;
    if(ispalin(s,0,s.length()-1))
        cout<<"YES";
    else
    {
        cout<<"NO";
    }
    return 0;

}