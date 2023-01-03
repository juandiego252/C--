#include <iostream>
using namespace std;

int main()
{
    int numero = 0;
    int j,k,l,m,n;
    for (int i = 1; i <= 5; i++)
    {
        cout << "N" << i << ":";
        cin >> numero;
        numero = j;
        numero = k;
        numero = l;
        cout << j << k << l;
    }
    for (int i = 1; i <= 5; i++)
    {

        if (numero % 2 == 0)
        {
            cout << "El numero es par" << endl;
        }
        else
        {
            cout << "El numero es impar" << endl;
        }
        if (numero > 0)
        {
            cout << "El numero es positivo" << endl;
        }
        else
        {
            cout << "El numero es negativo" << endl;
        }
    }

    return 0;
}