#include <iostream>
using namespace std;
int main()
{
    char name[20];
    cout << "Введите свое имя\n";
    cin.getline(name, 20);
    cout << "Привет, "<< name <<"!\n";
    return 0;
}
