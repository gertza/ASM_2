#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    int a = 0;
    int rez = 0;
    cout << "введите переменную a ";
    cin >> a;
    _asm
    {
        XOR EAX, EAX
        ADD EAX, 3
        ADD EAX, a
        ADD rez, EAX
    }
    cout << "результат операции= " << rez << endl;;
}

