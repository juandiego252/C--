#include <iostream>
using namespace std;

int main()
{
    string nombre, apellidos;
    int edad;
    double peso;

    cout << "Ingresa tu nombre:" << endl;
    getline(cin, nombre);
    cout << "Ingrese tu apellido:" << endl;
    getline(cin, apellidos);
    cout << "Ingresa tu edad:" << endl;
    cin >> edad;
    cout << "Ingresa tu peso:" << endl;
    cin >> peso;

    cout << nombre << endl;
    cout << apellidos << endl;
    cout << edad << endl;
    cout << peso << endl;
    return 0;
}