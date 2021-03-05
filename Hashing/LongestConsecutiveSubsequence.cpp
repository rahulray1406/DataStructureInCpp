/*we have given an array we need to find the longest consecutive subsequence i.e-[1,9,3,4,2,20] o/p=4 {1,2,3,4}*/
#include <bits/stdc++.h>
using namespace std;
//O(nLogn)
/*int largestConsecutive(vector<int> arr)
{
    int count = 1, res = 1;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] + 1 == arr[i + 1])
        {
            count++;
        }
      else
        {
          res = max(res, count);
          count = 1;
        }  
    }
    res = max(res, count);
    return res;
}*/
int largestConsecutive(vector<int> arr)   //O(N) sol.
{
    int res=0;
    unordered_set<int> set(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++)
    {
        if(set.find(arr[i]-1)==set.end())
        {
            int curr=1;
            while (set.find(curr+arr[i])!=set.end())
            {
               curr++;
            }
            res=max(res,curr);
            
        }
    }
    return res;
}
int main()
{
    vector<int> arr = {1, 9, 4, 3, 2, 20};
    cout << largestConsecutive(arr) << endl;
    return 0;
}