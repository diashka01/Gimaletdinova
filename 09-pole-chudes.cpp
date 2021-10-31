#include <iostream>
using namespace std;
int main()
{
	char pole[100], chudes[100], bukva[100];
	int i, p, l, chetchik;
	cout << "Enter your word: ";
	cin >> pole;
	l = strlen(pole);
	for (i = 0; i < l; i++)
	{
		chudes[i] = '-';
	}
	chudes[l] = '\0';
	cout << chudes << endl;
	p = 0;
	while (p < l)
	{
		chetchik = 0;
		cout << "Enter your letter: ";
		cin >> bukva[0];
		for (i = 0; i < l; i++)
		{

			if (pole[i] == bukva[0])
			{
				chudes[i] = bukva[0];
				p ++;
				chetchik++;
			}
		}
		if (chetchik != 0)
			cout << "You ugadal letter\n";
		else
			cout << "You not ugadal letter\n";
		cout << chudes << endl;
	}
	cout << "You ugadal word" << endl;
	return 0;
}
