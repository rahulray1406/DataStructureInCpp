/* Jagged array in Cpp*/
#include<iostream>
using namespace std;


int main()
{	
	int m , n ;
    cout<<"Enter row you want";
    cin>>m;
    cout<<"enter the col..";
    cin>>n;
	int *arr[m];

	//arr = new int* [m];

	for(int i = 0; i < m; i++)
    {
	 arr[i] = new int[i+1];
    }
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < i+1; j++)
		{  cout<<"Enter the element";
			cin>>arr[i][j] ;			
		}
	}
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < i+1; j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    


	return 0;
}