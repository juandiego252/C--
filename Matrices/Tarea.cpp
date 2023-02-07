#include <iostream>
using namespace std;

int main()
{
    int filas1, columnas1, filas2, columnas2;
    int suma = 0, suma2 = 0, secundaria1 = 0, secundaria2 = 0;
    cout << "filas matriz 1:" << endl;
    cin >> filas1;
    cout << "Columnas matriz 1:" << endl;
    cin >> columnas1;
    cout << "Filas matriz 2:" << endl;
    cin >> filas2;
    cout << "Columnas matriz 2:" << endl;
    cin >> columnas2;
    int matriz1[filas1][columnas1];
    int matriz2[filas2][columnas2];
    int matrizresultante[100][100];
    srand(time(NULL));
    for (int i = 0; i < filas1; i++)
    {
        for (int j = 0; j < columnas1; j++)
        {
            matriz1[i][j] = rand() % 10 + 1;
        }
    }
    for (int i = 0; i < filas2; i++)
    {
        for (int j = 0; j < columnas2; j++)
        {
            matriz2[i][j] = rand() % 10 + 1;
        }
    }

    cout << "Matriz 1" << endl;
    for (int i = 0; i < filas1; i++)
    {
        for (int j = 0; j < columnas1; j++)
        {
            cout << "[" << matriz1[i][j] << "]";
        }

        cout << endl;
    }

    cout << "Matriz 2" << endl;
    for (int i = 0; i < filas2; i++)
    {
        for (int j = 0; j < columnas2; j++)
        {
            cout << "[" << matriz2[i][j] << "]";
        }

        cout << endl;
    }

    for (int i = 0; i < filas1; i++)
    {
        for (int j = 0; j < columnas1; j++)
        {
            if (i == j)
            {
                suma = suma + matriz1[i][j];
            }
        }
    }

    cout << "Suma de la Diagonal principal de la matriz 1:"
         << " " << suma << endl;
    for (int i = 0; i < filas2; i++)
    {
        for (int j = 0; j < columnas2; j++)
        {
            if (i == j)
            {
                suma2 = suma2 + matriz2[i][j];
            }
        }
    }

    cout << "Suma de la Diagonal principal de la matriz 2:"
         << " " << suma2 << endl;
    for (int i = 0; i < filas1; i++)
    {
        for (int j = 0; j < columnas1; j++)
        {
            if (i + j == columnas1 - 1)
            {
                secundaria1 = secundaria1 + matriz1[i][j];
            }
        }
    }
    cout << "Suma de la Diagonal secundaria de la matriz 1:"
         << " " << secundaria1 << endl;

    for (int i = 0; i < filas2; i++)
    {
        for (int j = 0; j < columnas2; j++)
        {
            if (i + j == columnas2 - 1)
            {
                secundaria2 = secundaria2 + matriz2[i][j];
            }
        }
    }

    cout << "Suma de la Diagonal secundaria de la matriz 2:"
         << " " << secundaria2 << endl;
    cout << "MULTIPLICACION DE MATRICES" << endl;
    if (columnas1 == filas2)
    {
        for (int i = 0; i < filas1; i++)
        {
            for (int j = 0; j < columnas1; j++)
            {
                matriz1[i][j] = rand() % 10 + 1;
            }
        }

        for (int i = 0; i < filas2; i++)
        {
            for (int j = 0; j < columnas2; j++)
            {
                matriz2[i][j] = rand() % 10 + 1;
            }
        }
        for (int i = 0; i < filas1; i++)
        {
            for (int j = 0; j < columnas1; j++)
            {
                cout << "[" << matriz1[i][j] << "]";
            }

            cout << endl;
        }
        cout << endl;
        for (int i = 0; i < filas2; i++)
        {
            for (int j = 0; j < columnas2; j++)
            {
                cout << "[" << matriz2[i][j] << "]";
            }

            cout << endl;
        }

        for (int i = 0; i < filas1; i++)
        {
            for (int j = 0; j < columnas2; j++)
            {
                matrizresultante[i][j] = 0;
            }
        }
        for (int i = 0; i < filas1; i++)
        {
            for (int j = 0; j < columnas2; j++)
            {
                for (int z = 0; z < columnas1; z++)
                {
                    matrizresultante[i][j] = matrizresultante[i][j] + matriz1[i][z] * matriz2[z][j];
                }
            }
        }
        cout << "RESULTADOS" << endl;
        for (int i = 0; i < filas1; i++)
        {
            for (int j = 0; j < columnas2; j++)
            {
                cout << matrizresultante[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "No se pueden multiplicar las matrices" << endl;
    }

    return 0;
}
