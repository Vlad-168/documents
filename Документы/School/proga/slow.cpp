#include <iostream>
#include <algorithm>

using namespace std;


//
int main()

{
	int n,m;
	cin>>n>>m;
	int mas[n][m],arr[n][m];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin>>mas[i][j];
		}
	}
	arr[n + 1][0] = 0;
    for (int i = 1; i <= n; ++i)
      arr[i][0] = 0;
    for (int j = 1; j <= m; ++j)
      arr[n + 1][j] = 0;
	
	arr[n][1] = mas[n][1];

    for (int i = n; i >= 1; i--)
        for (int j = 1; j <= m; j++)
        {
          arr[i][j] = max(arr[i][j - 1], max(arr[i + 1][j - 1], arr[i + 1][j])) + mas[i][j];       
        }

    cout<<arr[1][m];
}
