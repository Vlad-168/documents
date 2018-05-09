#include <iostream>

using namespace std;
void change(int n,int m)
{
	cout<<m<<" ";
	if (m > n)
	{
		change(n,m-1);
		
	}
	cout<<m<<" ";
	
}
int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	change(a, b);
}