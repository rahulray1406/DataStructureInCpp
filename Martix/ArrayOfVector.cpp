#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter row and col "<<endl;
    cin>>row>>col;
    vector<int> arr[row];
    for (size_t i = 0; i < row; i++)
    {
        for(int j=0; j<col;j++)
        {  
             arr[i].push_back(10);
        }
    }
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}