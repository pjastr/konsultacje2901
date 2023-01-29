#include <iostream>

using namespace std;

int sumaNieparzystych(int n);

int main()
{
	cout << sumaNieparzystych(1) << endl;
	cout << sumaNieparzystych(5) << endl;
	cout << sumaNieparzystych(12) << endl;

}

int sumaNieparzystych(int n)
{
	int suma = 0;
	for (int i = 1; i <= n; i += 2)
	{
		suma += i;
	}
	return suma;
}
