#include <iostream>

using namespace std;
void change(int n,int m)
{
	int p=n%m;
	if (n >= m)
	{
		p=n%m;
		change(n/m,m);
		
		
	}
	cout<<p;
	
}
int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	change(a, b);
}