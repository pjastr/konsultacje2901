#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cout << "Podaj ile liczb chcesz wprowadzic" << endl;
	int n;
	cin >> n;
	vector <int> temp;
	for (int i = 1; i <= n; i++)
	{
		cout << "Podaj liczbe nr " << i << endl;
		double liczba;
		cin >> liczba;
		/*if (floor(liczba) == liczba)
		{
			temp.push_back(liczba);
		}*/
		double epsilon = 0.00000001;
		if (abs(floor(liczba) - liczba) < epsilon)
		{
			temp.push_back(liczba);
		}
	}
	cout << "wynik" << endl;
	for (int i = 0; i < temp.size(); i++)
	{
		cout << temp[i] << endl;
	}
}