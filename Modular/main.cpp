#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void crear();
int main()
{
    crear();
    return 0;
}

void crear()
{
    string nombre, frases;
    char respuesta;
    cout << "Ingrese el nombre del archivo" << endl;
    getline(cin, nombre);
    ofstream archivo;
    archivo.open(nombre.c_str(), ios ::out);
    if (archivo.fail())
    {
        cout << "No se puede abrir el archivo" << endl;
    }

    cout << "Ingrese una frase:" << endl;
    getline(cin, frases);
    archivo << frases << endl;
    archivo.close();

    cout << "Frase agregada con exito !" << endl;
}
