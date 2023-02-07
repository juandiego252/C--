#include <iostream>
using namespace std;
void edad(int edad, int anio_actual); // Prototipos
int main()
{
    int edad_user, anio;
    cout << "Ingrese su edad:" << endl;
    cin >> edad_user;
    cout << "Ingrese el año actual" << endl;
    cin >> anio;
    edad(edad_user, anio); // Paramatros que enviamos a la funcion
    return 0;
}

void edad(int edad, int anio_actual)
{

    int anio_nacimiento;
    anio_nacimiento = anio_actual - edad;
    cout << "El año de nacimiento es:" << anio_nacimiento << endl;
}

