#include <iostream>
using namespace std;

int main()
{
    int filas = 0, columnas = 0;
    cout << "Filas:" << endl;
    cin >> filas;
    cout << "Columnas:" << endl;
    cin >> columnas;
    int matriz[filas][columnas];
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; columnas < j; j++)
        {
            matriz[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; i++)
        {
            cout << matriz[i][j];
        }
    }

    return 0;
}