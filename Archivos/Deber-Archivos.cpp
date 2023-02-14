#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void escribir();
void leer();
int main()
{
    escribir();
    leer();
    return 0;
}

void escribir()
{
    char respuesta;
    string nombre;
    string frases;
    cout << "Nombre del archivo" << endl;
    getline(cin, nombre);
    ofstream archivo;
    archivo.open(nombre.c_str(), ios ::out);
    if (archivo.fail())
    {
        cout << "Error al abrir el archivo" << endl;
    }

    cout << "Ingrese una frase:" << endl;
    getline(cin, frases);
    archivo << frases << endl;
}

void leer()
{
    ifstream archivo;
    string texto;
    archivo.open("Deber.txt", ios ::in);

    cout << "Lectura del archivo" << endl;
    while (!archivo.eof())
    {
        getline(archivo, texto);
        cout << texto << endl;
    }
}