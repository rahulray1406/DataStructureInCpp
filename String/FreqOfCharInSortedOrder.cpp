/*We have given a lower case String we need to print Freq of each char in Sorted way*/
#include<iostream>
using namespace std;
int main()
{
    string S;
    cout<<"Enter the String \n";
    getline(cin,S);
    int count[26]={0};
    for(int i=0;i<S.length();i++)
    {
        count[S[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]>0)
        {
            cout<<char(i+'a')<< ":"<<count[i]<<"\n";
        }
    }
}