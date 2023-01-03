#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int num = 0;

    cout << "Ingrese un numero:" << endl;
    cin >> num;
    if (num == 10000)
    {
        cout << "Fin del programa" << endl;
    }
    if (num >= 1 && num <= 9)
    {
        num = pow(num, 2);
        cout << "Numero de un digitio elevado al cuadrado:"
             << " " << num << endl;
    }

    if (num >= 10 && num < 100)
    {
        num = num * 2;
        cout << "Numero de Dos cifras multiplicado por dos"
             << " " << num << endl;
    }
    if (num >= 100 && num < 1000)
    {
        num = num - 100;
        cout << "Numero de tres cifras -100:"
             << " " << num << endl;
    }
    if (num == 0 || num < 0)
    {
        cout << "Error numero igual a cero o negativo" << endl;
    }

    return 0;
}