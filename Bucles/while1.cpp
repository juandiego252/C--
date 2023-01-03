#include <iostream>
using namespace std;

int main()
{
    string nombre, apellido;
    int op = 0;
    // cout << "Desea agregar su nombre (1.si/0.no)" << endl;
    // cin >> op;
    int j = 1;
    int k = 1;
    /*
        while (j < 3)
    {
        cout << "Ingrese su nombre" << endl;
        getline(cin, nombre);
        cout << "Ingrese su apellido" << endl;
        getline(cin, apellido);
        j += 1;
        cout << nombre << endl;
        cout << apellido << endl;
    }

    for (int i = 1; i < 2; i++)
    {
        cout << "Ingrese su nombre" << endl;
        getline(cin, nombre);
        cout << "Ingrese su apellido" << endl;
        getline(cin, apellido);
    }
    */
    do
    {
        cout << "Ingrese su nombre" << endl;
        getline(cin, nombre);
        cout << "Ingrese su apellido" << endl;
        getline(cin, apellido);
        k += 1;
    } while (k <= 2);
    return 0;
}