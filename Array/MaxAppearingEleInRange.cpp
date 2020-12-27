//Prefix sum technique
//Given N ranges find the max appearing element in the range
//We are concedring the element is in range of 0<=L[i],R[i]<1000
#include<iostream>
#include<cmath>
#include <bits/stdc++.h>
#include<climits>
using namespace std;
int maxEle(int L[],int R[],int N)
{
    int arr[1000];
    memset(arr, 0, sizeof(arr));
    for(int i=0;i<N;i++)
    {
        arr[L[i]]++;
        arr[R[i]+1]--;
    }
    int maxm = arr[0], res = 0;
    	for(int i = 1; i < 1000; i++)
    	{
    		arr[i] += arr[i - 1];
    		if(maxm < arr[i])
    		{
    			maxm = arr[i];
    			res = i;
    		}
    	}
    	return res;
}
int main()
{
    int N;
    cout<<"Enter the length of array\n";
    cin>>N;
    int L[N],R[N];
    cout<<"Enter the ranges"<<endl;
    for(int i=0;i<N;i++)
    {
        cin>>L[i]>>R[i];
    }
    cout<<"Index of max appearing element is "<<maxEle(L,R,N);
}