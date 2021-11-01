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
	long int fib[100], i;
	fib[0] = 1;
	fib[1] = 1;
	for (i = 2; i < 100; i++)
		fib[i] = fib[i - 1] + fib[i - 2];
	return fib[chislo];
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
		fibon = Fibonacci(vvodim);
	}
}
