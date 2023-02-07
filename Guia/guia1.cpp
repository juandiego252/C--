#include <iostream>
#include <string>
using namespace std;
int main()
{
    string nombres[3]; // Declaramos el arreglo
    cout << "Ingrese tres nombres:" << endl; // Mostramos un mensaje en pantalla 
    for (int i = 0; i < 3; i++) // Declarammos un ciclo for para iterar el arreglo
    {
        getline(cin, nombres[i]); // Utilizamos getline para poder obtener los espacios si el usuario ingresa "Juan Deigo"
    }

    cout << "Nombres Ingresados:" << endl; // Mostramos los nombres con otro ciclo for
    for (int i = 0; i < 3; i++)
    {
        cout << nombres[i] << endl;
    }

    return 0;
}  