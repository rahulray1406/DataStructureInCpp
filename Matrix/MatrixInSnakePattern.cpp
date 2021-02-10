/*We have to print the given matrix in snake pattern*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> printInSnake(vector<vector<int>> vec)
{   vector<int> res;
    for(int i=0;i<vec.size();i++)
    {
        if(i%2==0)
        {
            for(int j=0;i<vec[i].size();j++)
            {
                res.push_back(vec[i][j]);
            }
        }
        else
        {
            for(int j=vec[i].size()-1;j>=0;j--)
            {
                res.push_back(vec[i][j]);
            }
        }
        
    }
   return res;
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
  vector<int> result=printInSnake(vec);
  for(int i=0;i<result.size();i++)
  {
      cout<<result[i]<<" ";
  }
    return 0;
}