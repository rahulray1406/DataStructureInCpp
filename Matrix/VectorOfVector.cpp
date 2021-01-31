/*Simple traversal of Matrix by vector of vector*/
#include<iostream>
#include<vector>
using namespace std;
void print(const vector<vector<int>> & vec)   // Passing by reference
{
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec[i].size();j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int ROW,COL,temp;
    cout<<"Enter ROW\n";
    cin>>ROW;
    cout<<"Enter COL\n";
    cin>>COL;
    vector<vector<int>> vec;
    for(int i=0;i<ROW;i++)
    {   vector<int> v;    //for every row creating a vector
        for(int j=0;j<COL;j++)
        {   cout<<"for row : "<<i+1<<" Col : "<<j+1<<endl; 
            cin>>temp;              //Taking Input from user
            v.push_back(temp);      //and pushing to vector
        }
       vec.push_back(v);  //pushing row to the main vector
    }
    print(vec);
    return 0;
}