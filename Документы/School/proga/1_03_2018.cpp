#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int n,m,input,count = 0, countcol = 0	;
	cin>>n>>m;
	int mas[n][m];
	int arr[n][m];
	int r;
    cin>>r;
	
	
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			mas[i][j] = rand()%r;
			cout<<mas[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			arr[i][j]=mas[n-j+1][i];
		}

	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	



}