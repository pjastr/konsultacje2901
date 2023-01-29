#include <iostream>

using namespace std;

int palindrom(int n);

int main()
{
	cout << palindrom(-5) << endl;
	cout << palindrom(7) << endl;
	cout << palindrom(44) << endl;
	cout << palindrom(334433) << endl;
	cout << palindrom(343546) << endl;
}

int palindrom(int n)
{
	if (n < 0)
		return 0;
	int rev = 0;
	int num = n;
	while (num > 0)
	{
		rev = rev * 10 + num % 10;
		num /= 10;
	}
	if (n == rev)
		return 1;
	return 0;
}
