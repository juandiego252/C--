#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void ejercicio4();
void ejercicio5();
void ejercicio6();
void ejercicio7();
void ejercicio8();
void ejercicio9();
void ejercicio10();

int main()
{
    // ejercicio4();
    // ejercicio5();
    // ejercicio6();
    // ejercicio7();
    // ejercicio8();
    // ejercicio9();
    ejercicio10();
    return 0;
}
void ejercicio4()
{
    int notas[2][20] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, {11, 12, 13, 14, 15, 16, 17, 18, 19, 20}};
    cout << notas[0][2] << endl;
    char letras[3][5];
    letras[0][0] = {'P'};
    letras[0][1] = {'A'};
    letras[0][2] = {'P'};
    letras[0][3] = {'E'};
    letras[0][4] = {'L'};
    letras[1][0] = {'I'};
    letras[1][1] = {'T'};
    letras[1][2] = {'O'};
    letras[1][3] = {'D'};
    letras[1][4] = {'E'};
    letras[2][0] = {'C'};
    letras[2][1] = {'O'};
    letras[2][2] = {'L'};
    letras[2][3] = {'0'};
    letras[2][4] = {'R'};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "[" << letras[i][j] << "]";
        }

        cout << endl;
    }
}
void ejercicio5()
{
    double sueldos[3][5] = {{1500, 2345, 980, 4560, 5200}, {1350, 3456, 1100, 1200, 3421}, {1267, 2333, 5600, 2312, 1500}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "[" << sueldos[i][j] << "]";
        }

        cout << endl;
    }
}

void ejercicio6()
{
    string valores[2][3]; // Declaramos la matriz de 2 filas y 3 columnas
    cout << "Ingrese los valores en una matriz" << endl; // Mostramos un mensaje 
    for (int i = 0; i < 2; i++) // con un ciclo for iteramos las filas
    {
        for (int j = 0; j < 3; j++) // con un segundo ciclo iteramos las columnas
        {
            cin >> valores[i][j]; // Guardamos los valores de filas en i y de columnas en j
        }
    }
    for (int i = 0; i < 2; i++) // De la misma manera mostramos la matriz con dos for anidados
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "[" << valores[i][j] << "]";
        }
        cout << endl;
    }
}
void ejercicio7()
{
    double suma = 0;
    double sueldos[3][5] = {{1500, 2345, 980, 4560, 5200}, {1350, 3456, 1100, 1200, 3421}, {1267, 2333, 5600, 2312, 1500}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            suma = suma + sueldos[i][j];
        }

        cout << endl;
    }

    cout << "La suma de todos los sueldos es de:" << suma << endl;
}
void ejercicio8()
{
    int valor[3][2] = {{17, 18}, {19, 20}, {21, 22}};
    cout << "Valor en la posicion 1,1"
         << " " << valor[1][1] << endl;
    cout << "Valor en la posicion 2,1"
         << " " << valor[2][1] << endl;
}
void ejercicio9()
{
    int filas, columnas;
    cout << "Filas" << endl; // Se pide el numero de filas
    cout << ">:";
    cin >> filas;
    cout << "Columna:" << endl; // se piede el numero de columnas
    cout << ">:";
    cin >> columnas;
    int matriz[filas][columnas]; // declaramos la matriz
    cout << "Valores en la matriz:" << endl;
    for (int i = 0; i < filas; i++) // Rellenamos la mtriz utiizando dos for anidados 
    {
        for (int j = 0; j < columnas; j++)
        {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < filas; i++) // Mostramos la matriz 
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "[" << matriz[i][j] << "]";
        }

        cout << endl;
    }
}

void ejercicio10()
{
    srand(time(NULL)); // utilizamos srand para generear nuevos randomicos cada ejecucion
    int matriz[3][4]; // declaramos la matriz
    for (int i = 0; i < 3; i++) // cond dos for anidados rellenamos la matriz con numeros
    {
        for (int j = 0; j < 4; j++)
        {
            matriz[i][j] = rand() % 10 + 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "[" << matriz[i][j] << "]";
        }

        cout << endl;
    }
    int suma = 0, suma2 = 0, suma3 = 0;
    cout << "Suma de elementos" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            suma = suma + matriz[i][j];
        }
    }
    cout << "La suma es de:" << suma << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                suma2 = suma2 + matriz[i][j];
            }
            else
            {
                suma3 = suma3 + matriz[i][j];
            }
        }
    }
    cout << "La suma de numeros pares es de:" << suma2 << endl;
    cout << "La suma de numeros impares es de:" << suma3 << endl;
    for (int i = 0; i < 3; i++)
    {
        suma = i;
        for (int j = 0; j < 4; j++)
        {
            suma = suma + matriz[i][j];
        }
    }

    cout << "La suma de filas es de:" << suma << endl;
    for (int i = 0; i < 3; i++)
    {
        suma = i;
        for (int j = 0; j < 4; j++)
        {
            suma = suma + matriz[i][j];
        }
    }
}