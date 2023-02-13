#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void escribir();
int main()
{

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

    do
    {
        fflush(stdin);
        cout << "Ingrese una frase:" << endl;
        getline(cin, frases);
        archivo << frases << endl;

        cout << "Desea seguir escribiendo frases ? (S/n)" << endl;
        cin >> respuesta;

    } while (respuesta == 'S' || respuesta == 's');
}