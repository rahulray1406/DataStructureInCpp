/*For a given String we have to return the left most repeating char*/
#include<iostream>
using namespace std;
const int CHAR=256;
int leftRepeat(const string &S)
{
    bool visited[CHAR];
    fill(visited,visited+CHAR,false);
    int res=-1;
    for(int i=S.length()-1;i>=0;i--)
    {
        if(visited[S[i]])
        {
            res=i;
        }
        else
        {
            visited[S[i]]=true;
        }   
    }
    return res;
}
int main()
{
    string S;
    cout<<"Enter the string\n";
    getline(cin,S);
    cout<<"The left most Repeating Char is at "<<leftRepeat(S);
}