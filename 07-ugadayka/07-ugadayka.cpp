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
		cout << "N áîëüøå " << i << "(1 äà, 2 íåò, 3 ðàâíî)? ";
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
	cout << "Âû çàäóìàëè " << i << "! À ÿ ìîëîäåö!" << endl;
	cout << "Êîëè÷åñòâî ïîïûòîê:" << chetchik << endl;
	return 0;
}
