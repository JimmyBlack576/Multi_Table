#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Введите число для отображения таблицы умножения на него: \n";
    int c, a;
    cin >> a;
    for (int i = 2; i <= 10; i++)
    {
        c = a * i;
        cout << endl << a << " * " << i << " = " << c;
    }
    

}

