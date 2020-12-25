#include<iostream>
using namespace std;
int fact(int number);
int main()
{
  int number;
  cout<<"Enter the number"<<endl;
  cin>>number;
  cout<<fact(number);
}
/*   Itetrative*/

// int fact(int number)
// {
//     int result=1;
//     for(int i=2;i<=number;i++)
//     {
//         result*=i;
//     }
//     return result;
// }



/*   Recursive*/

int fact(int number){
  if(number==0)
  return 1;
  return number*fact(number-1);
}