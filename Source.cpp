#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i, b;
	double chislo;
	cout << "Введите натуральное число ";
	cin >> chislo;
	b = 0;
	if ((chislo - int(chislo) == 0) && (chislo > 0))
	{
		for (i = 2; i <= chislo / 2; i++)
		{
			if (int(chislo) % i == 0)
			{
				b = 1;
				break;
			}
		}
		if (b == 0)
			cout << "Это простое число!\n";
		else
			cout << "Это составное число!\n";
	}
	else
		cout << "Ошибка ввода\n";
	return 0;
}