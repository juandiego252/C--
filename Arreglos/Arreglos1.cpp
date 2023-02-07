#include <iostream>
#include <string>
using namespace std;
int const MAX = 3;
int main()
{

    int pos = 0; // Variable utilizada para la nota mayor o menor 
    double resultado = 0; // variable donde se almacena 
    int Nota_test[MAX]; // Primer arreglo donde se almacenaran las 3 primeras notas
    int Nota_Tarea[MAX]; // segundo arreglo donde se almacenaran las otras 3 notas
    int resultados[MAX]; // arreglo donde se almacena los resultados.
    cout << "Ingrese Las notas del Test" << endl; // Ingreso de notas con un ciclo for
    for (int i = 0; i < MAX; i++)
    {
        cout << ">:";
        cin >> Nota_test[i];
    }
    cout << "Ingrese Las notas de Tarea" << endl; // Segundo ingreso de notas con ciclo for
    for (int i = 0; i < MAX; i++)
    {
        cout << ">:";
        cin >> Nota_Tarea[i];
    }
    for (int i = 0; i < MAX; i++) // Promedio de notas entre los dos arreglos
    {
        resultados[i] = (Nota_test[i] + Nota_Tarea[i] / 2);
        cout << resultados[i] << endl;
    }

    if (resultados[0] > resultados[1] && resultados[2]) // Condicionales de comparacion entre el promedio de notas
    {
        cout << "Nota mayor: " << resultados[0] << endl; // Nota mayor si la posicion 0 es mayor a la posicion 1 y 2
    }
    if (resultados[1] > resultados[2]) // de 
    {
        cout << "Nota mayor: " << resultados[0] << endl;;
    }
    else
    {
        cout << "Nota mayor: " << resultados[2] << endl;
    }

    return 0;
}