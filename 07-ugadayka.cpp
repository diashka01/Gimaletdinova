#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int chislo, max, min, i, p, chetchik;
	max = 100;
	min = 0;
	chetchik = 0;
	p = 0;
	while (p != 3)
	{
		i = (max + min) / 2;
		cout << "N больше " << i << "(1 да, 2 нет, 3 равно)? ";
		cin >> p;
		if (p == 1)
		{
			min = i;
		}
		else if (p == 2)
		{
			max = i;
		}
		chetchik++;
	}
	cout << "Вы задумали " << i << "! А я молодец!" << endl;
	cout << "Количество попыток:" << chetchik << endl;
	return 0;
}