#include <iostream>
#include <stdio.h>
using namespace std;

class LIFO 
{
private:
	int *p, len, elem;
public:
	LIFO(int n) 
	{
		len = n;
		p = new int[len];
		elem = 0;
	}
	~LIFO() 
	{
		delete[] p;
	}

	void push(int pl) 
	{
		p[elem] = pl;
		elem++;
		
	}
	void pop() {
		int	i = 0;
		cout << "изылечен элемент " << p[0] << "\n";
		while (i < len - 1)
		{
			p[i] = p[i + 1];
			i++;
		}
		len--;
	}
	void print()
	{
		for (int i = 0; i < len; i++) {
			cout << p[i];
			if (i < len - 1)
				cout << " ";
		}
		cout << endl;
	}
};


int main() 
{
	int n, i, elem;
	setlocale(LC_ALL, "Russian");
	cout << "Введите количество элементов ";
	cin >> n;
	LIFO massiv(n);
	i = 0;
	cout << "Введите элементы ";
	while (i < n) 
	{
		cin >> elem;
		massiv.push(elem);
		i++;
	}
		massiv.pop();
		massiv.pop();
		massiv.print();
}