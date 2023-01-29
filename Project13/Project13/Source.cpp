#include <iostream>

using namespace std;

void ile(int m, int n, int tab[]);

int main()
{
	int tab[] = { 3,4,3,-3,4,3 };
	ile(6, 3, tab);
}

void ile(int m, int n, int tab[])
{
	int licznik = 0;
	for (int i = 0; i < m; i++)
	{
		if (tab[i] == n)
		{
			licznik++;
		}
	}
	cout << licznik << endl;
}
