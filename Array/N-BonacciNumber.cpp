//Using Window Sliding Technique
//N-bonacci means sum of N elements
#include<iostream>
using namespace std;
void nbonacci(int N,int M)
{
    int arr[M]={0};
    arr[N-1]=1;
    arr[N]=1;
    for(int i=N+1;i<M;i++)
    {
        arr[i]=2 * arr[i-1]-arr[i-N-1];
    }
    for (size_t i = 0; i < M; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int N,M;
    cout<<"Enter the N value"<<"\n";
    cin>>N;
    cout<<"enter the M value"<<endl;
    cin>>M;
    nbonacci(N,M);
}