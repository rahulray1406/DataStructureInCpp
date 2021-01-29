/*We have to reverse words in a given String
i.e- reverse the word
     word the reverse*/
#include<iostream>
#include<string.h>
using namespace std;
void reverse(char ch[],int low,int high)
{
    while(low<=high)
    {
        swap(ch[low],ch[high]);
        low++; high--;
    }
}
int main()
{
    string S;
    cout<<"Enter the String\n";
    getline(cin,S);
    int n=S.length();
    char Str[n+1];
    int start=0;
    strcpy(Str,S.c_str());
    for(int end=0;end<n-1;end++)
    {
        if(Str[end]==' ')
        {
            reverse(Str,start,end-1);
            start=end+1;
        }
    }
    reverse(Str,start,n-1);
    reverse(Str,0,n-1);
    S=Str;
    cout<<S;
}