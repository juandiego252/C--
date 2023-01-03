#include <iostream>
#include <math.h>
using namespace std;
void PotenciaReferencia(int &xnum, int &ynum);
int PoteciaValor(int num, int num2);

int main()
{
    int numero1,numero2;
    cout << "Digite la base " << endl;
    cin >> numero1;
    cout << "Digite el exponente " << endl;
    cin >> numero2;
    cout << "Potencia de un numero por Referencia" << endl;
    PotenciaReferencia(numero1,numero2);
    cout << "Potencia de un numero por Valor" << endl;
    PoteciaValor(numero1, numero2);

    return 0;
}

void PotenciaReferencia(int &xnum, int &ynum)
{
    int resultado;
    resultado = pow(xnum, ynum);
    cout << resultado << endl;
}

int PoteciaValor(int num, int num2)
{
    int resultado;
    resultado = pow(num,num2);
    cout << resultado << endl;
    return resultado;
}