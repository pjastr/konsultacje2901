#include <iostream>

using namespace std;

int czyPosortowana(int n, int tab[]);

int main()
{
	int tab[] = { 4,5,4,3 };
	cout << czyPosortowana(4, tab) << endl;
}

int czyPosortowana(int n, int tab[])
{
	for (int i = 0; i < n - 1; i++)
	{
		if (tab[i] < tab[i + 1])
			return 0;
	}
	return 1;
}
