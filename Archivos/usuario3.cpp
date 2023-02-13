#include <iostream>
#include <fstream>
using namespace std;

void lectura();

int main()
{

    lectura();

    return 0;
}

void lectura()
{

    ifstream archivo;
    string texto;
    archivo.open("programacion.txt", ios ::in);

    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo" << endl;
    }

    while (!archivo.eof())
    {
        getline(archivo, texto);
        cout << texto;
    }

    archivo.close();
}