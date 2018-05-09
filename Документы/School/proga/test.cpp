#include <iostream>
using namespace std;
void P(int n)
{
	int i=0;
	if (n <=18)
	{
		i++;
		P(n + 1);
		P(n+3);
		cout<<n<<' ';
		
	}
	cout<<' '<<endl;
	cout<<"result:"<<i;

	
}
int main()
{
	P(2);
	
}

		//P(9-2)=7->cout 7->P(7-2)=5


//cout 9

		//P(9/2)=4->cout 4
 
