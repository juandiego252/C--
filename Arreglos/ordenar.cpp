#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL)); // Se utiliza para generar los numeros randomicos cada vez que se ejecute el programa
    int temp;
    int dimension;
    cout << "Ingrese la dimension del arreglo" << endl;
    cin >> dimension; // Pedimos el tamaño del arreglo al usuario
    int array[dimension];
    for (int i = 0; i < dimension; i++) // Generamos los numeros randomicos y los guardamos en el arreglo
    {
        array[i] = rand() % 10 + 1;
    }

    for (int i = 0; i < dimension; i++) // se muestra en pantalla los numeros randomicos sin ordenar
    {
        cout << array[i];
    }
    for (int i = 0; i < dimension - 1; i++) // Con dos ciclos por procedemos a ordenar los numeros
    {
        for (int j = 0; j < dimension; j++) // Utilizamos el metodo de ordenamiento burbuja
        {
            if (array[j] > array[j + 1]) // El ultimo dato se compara con el anterior y si es mayor ocupa el lugar
            {    
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << endl;
    for (int i = 0; i < dimension; i++) // se muestra en pantalla los numeros ordenados
    {
        cout << array[i];
    }
    return 0;
}