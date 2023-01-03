#include <iostream>
using namespace std;

int main()
{
    /*
        int ingreso, contador = 0;
    int max = 3;
    int valores[max];

    cout << "Ingrese tres ingresos" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Ingreso N" << i + 1 << ":";
        cin >> ingreso;
        contador++;
    }
    cout << "El numero de ingresos fue:" << contador << endl;

    for (int i = 0; i < max; i++)
    {
        cout << "Ingreso N" << i + 1 << ":";
        cin >> valores[i];
    }

    for (int i = 0; i < max; i++)
    {
        cout << "Valores Almacenados" << endl;
        cout << valores[i] << endl;
    }


    */
    int ini, final;
    cout << "Ingrese el inicio " << endl;
    cin >> ini;
    cout << "Ingrese el final" << endl;
    cin >> final;
    /*
    if (final < ini)
    {
        cout << "El final no puede ser menor al incio" << endl;
        cout << "Ingrese el final" << endl;
        cin >> final;
    }
    */
    for (int i = final; i <= ini; i++)
    {
        cout << i << endl;
    }

    /*
    for (int i = 50; i >= 47; i--)
    {
        cout << i << endl;
    }
    */
    return 0;
}