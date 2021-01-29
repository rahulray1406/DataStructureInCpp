/*Sorting a String in O(n) time of lower ANd upper not mix*/
#include<iostream>
using namespace std;
int main()
{
    string S;
    cout<<"Enter the String\n";
    getline(cin,S);
    int count[256]={0};
    for(int i=0;i<S.length();i++)
    {
        count[S[i]-'A']++;
    }
    for(int i=0;i<256;i++)
    {
        for(int j=0;j<count[i];j++)
        {
            cout<<char(i+'A')<<" ";
        }
    }
}