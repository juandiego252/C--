#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void leer();
void escribir();
int main()
{
    leer();
    escribir();
    return 0;
}

void leer()
{
    ifstream archivo;
    string texto;
    archivo.open("Prueba1.txt", ios ::in);
    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo" << endl;
    }

    while (!archivo.eof())
    {
        getline(archivo, texto);
        cout << texto << endl;
    }
}

void escribir()
{

    ofstream archivo;
    string nombre, apellido;
    archivo.open("Patito.txt", ios ::out);

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo" << endl;
    }

    cout << "Ingrese el nombre:" << endl;
    getline(cin, nombre);
    cout << "Ingrese el apellido:" << endl;
    getline(cin, apellido);

    archivo << "Nombre:" << nombre << endl;
    archivo << "Apellido:" << apellido << endl;
}