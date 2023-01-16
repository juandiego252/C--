#include <iostream>
using namespace std;

void funcion1(); // Funcion void sin argumentos y con prototipo
void funcion2();
void NumPar(); // CON PROTOTIPO DEBAJO del MAIN

void Primos() // SIN PROTOTIPO ARRIBA DEL MAIN
{
    int numeros;
    cout << "Ingrese un numero:" << endl;
    cin >> numeros;
    for (int i = 1; i < numeros; i++)
    {
        if (numeros % i == 0)
        {
            cout << "El numero  no es primo" << endl;
        }
    }
}

void SumaNumeros(int numero1, int numero2);

int multiplicacion(int a, int b);
int resta()
{
    int z, p, r;
    cout << "Ingrese numero 1" << endl;
    cin >> z;
    cout << "Ingrese numero 2" << endl;
    cin >> p;
    r = z - p;
    return r;
}

int main()
{

    // funcion1();
    // funcion2();
    // NumPar();
    // Primos();
    /*
    int x, y;
    cout << "Ingrese el numero 1." << endl;
    cin >> x;
    cout << "Ingrese el numero 2." << endl;
    cin >> y;
    SumaNumeros(x, y);

    */
    int primero, segundo;
    cout << "Ingrese el primer termino:" << endl;
    cin >> primero;
    cout << "Ingrese el segundo termino:" << endl;
    cin >> segundo;
    cout << multiplicacion(primero, segundo);
    cout << "FUNCION RESTA" << endl;
    cout << resta();

    return 0;
}

void funcion1()
{
    cout << "Hola esto va desde la funcion 1" << endl;
}

void funcion2()
{
    int resultado;

    for (int i = 1; i <= 8; i++)
    {
        resultado = i * 2;
        cout << i << "x"
             << "2"
             << "=" << resultado << endl;
    }
}

void NumPar()
{
    int numero;
    cout << "Ingrese un numero:" << endl;
    cin >> numero;
    if (numero % 2 == 0)
    {
        cout << "El numero es par" << endl;
    }
    else
    {
        cout << "El numero no es par" << endl;
    }
}

void SumaNumeros(int numero1, int numero2)
{

    int resultado;
    resultado = numero1 + numero2;
    cout << "Resultado:" << resultado << endl;
}
int multiplicacion(int a, int b)
{
    return (a * b);
}