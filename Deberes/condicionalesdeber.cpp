#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numero = 0, numero2 = 0;
    cout << "----------------------------------------" << endl;
    cout << setw(20) << "Ingrese dos numeros" << endl;
    cout << "----------------------------------------" << endl;
    cout << ">";

    cin >> numero;
    cout << ">";
    cin >> numero2;
    if (numero % 2 == 0)
    {
        cout << "El numero ingresado es par." << endl;
        cout << "El numero es multiplo de 2." << endl;
        if (numero > 0)
        {
            cout << "El numero es positivo." << endl;
        }
        if (numero < 0)
        {
            cout << "El numero es negativo." << endl;
        }
        if (numero == 0)
        {
            cout << "El numero es neutro." << endl;
        }
        if (numero % 3 == 0)
        {
            cout << "El numero es multiplo de 3." << endl;
        }
        if (numero % 5 == 0)
        {
            cout << "El numero es multiplo de 5." << endl;
        }
    }
    else
    {
        cout << "El numero ingresado es impar." << endl;
        if (numero > 0)
        {
            cout << "El numero es positivo." << endl;
        }
        if (numero < 0)
        {
            cout << "El numero es negativo." << endl;
        }
        if (numero % 3 == 0)
        {
            cout << "El numero es multiplo de 3." << endl;
        }
        if (numero % 5 == 0 && numero >= 0)
        {
            cout << "El numero es multiplo de 5." << endl;
        }

        if (numero % 2 == 0 && numero2 % 2 == 0)
        {
            cout << "Los dos numeros ingresados son pares" << endl;
        }
        else
        {
            cout << "Los dos numeros son impares" << endl;
        }

        if (numero % 2 == 0 || numero2 % 2 == 0)
        {
            cout << "El numero es par" << endl;
        }
        else
        {
            cout << "EL numero es impar" << endl;
        }
    }

    return 0;
}