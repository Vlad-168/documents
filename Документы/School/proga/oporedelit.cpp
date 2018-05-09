#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int mas[3][3];

	cout<<"Введите мтрицу 3*3:"<<endl;
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			int n;
			cin>>n;
			mas[i][j]=n;
		}
	
	}
	int qw1,qw2,qw3;
	cout<<"Введите свободные коэффиценты:"<<endl;
	cin>>qw1>>qw2>>qw3;
	int opr = mas[0][0]*mas[1][1]*mas[2][2]+mas[0][1]*mas[1][2]*mas[2][0]+mas[0][2]*mas[1][0]*mas[2][1];
	int opr1 = mas[2][0]*mas[1][1]*mas[0][2]+mas[2][1]*mas[1][2]*mas[0][0]+mas[2][2]*mas[1][0]*mas[0][1];
	cout<<"Определитель:"<<opr-opr1<<endl;
	int op1;
	for (int i=0;i<3;i++)
	{
		op1 += mas[0][i]*pow(-1, i+1+1);
		cout<<op1<<endl;
	}
	cout<<"Определитель 1:"<<op1<<endl;
	cout<<mas[0][0]*pow(-1, 0+1+1);	

	
}