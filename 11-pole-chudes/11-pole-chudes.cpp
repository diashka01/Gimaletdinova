#include <iostream>
using namespace std;
int main()
{
	char pole[100], chudes[100], bukva[100], nazvannye[100];
	int i, p, l, chetchik, f, j, ch, kk, pp;
	cout << "Enter your word: ";
	cin >> pole;
	kk = 0;
	pp = 0;
	l = strlen(pole);
	for (i = 0; i < l; i++)
	{
		chudes[i] = '-';
	}
	chudes[l] = '\0';
	p = 0;
	f = 0;
	ch = 0;
	cout << chudes << endl;
	while (p < l)
	{
		chetchik = 0;
		cout << "Enter your letter: ";
		cin >> bukva;
		if (strlen(bukva) == 1)
		{

			for (j = 0; j < f; j ++)
				if (nazvannye[j] == bukva[0])
					ch = 1;
			if (ch == 0)
			{
				for (i = 0; i < l; i++)
				{
					if (pole[i] == bukva[0])
					{
						chudes[i] = bukva[0];
						//cout << bukva;
						p++;
						chetchik++;
					}
					nazvannye[f] = bukva[0];
					f++;
				}
				pp = 0;
			}
			else if (ch == 1)
			{
				cout << "Letter uzhe was" << endl;
				pp = 1;
			}
			if (chetchik != 0)
				cout << "You ugadal letter\n";
			else if (pp == 0)
				cout << "You not ugadal letter\n";
			cout << chudes << endl;
			//cout << ch << endl;
			ch = 0;
		}
		else if (strlen(bukva) == l)
		{
			for (i = 0; i < l; i++)
			{
				if (pole[i] != bukva[i])
					chetchik++;
			}
			if (chetchik == 0)
			{
				cout << "You ugadal word" << endl;
				p = l;
				kk++;
			}
			else
			{
				cout << "You not ugadal word" << endl;
				p = l;
				kk++;
			}
		}
		else
		{
			cout << "You not ugadal word" << endl;
			p = l;
			kk++;
		}
	}
	if (kk == 0)
		cout << "You ugadal word" << endl;
	return 0;
}
