#include <iostream>
#include <fstream>
#include <ctype.h>
using namespace std;

int main()
{
	int n, x ,y, xmin , xmax , ymin , ymax ;
	int chet;
	float s;
	ifstream fin("file.txt");
	ofstream fout("outputfile.txt");
	fin>>n;
	xmin = 0;
	xmax = 0;
	ymin = 0;
	ymax = 0;
	for (int i=1;i<=n;i++)
	{
		fin>>x>>y;
		chet = 0;
		if (y==0)
		{
			if (chet<=1 or x<xmin)
				xmin = x;
			if (chet<=1 or x>xmax)
				xmax = x;
			chet++;
		}
		else if (y<ymin)
			ymin = y;
		else if (y>ymax)
			ymax = y;
	}

	if (xmax>xmin and ymin<0 and ymax>0)
		s = (xmax-xmin)*(ymax-ymin)/2;
	else
		s=0;
	fout<<s;
}