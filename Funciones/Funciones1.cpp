#include <iostream>
#include <iomanip>
using namespace std;

int menu();
int primo(int numero);
int multiplos();
double NumMayor();
double IvaNumero(double numero);
int main()
{
    int opciones;
    int numero;
    double numeroIva;
    do
    {
        opciones = menu();
        switch (opciones)
        {
        case 1:
            primo(numero);
            break;
        case 2:
            multiplos();
            break;
        case 3:
            NumMayor();
            break;
        case 4:
            cout << "Ingrese un numero" << endl;
            cin >> numeroIva;
            IvaNumero(numeroIva);
            break;

        default:
            cout << "Fin del Programa !" << endl;
            break;
        }
    } while (opciones != 5);

    return 0;
}

int menu()
{
    int op;
    cout << "--------------------------------------------" << endl;
    cout << setw(30) << "MENU EJERCICIOS CON FUNCIONES" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "1. Determinar si un número es primo" << endl;
    cout << "2. Multiplos de 3" << endl;
    cout << "3. Numero mayor de tres números" << endl;
    cout << "4. Calcular el IVA de un número" << endl;
    cout << "5. Salir" << endl;
    cout << "Ingrese su opcion" << endl;
    cout << ">:";
    cin >> op;

    return op;
}

int primo(int numero)
{
    bool ok = false;
    cout << "Ingrese un numero" << endl;
    cout << ">:";
    cin >> numero;
    if (numero % 2 == 0)
    {
        cout << "Respuesta:" << endl;
        cout << !ok << endl;
    }
    else
    {
        ok = false;
        cout << "Respuesta:" << endl;
        cout << ok << endl;
    }

    return numero;
}

int multiplos()
{
    int n;
    cout << "Ingrese un numero" << endl;
    cin >> n;
    cout << "Los numeros primos entre 1 y " << n << ":" << endl;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << endl;
        }
    }

    return n;
}

double NumMayor()
{
    double n1, n2, n3, max;
    cout << "Ingrese tres numeros" << endl;
    cout << "N1:";
    cin >> n1;
    cout << "N2:";
    cin >> n2;
    cout << "N3:";
    cin >> n3;

    if ((n1 >= n2) && (n1 >= n3))
    {
        max = n1;
        cout << "Numero mayor" << endl;
        cout << max << endl;
    }
    else if ((n2 >= n1) && (n2 >= n3))
    {
        max = n2;
        cout << "Numero mayor" << endl;
        cout << max << endl;
    }
    else
    {
        max = n3;
        cout << "Numero mayor" << endl;
        cout << max << endl;
    }

    return max;
}

double IvaNumero(double numero)
{
    double IVA;
    IVA = numero * 0.12;
    cout << "El valor del Iva de "
         << " " << numero << " "
         << "es:"
         << " " << IVA << endl;
    return IVA;
}