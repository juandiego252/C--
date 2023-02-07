#include <iostream>
#include <cmath>
using namespace std;
void exponente_for(int x, int y);
void exponente_pow(int x, int y);
void raiz(int x);
int menu();
int main()
{
    int raiz_cuadrada;
    int base, exponente, op;
    cout << "Ingrese la base" << endl;
    cout << ">:";
    cin >> base;
    cout << "Ingrese el exponenete" << endl;
    cout << ">:";
    cin >> exponente;

    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            exponente_for(base, exponente);
            break;
        case 2:
            exponente_for(base, exponente);
            break;
        case 3:
            raiz(raiz_cuadrada);
            break;
        default:
            break;
        }
    } while (op != 0);

    return 0;
}

void exponente_for(int x, int y)
{
    int resultado = 1;
    for (int i = 0; i < y; i++)
    {
        resultado = resultado * x;
    }

    cout << "Resultado:" << resultado << endl;
}

void exponente_pow(int x, int y)
{
    cout << "Resultado:" << pow(x, y) << endl;
}

int menu()
{

    int op;
    cout << "MENU" << endl;
    cout << "1. Con for" << endl;
    cout << "2. Con pow" << endl;
    cout << "3. Raiz Cuadrada" << endl;
    cout << "0. Salir" << endl;
    cout << "Opcion:" << endl;
    cin >> op;

    return op;
}

void raiz(int x)
{
    int resultado;
    cout << "Ingrese el numero a sacar la raiz:" << endl;
    cin >> x;
    resultado = sqrt(x);
    cout << "Resultado:" << resultado << endl;
}
