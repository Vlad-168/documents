#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int x, y, z, k;
	cin>>x>>y>>z>>k;
	int mas[x][y][z][k];
	
	
	cout<<endl;
	for (int i=0;i<x;i++)
	{
		for (int j=0;j<y;j++)
		{
			for (int u=0;u<z;u++){
				for (int t=0;t<k;t++){
					mas[i][j][u][t] = rand()%10;
					cout<<mas[i][j][u][t]<<" ";
				}
				cout<<endl;
			
			}
			cout<<endl;
		}
		cout<<endl;
	}
	



}