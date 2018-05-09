#include <iostream>

using namespace std;
int nod(int n1, int n2)
{
  if (n2 == 0){
  	return n1;
  } 
  return nod(n2,n1%n2);
  
}
int main()
{
	int n1, n2;
	cin>>n1;
	cin>>n2;
	cout<<nod(n1,n2);
	
}