#include <iostream>
using namespace std;
int vvod()
{
	double chislo;
	cin >> chislo;
	if (chislo < 0 || chislo > 100000 || (chislo - int(chislo) != 0) || cin.fail())
	{
		cout << "Îøèáêà" << endl;
		cin.clear();
	}
	else
		return chislo;
}
int factorial(int vvod)
{
	long long int fact;
	int i;
	fact = 1;
	for (i = 1; i <= vvod; i++)
		fact = fact * i;
	return fact;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int vvodim;
	long long int vivodim;
	cout << "Ââåäèòå ÷èñëî: ";
	vvodim = vvod();
	vivodim = factorial(vvodim);
	cout << "Ôàêòîðèàë äàííîãî ÷èñëà: " << vivodim;
}
