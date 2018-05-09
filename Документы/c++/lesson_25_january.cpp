#include <iostream>
 using namespace std;
int rec(int n, int m, int *s){
	if (n<m){
		rec(n+2,m,s);
		rec(n*2,m,s);
	}
	if (n==m){
		*s=*s+1;
	}
	
}

int main()
{
	int n, m,s;
	cin>>n>>m;
	s=0;
	rec(n,m,&s);
	cout<<s;

	
	
}