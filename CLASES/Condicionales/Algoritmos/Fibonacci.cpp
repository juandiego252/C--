#include <iostream>

using namespace std;

int main()
{
    int suma, aux;
    int z = 0, y = 1; // Utilizamos dos variables.

    cout << z;
    cout << y;
    suma = z + y; // suma toma el valor de 1.
    cout << suma;
    z = y;        // ahora z = 1.
    y = suma;     // suma = 1.
    suma = z + y; // suma = 2.
    cout << suma;
    z = y;
    y = suma;
    suma = z + y;
    cout << suma;
    z = y;
    y = suma;
    suma = z + y;
    cout << suma;
    z = y;
    y = suma;
    suma = z + y;
    cout << suma << endl;

    return 0;
}