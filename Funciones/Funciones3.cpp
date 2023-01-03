#include <iostream>
using namespace std;
void edad(int edad, int anio_actual);
void edad_sinparametros();
int main()
{
    int edad_user, anio;
    cout << "Ingrese su edad:" << endl;
    cin >> edad_user;
    cout << "Ingrese el año actual" << endl;
    cin >> anio;
    edad(edad_user, anio);
    edad_sinparametros();

    return 0;
}

void edad(int edad, int anio_actual)
{

    int anio_nacimiento;
    anio_nacimiento = anio_actual - edad;
    cout << "El año de nacimiento es:" << anio_nacimiento << endl;
}

void edad_sinparametros()
{

    int edad, anio, anio_nascimiento;
    cout << "Ingrese el año actual" << endl;
    cin >> anio;
    cout << "Ingrese la edad actual" << endl;
    cin >> edad;
    anio_nascimiento = anio - edad;
    cout << "El año de nacimiento es:" << anio_nascimiento << endl;
}