#include <iostream>
#include <iomanip>
using namespace std;

double IvaNumero(double numero); // prototipo
int main()
{
    int numero; // variable
    cout <<"N:" << endl;
    cin >> numero;
    IvaNumero(numero); // llamamos a la funcion y le pasamos la variable

    return 0;
}

double IvaNumero(double numero)
{
    double IVA;
    IVA = numero * 0.12; // Operacion para obtener el IVA de un numero
    cout << "El valor del Iva de "
         << " " << numero << " "
         << "es:"
         << " " << IVA << endl;
    return IVA;
}