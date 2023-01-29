#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	bool isOk = false;
	if (a == b && a != c)
	{
		isOk = true;
	}
	else if (a == c && a != b)
	{
		isOk = true;
	}
	else if (b == c && a != b)
	{
		isOk = true;
	}
	if (isOk)
	{
		cout << "dokladnie dwie liczby sa takie same" << endl;
	}
	else
	{
		cout << "warunek nie jest spelniony" << endl;
	}
}