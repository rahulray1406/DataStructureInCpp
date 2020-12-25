#include<iostream>
using namespace std;
bool isPalindrome(long number);
int main()
{
    long number;
    cout<<"Enter the number to check if it is Palindrome or not"<<endl;
    cin>>number;
    cout<<isPalindrome(number);
    // if(isPalindrome(number)==1)
    // {
    //     cout<<"TRUE";
    // }
    // else{
    //     cout<<"FALSE";
    // }
}
bool isPalindrome(long number)
{
    long temp=number;
    long revese=0;
    long rem;
    while (temp!=0)
    {
        rem=temp%10;
        revese=revese*10+rem;
        temp/=10;
        
    }
    return(revese==number);
    
}