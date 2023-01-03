#include <iostream>
using namespace std;
int porValor(int n);
int porReferencia(int &x);
int main()
{
    int numero = 10;
    cout << "El valor incial que almacena la variable numero es:"
         << " " << numero << endl;
    porValor(numero);
    cout << "Llamado a la funcion por valor" << endl;
    cout << numero << endl;
    cout << "Llamado a la funcion por referencia" << endl;
    porReferencia(numero);
    cout << "El valor por referencia es "
         << " " << numero << endl;

    return 0;
}

int porValor(int n)
{

    n = 150;
    return n;
}

int porReferencia(int &x)
{

    x = 200;
    return x;
}