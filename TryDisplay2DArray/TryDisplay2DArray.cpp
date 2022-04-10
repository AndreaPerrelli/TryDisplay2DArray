#include <iostream>
using namespace std;

void display(int[10][10], int, int);



int

main()

{

	int a[10][10];

	int m, n;

	cin >> m >> n;

	for (int i = 1; i <= n; i++)

	{

		for (int j = 1; j <= m; j++)

		{

			a[i][j] = j;

		}
	}

	display(a, n, m);

	return 0;

}



void display(int z[10][10], int c, int d)

{

	for (int i = 1; i <= c; i++)

	{

		for (int j = 1; j <= d; j++)

		{

			cout << z[i][j] << " ";

		}
		cout << endl;

	}

}

