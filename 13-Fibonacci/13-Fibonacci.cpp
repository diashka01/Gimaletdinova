#include <iostream>
using namespace std;
int vvod()
{
	double chislo;
	cin >> chislo;
	if (chislo < 1 || chislo > 100 || (chislo - int(chislo) != 0) || cin.fail())
	{
		cout << "Ошибка" << endl;
		cin.clear();
		return 0;
	}
	else
		return chislo;
}
long long int Fibonacci(int chislo)
{
	if (chislo == 0)
		return 0;
	if (chislo == 1)
		return 1;
	else
		return Fibonacci(chislo - 1) + Fibonacci(chislo - 2);
}
int main()
{
	setlocale(LC_ALL, "Russian");
	long int fib[100], chislo, i, fibon;
	int vvodim;
	cout << "Введите число: ";
	vvodim = vvod();
	if (vvodim != 0)
	{
		cout << "Первые " << vvodim << " чисел Фибоначчи: ";
		for (i = 0; i < vvodim; i++)
		{
			fibon = Fibonacci(i);
			cout << fibon << " ";
		}
	}
}

