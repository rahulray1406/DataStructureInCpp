/*Check if given String is Palindrome or not*/
#include<iostream>
using namespace std;
bool isPal(const string &S)
{
int beg=0,end=S.length()-1;
while (beg<end)
{
    if(S[beg]!=S[end])
    {
        return false;
    }
    beg++;end--;
}
return true;
}
int main()
{
    string S;
    cout<<"enter the String\n";
    getline(cin,S);
    if(isPal(S))
    {
        cout<<"The String is Palindrome";
    }
    else
    {
        cout<<"The String is not Palindrome";
    }
    
}