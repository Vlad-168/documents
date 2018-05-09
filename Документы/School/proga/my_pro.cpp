#include <iostream>

using namespace std;

int main()
{
	int string1, stolb1, string2, stolb2;
	cout<<"Количество строк 1 массива:";
	cin>>string1;
	cout<<"Количество столбцов 1 массива:";
	cin>>stolb1;
	cout<<"Количество строк 2 массива:";
	cin>>string2;
	cout<<"Количество столбцов 2 массива:";
	cin>>stolb2;
	if (stolb1==string2)
	{
		int mas1[string1][stolb1];
		int mas2[string2][stolb2];
		int input1, input2;
		for (int i=0;i<string1;i++)
			for (int j=0;j<stolb1;j++)
			{
				cout<<"1-ый Массив"<<"["<<i<<"]"<<"["<<j<<"]"<<"= ";
				cin>>input1;
				mas1[i][j] = input1;
			}
		for (int i=0;i<string1;i++)
		{
			for (int j=0;j<stolb1;j++)
			{
				cout<<mas1[i][j]<<" ";
			}
			cout<<endl;
		}
		for (int i=0;i<string2;i++)
			for (int j=0;j<stolb2;j++)
			{
				cout<<"2-ой Массив"<<"["<<i<<"]"<<"["<<j<<"]"<<"= ";
				cin>>input2;
				mas2[i][j] = input2;
			}
		for (int i=0;i<string2;i++)
		{
			for (int j=0;j<stolb2;j++)
			{
				cout<<mas2[i][j]<<" ";
			}
			cout<<endl;
		}
		int mas3[string1][stolb2];
		cout<<endl;
		cout<<"Итоговый массив : ";
		cout<<endl;
		for (int i = 0; i < string1; i++) 
		{  
	        for (int j = 0; j < stolb2; j++) 
	        { 
	        	mas3[i][j]=0; 
	            for (int k = 0;k<stolb1; k++) 
	            {  
	                mas3[i][j] += mas1[i][k] * mas2[k][j];  
	        	}  
	            cout << mas3[i][j] << "  ";  
	    	}  
	        cout << "\n";  
	    } 
	    } 
			
}