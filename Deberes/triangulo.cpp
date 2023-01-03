#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    int valor, filas;
    cout << "Triangulo de Pascal" << endl;
    cout << "Ingrese el numero de filas" << endl;
    cin >> filas;

    for (i = 0; i < filas; i++) // ciclo utilizado para el numero de filas
    {
        valor = 1;
        for (j = 0; j < filas - 1 - i; j++) // ciclo utilizado para los espacios
        {
            cout << " ";
        }

        for (k = 0; k <= i; k++) // ciclo utilizado para las operaciones.
        {
            cout << " " << valor;
            valor = valor * (i - k) / (k + 1);
        }

        cout << endl
             << endl;
    }

    return 0;
}