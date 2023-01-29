#include <iostream>

using namespace std;

int ileNieparzystych(int tab[], int n);

int main()
{
	int tab[] = { 3,4,-7,8,0 };
	cout << ileNieparzystych(tab, 5) << endl;
}

int ileNieparzystych(int tab[], int n)
{
	int licznik = 0;
	for (int i = 0; i < n; i++)
	{
		if (tab[i] % 2 != 0)
		{
			licznik++;
		}
	}
	return licznik;
}
