//PreFix Sum technique 
// we've given a fixed array in which we need to perform some task to resolve the queries
#include<iostream>
using namespace std;
int getSum(int arr[],int len,int L,int R)
{   
  int Prefixsum[len];
  Prefixsum[0]=arr[0];
  for(int i=1;i<len;i++)
  {
      Prefixsum[i]=Prefixsum[i-1]+arr[i];
  }
  if(L!=0)
  {
      return (Prefixsum[R]-Prefixsum[L-1]);
  }
  else
  {
      return Prefixsum[R];
  }
  
}
int main()
{
  int len,L,R,T;
    cout<<"enter the array lenght"<<endl;
    cin>>len;
    int arr[len];
    cout<<"Enter the elements"<<endl;
for(int i=0;i<len;i++)
{
    cin>>arr[i];
}
cout<<"How many time you need to perform the task"<<endl;
cin>>T;
for(int i=0;i<T;i++)
{
    cout<<"Enter L\n"; cin>>L;
    cout<<"Enter R\n"; cin>>R;
cout<<"The sum is "<<getSum(arr,len,L,R)<<endl;

}



}
