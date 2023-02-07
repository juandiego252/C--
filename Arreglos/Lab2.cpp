#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void arreglonotas();
void calzados();
int main()
{

    calzados();
    return 0;
}

void ejercicio1()
{
    char elementos[5];
    cout << "Ingrese caracteres" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> elementos[i];
    }

    cout << "Elementos ordenados" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << elementos[i] << "\t";
    }
    cout << endl;
    cout << "Orden inverso" << endl;
    for (int i = 4; i >= 0; i--)
    {
        cout << elementos[i] << "\t";
    }
}

void ejercicio2()
{
    int max = 0, min = 0;
    int suma = 0, promedio = 0;
    int notas[10];
    int *a;
    a = notas;
    string nombres[10];
    cout << "Ingrese el nombre y la califiacion" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "*__:";
        cin >> nombres[i];
        cout << ">:";
        cin >> notas[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << nombres[i] << ":" << notas[i] << endl;
    }
    for (int i = 0; i < 10; i++)
    {
        suma = suma + notas[i];
        promedio = suma / 10;
    }

    cout << "El promedio de notas es de:" << promedio << endl;

    for (int i = 0; i < 10; i++)
    {
        if (notas[i] > max)
        {
            max = notas[i];
        }
        if (i == 0)
        {
            min = *a;
        }
        else
        {
            if (*a < min)
            {
                min = *a;
            }
        }
        *a++;
    }
    cout << "La nota mas alta es:" << max << endl;
    cout << "La nota mas baja es:" << min << endl;
}

void ejercicio3()
{
    srand(time(NULL));
    int temp;
    int dimension;
    cout << "Ingrese la dimension del arreglo" << endl;
    cin >> dimension;
    int array[dimension];
    for (int i = 0; i < dimension; i++)
    {
        cout << ">:";
        cin >> array[i];
    }

    for (int i = 0; i < dimension; i++)
    {
        cout << array[i];
    }
    cout << "Datos ordenados" << endl;
    for (int i = 0; i < dimension - 1; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << endl;
    for (int i = 0; i < dimension; i++)
    {
        cout << array[i];
    }
}

void ejercicio4()
{
    arreglonotas();
}

void arreglonotas()
{
    int notas[5];
    int temp;
    string carrera[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Carrea:";
        getline(cin, carrera[i]);
        cout << "Notas:";
        cin >> notas[i];
        cin.ignore();
    }

    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (notas[j] > notas[j + 1])
            {
                temp = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = temp;
            }
            carrera[j];
        }
    }

    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << carrera[i] << ":" << notas[i] << endl;
    }

    cout << "Busqueda:" << endl;
    string busqueda;
    int indice = -1;
    cout << "Ingrese la Carrera a buscar:" << endl;
    cin >> busqueda;
    for (int i = 0; i < sizeof(carrera) / sizeof(carrera[0]); i++)
    {
        string nombreActual = carrera[i];
        if (nombreActual == busqueda)
        {
            indice = i;
            break;
        }
    }
    if (indice == -1)
    {
        cout << "No encontrado\n";
    }
    else
    {
        cout << "Encontrado en el indice " << indice + 1 << std::endl;
    }
}

void calzados()
{
    cout << "Tienda de Calzado" << endl;
    cout << "Tallas: S/M/L/XL" << endl;
    cout << "Color: Rojo/Negro/Azul" << endl;
    string talla[3], color[3], genero[3], tipo[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Ingrese la talla:" << endl;
        getline(cin, talla[i]);
        cout << "Ingrese el color:" << endl;
        getline(cin, color[i]);
        cout << "Nin@, Hombre, mujer:" << endl;
        getline(cin, genero[i]);
        cout << "Casual Deportivo:" << endl;
        getline(cin, tipo[i]);
    }

    cout << "Resultados:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ":" << genero[i] << ":" << tipo[i] << ":" << color[i] << ":" << talla[i] << endl;
    }

    cout << "Busqueda:" << endl;
    string busqueda;
    int indice = -1;
    cout << "Ingrese la talla a buscar:" << endl;
    cin >> busqueda;
    for (int i = 0; i < sizeof(talla) / sizeof(talla[0]); i++)
    {
        string nombreActual = talla[i];
        if (nombreActual == busqueda)
        {
            indice = i;
            break;
        }
    }
    if (indice == -1)
    {
        cout << "No encontrado\n";
    }
    else
    {
        cout << "Encontrado en el indice " << indice + 1 << std::endl;
    }

    int arreglo[2, 2];
}