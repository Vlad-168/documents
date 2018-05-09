#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int x[5][5];
	int z=0;
	int q=0;
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<5;j++)
		{
			x[i][j]=rand()%10;
			cout<<x[i][j]<<" ";
		}
		cout<<' '<<endl;
	}
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<5;j++)
		{
			if (i == j){
				q=x[i][j]+q;
			}
			if (i+4 == j)
				z=x[i][j]+z;
		}
		
	}
	cout<<"Сумма первой диагонали"<<q<<" ";
	cout<<"Сумма второй диагонали"<<z<<" ";
}