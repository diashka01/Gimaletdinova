#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i, b;
	double chislo;
	cout << "������� ����������� ����� ";
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
			cout << "��� ������� �����!\n";
		else
			cout << "��� ��������� �����!\n";
	}
	else
		cout << "������ �����\n";
	return 0;
}