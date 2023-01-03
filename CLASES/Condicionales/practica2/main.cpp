#include <iostream>
using namespace std;

// variables globales

const int anio = 2022;
const double pi = 3.1415;

int main()
{
    /*
        Tipos de Datos en C++.
        char - caracter ----- > 1 byte
        int - entero ------ > 4 bytes
        bool - boleano ------- > 1 bytes
        float - decimal ------- > 4 bytes
        double - decimal ------- > 8 bytes

        Modificadores de datos.
        short - corto - afecta al dato de tipo int
        long - largo - afecta al dato de tipo int y double
        signed - con signo - afecta a char y int
        unsigned - sin signo - afecta a char y int
    */

    int a = 3;
    sizeof a;
    int suma;
    double multiplicacion;
    suma = a + anio;
    cout << suma << endl;
    multiplicacion = a * pi;
    cout << multiplicacion << endl;
    unsigned int b = 1234;
    signed int c = -1245;

    cout << b << endl;
    cout << c << endl;

    bool ok = true;
    if (a > b)
    {
        ok = false;
    }
    
    return 0;
}
