/*We have to find the lenght of largets sub array having sum=givenSum*/
#include<bits/stdc++.h>
using namespace std;
int largestSubArraySum(const vector<int> &arr,const int &sum)
{
    int preSum=0,result=0;
    unordered_map<int,int> map;
    for(int i=0;i<arr.size();i++)
    {
        preSum+=arr[i];
        if(preSum==sum)
            result=i+1;
        if(map.find(preSum)==map.end())
            map[preSum]=i;
        if(map.find(preSum-sum)!=map.end())
        {
            result=max(result,i-map[preSum-sum]);
        }
    }
    return result;
}
int main()
{
    int len,sum;
    cout<<"Enter the len\n";
    cin>>len;
    vector <int> vec(len);
    cout<<"Enter the array\n";
    for(int i=0;i<len;i++)
    {
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    cout<<"Enter the sum value\n";
    cin>>sum;
    cout<<largestSubArraySum(vec,sum)<<endl;
}