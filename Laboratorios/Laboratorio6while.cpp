#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int op, resultado, i = 0;
    int k = 2, j = 1;
    string nombre, apellido;
    cout << "------------------------------------------" << endl;
    cout << setw(25) << "COLEGIO SAN GABRIEL" << endl;
    cout << "------------------------------------------" << endl;
    cout << setw(30) << "REPASO TABLAS DE MULTIPLICAR" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Ingrese su nombre" << endl;
    cout << ">";
    getline(cin, nombre);
    cout << "Ingrese su apellido" << endl;
    cout << ">";
    getline(cin, apellido);
    do
    {
        cout << "------------------------------------------" << endl;
        cout << setw(25) << "ESCOGA SU GRADO" << endl;
        cout << "------------------------------------------" << endl;
        cout << "1. Primer Grado" << endl;
        cout << "2. Segundo Grado" << endl;
        cout << "3. Tercer Grado" << endl;
        cout << "4. Cuarto Grado" << endl;
        cout << "5. Quinto Grado" << endl;
        cout << "6. Sexto Grado" << endl;
        cout << "0. Salir" << endl;
        cout << ">";
        cin >> op;
        while (op < 0 || op >= 7)
        {
            cout << "Grado ingresado incorrecto (1-6)" << endl;
            cout << "------------------------------------------" << endl;
            cout << setw(25) << "ESCOGA SU GRADO" << endl;
            cout << "------------------------------------------" << endl;
            cout << "1. Primer Grado" << endl;
            cout << "2. Segundo Grado" << endl;
            cout << "3. Tercer Grado" << endl;
            cout << "4. Cuarto Grado" << endl;
            cout << "5. Quinto Grado" << endl;
            cout << "6. Sexto Grado" << endl;
            cout << "0. Salir" << endl;
            cout << ">";
            cin >> op;
        }

        switch (op)
        {
        case 1:
            cout << "Tabla del 2" << endl;
            while (i <= 9)
            {
                i++;
                resultado = i * 2;
                cout << "2"
                     << "x" << i << "=" << resultado << endl;
            }

            break;
        case 2:
            cout << "Tabla del 3 y 4 " << endl;
            while (i <= 9)
            {
                i++;
                resultado = i * 3;
                cout << "3"
                     << "x" << i << "=" << resultado << endl;
            }
            i = 0;
            cout << endl;
            while (i <= 9)
            {
                i++;
                resultado = i * 4;
                cout << "4"
                     << "x" << i << "=" << resultado << endl;
            }

            break;
        case 3:
            cout << "Tabla del 5 y 6" << endl;
            while (i <= 9)
            {
                i++;
                resultado = i * 5;
                cout << "5"
                     << "x" << i << "=" << resultado << endl;
            }
            cout << endl;
            i = 0;
            while (i <= 9)
            {
                i++;
                resultado = i * 6;
                cout << "6"
                     << "x" << i << "=" << resultado << endl;
            }

            break;
        case 4:
            cout << "Tabla del 7 y 8" << endl;
            while (i <= 9)
            {
                i++;
                resultado = i * 7;
                cout << "7"
                     << "x" << i << "=" << resultado << endl;
            }
            cout << endl;
            i = 0;
            while (i <= 9)
            {
                i++;
                resultado = i * 8;
                cout << "8"
                     << "x" << i << "=" << resultado << endl;
            }

            break;
        case 5:
            cout << "Tabla del 9" << endl;
            while (i <= 9)
            {
                i++;
                resultado = i * 9;
                cout << "9"
                     << "x" << i << "=" << resultado << endl;
            }
            break;
        case 6:
            cout << "Todas las Tablas de Multiplicar" << endl;
            while (k <= 9)
            {
                j = 1;
                while (j <= 9)
                {
                    resultado = k * j;
                    cout << k << "x" << j << "=" << resultado << endl;
                    j++;
                }
                cout << endl;
                k++;
            }

            break;
        default:
            cout << "Gracias !" << endl;
            break;
        }
    } while (op != 0);

    return 0;
}