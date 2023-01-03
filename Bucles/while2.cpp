#include <iostream>
using namespace std;

int main()
{
    string colores;
    int inicio, fin;
    cout << "Ingrese el inicio" << endl;
    cin >> inicio;
    cout << "Ingrese el fin" << endl;
    cin >> fin;
    cin.ignore();
    while (inicio <= fin)
    {
        cout << "Ingrese colores de led" << endl;
        getline(cin, colores);
        inicio += 1;
    }

    return 0;
}