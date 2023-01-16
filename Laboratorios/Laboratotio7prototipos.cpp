#include <iostream>
#include <iomanip>
using namespace std;
string nombre1, apellido1, profesion1;
void encabezado();
void frase();
void Saludo();
void servicio();
void personal();
void Funcion_cliente1();
void mostrar1();
void Cliente1();

int main()
{
    Funcion_cliente1();
    Cliente1();

    return 0;
}
void encabezado()
{
    cout << "-----------------------------------------------------------------" << endl;
    cout << setw(38) << "DESARROLLADORES DE SOFTWARE ALFA" << endl;
    cout << setw(40) << "Departamento de gestion de proyectos" << endl;
    cout << setw(40) << "Sector las Universidades - Calle Isabel Catolica y Toledo" << endl;
    cout << setw(30) << "Telefonos 02 2968-789" << endl;
    cout << setw(30) << "Ruc: 1712366467001" << endl;
    cout << "----------------------------------------------------------------" << endl;
}

void frase()
{
    cout << "FRASE" << endl;
    cout << setw(40) << "La combinacion de exito en los negocios es: Haz lo que haces mejor y haz mas de lo que haces" << endl;
    cout << "-----------------------------------------------------------------" << endl;
}

void Saludo()
{
    cout << setw(40) << "La empresa DESARROLLADORES DE SOFTWARE ALFA LE DA LA BIEVENIDA" << endl;
}
void servicio()
{
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "Nuestros servicios son:" << endl;
    cout << setw(25) << "* Crear y desarrollar nuevos programas o sistemas" << endl;
    cout << setw(25) << "* Evaluar sistemas nuevos y existentes" << endl;
    cout << setw(25) << "* Mejorar programas existentes" << endl;
    cout << setw(25) << "* Realizar el mantenimiento correspondiente en los sistemas existentes" << endl;
    cout << setw(25) << "* Elaborar manuales operativos y especificaciones técnicas de los sistemas." << endl;
    cout << "-------------------------------------------------------------------------------------------" << endl;
}
void personal()
{
    cout << "Nuestro equipod de trabajo en las areas de:" << endl;
    cout << setw(30) << "Hospitalaria (Ruben Arias)" << endl;
    cout << setw(30) << "Tecnologica (David Zuleta)" << endl;
    cout << setw(30) << "Educacion (Sinai Franco)" << endl;
    cout << setw(30) << "Bancario (Suyay Miranda)" << endl;
}
void Funcion_cliente1()
{
    cout << "Ingrese su Profesion" << endl;
    cin >> profesion1;
    cout << "Ingrese su Nombre:" << endl;
    cin >> nombre1;
    cout << "Ingrese su Apellidio:" << endl;
    cin >> apellido1;
}
void mostrar1()
{

    cout << "-------------------------------" << endl;
    cout << "Profesion:" << profesion1 << endl;
    cout << "Nombres:" << nombre1 << endl;
    cout << "Apellidos:" << apellido1 << endl;
    cout << "--------------------------------" << endl;
}
void Cliente1()
{
    encabezado();
    frase();
    mostrar1();
    Saludo();
    servicio();
    personal();
}
