/*We have to check if there exist a Subsequence string of other string*/
#include<iostream>
using namespace std;
bool isSubsequence(const string &S1,const string &S2)
{
    int n=S1.length(),m=S2.length();
    if(n<m){return false;}
    int j=0;
    for(int i=0;i<n && j<m;i++)
    {
        if(S1[i]==S2[j])
        {
            j++;
        }
    }
    return(j==m);
}
int main()
{
    string S1,S2;
    cout<<"Enter 1st String\n";
    getline(cin,S1);
    cout<<"Enter the 2nd String\n";
    getline(cin,S2);
    if(isSubsequence(S1,S2))
    {
        cout<<"The Strings are Subsecqent of each other";
    }
    else
    {
        cout<<"The Strings are *-Not-* Subsecqent of each other";

    }
    
}