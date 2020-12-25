#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter row and col..";
    cin>>m>>n;
    int arr[m][n];
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0;j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<endl;
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
}