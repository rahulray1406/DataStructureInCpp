#include<iostream>
#include<vector>
using namespace std;
void addTowMatrix( vector<vector<int>> &vec, vector<vector<int>>&vec1)
{
vector<vector<int>> res;
for(int i=0;i<vec.size();i++)
{       vector<int> sum;
    for(int j=0;j<vec[i].size();j++)
    {
        sum.push_back(vec[i][j]+vec1[i][j]);
    }
    res.push_back(sum);
}
cout<<"res matrix is..\n";
for(int i=0;i<vec.size();i++)
{
    for(int j=0;j<vec[i].size();j++)
    {
        cout<<res[i][j]<<" ";
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
    {   vector<int> v;    
        for(int j=0;j<COL;j++)
        {   cout<<"for row : "<<i+1<<" Col : "<<j+1<<endl; 
            cin>>temp;              
            v.push_back(temp);     
        }
       vec.push_back(v);  
    }
    cout<<"for 2nd matrix"<<endl;
    cout<<"enter the elements\n";
    vector<vector<int>> vec1;
    for(int i=0;i<ROW;i++)
    {   vector<int> v1;    
        for(int j=0;j<COL;j++)
        {   cout<<"for row : "<<i+1<<" Col : "<<j+1<<endl; 
            cin>>temp;              
            v1.push_back(temp);     
        }
       vec1.push_back(v1);  
    }
    addTowMatrix(vec,vec1);
    return 0;
}