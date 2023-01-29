#include <iostream>

using namespace std;

int czyKwadrat(int n);

int main()
{
	cout << czyKwadrat(4) << endl;
	cout << czyKwadrat(5) << endl;
	cout << czyKwadrat(9) << endl;
	cout << czyKwadrat(81) << endl;
}

int czyKwadrat(int n)
{
	for(int i = 1; i <= n/2; i++)
	{
		if (i * i == n)
			return 1;
	}
	return 0;
}
