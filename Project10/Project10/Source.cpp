#include <iostream>

using namespace std;

void wypiszRozklady(int n);

int main()
{
	wypiszRozklady(40);
}

void wypiszRozklady(int n)
{
	for (int a = 1; a < n; a++)
	{
		for (int b = a;  b < n; b++)
		{
			if (a* a + b * b == n)
			{
				cout << a << "^2+" << b << "^2=" << n << endl;
			}
		}
	}
}
