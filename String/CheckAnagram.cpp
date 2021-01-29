/*Check for Anagram*/
#include<iostream>
using namespace std;
bool isAna(const string &S1,const string &S2)
{
    if(S1.length()!=S2.length())
    {
        return false;
    }
    int count[256]={0};
    for(int i=0;i<S1.length();i++)
    {
        count[S1[i]]++;
        count[S2[i]]--;
    }
    for(int i=0;i<256;i++)
    {
        if(count[i]!=0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string S1,S2;
    cout<<"Enter 1st String\n";
    getline(cin,S1);
    cout<<"Enter 2nd String\n";
    getline(cin,S2);
    if(isAna(S1,S2))
    {
        cout<<"Both the Strings Are Anagram";
    }
    else
    {
        cout<<"Both the String Are --*Not*-- Anagram";
    }
    
}