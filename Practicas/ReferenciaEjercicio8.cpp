#include <iostream>
using namespace std;
void cambio(int cantidad_dolares, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno);
int main()
{
    int dolares, cien, cicuenta, veinte, diez, cinco, uno;
    cout << "Digite la cantidad en dolares" << endl;
    cin >> dolares;
    cambio(dolares, cien, cicuenta, veinte, diez, cinco, uno);
    cout << "Cantidad de billtes a entregar como cambio" << endl;
    cout << "Cien:" << cien << endl;
    cout << "Cincuenta:" << cicuenta << endl;
    cout << "veinte:" << veinte << endl;
    cout << "Diez:" << diez << endl;
    cout << "Cinco:" << cinco << endl;
    cout << "Uno:" << uno << endl;
    return 0;
}

void cambio(int cantidad_dolares, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno)
{
    cien = cantidad_dolares / 100;
    cantidad_dolares = cantidad_dolares % 100;
    cincuenta = cantidad_dolares / 50;
    cantidad_dolares = cantidad_dolares % 50;
    veinte = cantidad_dolares / 20;
    cantidad_dolares = cantidad_dolares % 20;
    diez = cantidad_dolares / 10;
    cantidad_dolares = cantidad_dolares % 10;
    cinco = cantidad_dolares / 5;
    uno = cantidad_dolares % 5;
}