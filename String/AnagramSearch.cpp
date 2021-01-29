/*We have given two string text & pattern we need to find if patter is anagram of text or not*/
#include<iostream>
using namespace std;
const int CHAR=256;
bool areSame(int CT[],int CP[])
{
    for(int i=0;i<CHAR;i++)
    {
        if(CT[i]!=CP[i])
        return false;
    }
    return true;
}
bool isAna(string &txt,string &ptr)
{
    int CT[CHAR]={0},CP[CHAR]={0};
    for(int i=0;i<ptr.length();i++)
    {
        CT[txt[i]]++;
        CP[ptr[i]]++;
    }
    for(int i=ptr.length();i<txt.length();i++)
    {
        if(areSame(CT,CP))
        {
            return true;
        }
        CT[txt[i]]++;
        CT[txt[i-ptr.length()]]--;
    }
    return false;
}
int main()
{
    string txt,ptr;
    cout<<"Enter the Text\n";
    getline(cin,txt);
    cout<<"Enter the Pattern\n";
    getline(cin,ptr);
    if(isAna(txt,ptr))
    {
        cout<<"Anagram is found ";
    }
    else
    {
        cout<<"Anagram Search NOT found";
    }
    
}