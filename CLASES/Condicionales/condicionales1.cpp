#include <iostream>
#include <iomanip>
using namespace std;
void mundial();
int main()
{
    int n = 0;
    cout << "Ingree un numero entero:" << endl;
    cin >> n;
    if (n > 0)
    {
        cout << "El numero es positivo" << endl;
    }
    if (n < 0)
    {
        cout << "El numero es negativo" << endl;
    }
    if (n == 0)
    {
        cout << "El numero es neutro" << endl;
    }

    mundial();
    return 0;
}

void mundial()
{

    char respuesta[10];
    cout << "Usted viajara a Qatar 2022 ? si/no" << endl;
    cin >> respuesta;

    if ( (respuesta[4] == 'si') || (respuesta[4] == 'SI'))
    {
        cout << "----------------------------------" << endl;
        cout << setw(30) << "BIENVENIDO A QATAR 2022" << endl;
        cout << "----------------------------------" << endl;
    }
    else
    {
        cout << "Ecuador Campeon 2022" << endl;
    }
}