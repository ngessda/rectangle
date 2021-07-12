#include <iostream>

int main()
{
	using namespace std;

	setlocale(LC_ALL, "rus");

	const char mainSymbol = '*';
	const char secondSymbol = '$';

	int weight, height;

	cout << "¬ведите высоту пр€моугольника: ";
	cin >> height;
	cout << "¬ведите ширину пр€моугольника: ";
	cin >> weight;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < weight; j++)
		{
			if (i >= 1 && j >= 1 && i <= (height - 2) && j <= (weight - 2))
			{
				cout << secondSymbol;
			}
			else
			{
				cout << mainSymbol;
			}
		}
		cout << endl;
	}
}