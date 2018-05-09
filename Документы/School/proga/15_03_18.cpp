#include <iostream>
#include <string>
 
using namespace std;
void bubbleSort(int arr[], int n)
{
	int swap;
   for (int c = 0 ; c < ( n - 1 ); c++)
  {
    for (int d = 0 ; d < n - c - 1; d++)
    {
      if (arr[d] > arr[d+1])
      {
        swap = arr[d];
        arr[d] = arr[d+1];
        arr[d+1] = swap;
      }
    }
  }
}

int main()
{
	string a;
	int index=0,k=0;
	int n,p=0;
	cin>>n;
	int arr[n];
	string qwerty[n];
	int mas_of_num[n];
	string mas_of_names[n];
	for (int i=0;i<n;i++)
	{
		cin>>a;
		qwerty[p]=a;
		int mas[a.length()];
        int ind;
		for (int i=0;i<a.length();i++)
		{
			if ((a[i]>='0')&&(a[i]<='9'))
			{

			}
			else{
				mas[k]=i;
				ind=i;
				k++;
				
			}
		}
		cout<<endl;
		//string name[ind+1];
		cout<<"Index i:"<<ind<<endl;
		//for (int i=0;i<ind+1;i++)
		//{
		//	name[i] = a[i];
		//	mas_of_names[p]=name[i];
		//	cout<<name[i]<<" ";
		//}
		int index_of_char = ind;
		int nech=0, win = 0, lose = 0;
		for (int i=index_of_char;i<a.length();i++)
		{
			if (a[i]=='1')
			{
				nech++;
			}
			else if (a[i]=='3')
			{
				win++;
			}
			else if (a[i] == '0'){
				lose++;
			}
		}
		if (lose>0)
		{
			lose--;
		}
		if (lose<0)
			lose=0;
		cout<<"Выиграли: "<<win<<endl;
		cout<<"Проиграли: "<<lose<<endl;
		cout<<"Ничьи: "<<nech<<endl;
		arr[p]=nech*1+win*3+lose*0;
		cout<<"hello:"<<p;
		p++;
	}
	int max;
	max=arr[0];
	cout<<endl;
	for (int i=0;i<n-1;i++)
	{
		if (max<arr[i+1])
			max=arr[i+1];
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<max<<" "<<n;
	cout<<endl;
	int index_of_wins=0;
	for (int i=0;i<p;i++)
	{
		if (max == arr[p])
			index_of_wins=index_of_wins+i;
	}
	string v;
	index_of_wins++;
	v=qwerty[index_of_wins];
	cout<<"Winner comand:"<<v<<" "<<"Количество очков"<<arr[index_of_wins]<<endl;
	for (int i=0;i<n;i++)
	{
		mas_of_num[i] = arr[i];
	}
	bubbleSort(mas_of_num, n);
	for (int i=0;i<n;i++)
	{
		cout<<mas_of_num[i]<<"/"<<endl;
		cout<<arr[i]<<"&"<<endl;

	}
	string mas_of_comands[n];
	for (int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
		if (mas_of_num[i]==arr[j])
			mas_of_comands[i] = qwerty[j];
	}
	cout<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<mas_of_comands[i]<<" Очки: "<<mas_of_num[i]<<endl;
	}
}