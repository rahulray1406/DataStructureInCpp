#include<iostream>
#include<stack>
using namespace std;
void findLeader(int arr[],int len)
{ stack <int> s;

 int curr_ldr=arr[len-1];
s.push(curr_ldr);
//   cout<<curr_ldr<<" ";
for(int i=len-2;i>=0;i--)
{
    if(curr_ldr<arr[i])
    {   curr_ldr=arr[i];
        s.push(curr_ldr);
       // cout<<curr_ldr<<" ";
    }
}
while (!s.empty())
{
    cout<<s.top()<<" ";
    s.pop();
}

   
    

}
int main()
{
    int len;
     cout<<"enter the lenght of array"<<endl;
     cin>>len;
     int arr[len];
     cout<<"Enter the element of array"<<endl;
     for (int i =0;i<len;i++)
     {
         cin>>arr[i];
     }
    findLeader(arr,len);
    return 0;
}