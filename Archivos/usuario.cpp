#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void escribir();

int main()
{
    escribir();
    return 0;
}

void escribir()
{

    char respuesta;
    string nombre;
    string frases;
    cout << "Digite el nombre del archivo:";
    getline(cin, nombre);
    ofstream archivo;
    archivo.open(nombre.c_str(), ios::out);
    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo:\n";
    }

    do
    {
        fflush(stdin);
        cout << "Ingrese una frase:" << endl;
        getline(cin, frases);
        archivo << frases <<endl;

        cout << "Desea seguir escribiendo frases ? (S/n)" << endl;
        cin >> respuesta;

    } while (respuesta == 'S' || respuesta == 's');

    archivo.close();
}