#include<iostream>
#include<string>
using namespace std;
bool areRotated( string S1, string S2)
{
    if(S1.length()!=S2.length())
    {
        return false;
    }
    return((S1+S1).find(S2)!=string::npos);
}
int main()
{
    string S1,S2;
    cout<<"Enter the String 1\n";
    getline(cin,S1);
    cout<<"Enter the 2nd String\n";
    getline(cin,S2);
    if(areRotated(S1,S2))
    {
        cout<<"Two String are rotation of each other";
    }
    else
    {
        cout<<"Two String are --*NOT*-- rotation of each other";
    }
    

}