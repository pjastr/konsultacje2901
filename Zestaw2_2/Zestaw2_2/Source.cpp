#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	bool isOk = false;
	if (a * a + b * b == c * c)
	{
		isOk = true;
	}
	else if (b * b + c * c == a * a)
	{
		isOk = true;
	}
	else if (a * a + c * c == b * b)
	{
		isOk = true;
	}
	if (isOk)
	{
		cout << "a,bc, spelniaja tw pitagorasa" << endl;
	}
	else
	{
		cout << "a,bc, nie spelniaja tw pitagorasa" << endl;
	}
}