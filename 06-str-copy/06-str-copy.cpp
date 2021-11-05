#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char string[100], copystring[100];
    int i, l;
    cout << "Введите строку:";
    cin.getline(string, 100);
    l = strlen(string);
    for (i = 0; i <= l - 1; i ++)
    {
        copystring[i] = string[i];
    }
    cout << "Скопированная строка: "<< copystring <<"\n";
    return 0;
}
