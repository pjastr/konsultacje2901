#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<double> temp;
	double suma = 0;
	for (int i = 1; i <= 10; i++)
	{
		double liczba;
		cin >> liczba;
		temp.push_back(liczba);
		suma += liczba;
	}
	double srednia = suma / temp.size();
	int licznik = 0;
	/*for (double elem : temp)
	{
		if (elem > srednia)
		{
			licznik++;
		}
	}*/
	for (int i = 0; i < temp.size(); i++)
	{
		if (temp[i] > srednia)
		{
			licznik++;
		}
	}
	cout << licznik << endl;
}