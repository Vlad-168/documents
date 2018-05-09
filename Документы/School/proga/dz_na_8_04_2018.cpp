#include <iostream>

using namespace std;
int main()
{
	int n,m,input,count = 0, countcol = 0	;
	cin>>n>>m;
	int mas[n][m];
	int sum_of_string[m];
	int sum_of_column[n];
	
	for (int i=0;i<n;i++)
	{
		int summ_of_string=0;
		for (int j=0;j<m;j++)
		{
			cin>>input;
			mas[i][j] = input;
			summ_of_string = mas[i][j]+summ_of_string;
			sum_of_string[i] = summ_of_string;
		}
	}
	for (int j=0;j<m;j++)
	{
		int summ_of_column=0;
		for (int i=0;i<n;i++)
		{
			summ_of_column = mas[i][j]+summ_of_column;
			sum_of_column[j] = summ_of_column;
		}
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			cout<<mas[i][j]<<" ";
			
		}
		cout<<endl;

	}
	for (int i=0;i<m;i++){
		if (sum_of_string[i]>sum_of_string[i+1])
			count = i;
		cout<<sum_of_string[i]<<" ";
	}
	cout<<endl;
	for (int i=0;i<m;i++){
		if (sum_of_column[i]<sum_of_column[i+1])
			countcol = i;
		cout<<sum_of_column[i]<<" ";
	}
	cout<<endl;
	cout<<"Максимальная сумма находится на строке:"<<count+1;
	cout<<endl;
	cout<<"Минимальная сумма находится на столбце:"<<countcol;
	



}