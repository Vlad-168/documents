#include <iostream>
#include <fstream>
#include <ctype.h>
#include <stdio.h>
using namespace std;
int main()
{
	ifstream infile("file.txt");
	ofstream fout("outputfile.txt");
	string n;
	for (int i=0;i<3;i++)
	{
		int o=0;
		getline(infile, n);
		int len = n.length();
		cout<<len<<endl;
		cout<<n;

		if (n[0]==' ')
			n.erase(0,1);
		for (int i=0;i<len;i++)
		{
			if (n[i]=='.' and n[i+2] > 'a' and n[i+2]<'z')
			{
				cout<<"atrashkov"<<endl;
				n[i+2] = toupper (n[i+2]);
			}
			if ((n[i] ==  ' ') and (n[i+1] == ' '))
			{
				
				n.erase(i,1);
				i--;
			}
			if (n[0]==' ')
				n.erase(0,1);
		}
		cout<<endl;
		fout<<n<<endl;
		cout<<n;
	}
	cout<<"good";
	
}