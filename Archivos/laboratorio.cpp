#include <fstream>
#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int menu();
void leer();
void escribir();
void anadir();
void crear();
void rename();
void eliminar();
string nombre;
int main()
{
    int opciones;
    opciones = menu();
    do
    {
        opciones = menu();
        switch (opciones)
        {
        case 1:
            leer();
            break;
        case 2:
            anadir();
            break;
        case 3:
            crear();
            break;
        case 4:
            rename();
            break;
        case 5:
            eliminar();
            break;
        default:
            cout << "Programa finalizado" << endl;
            break;
        }

    } while (opciones != 6);
    return 0;
}

void leer()
{
    ifstream archivo;
    string texto;
    archivo.open("Datos.txt");
    if (archivo.fail())
    {
        cout << "Error al abrir el archivo" << endl;
    }
    getline(archivo, texto);
    cout << texto << endl;
    archivo.close();
}
void anadir()
{

    ofstream archivo;
    string frase;
    archivo.open("Datos.txt", ios ::app); // abrimos el archivo en modo añadir texto en el

    if (archivo.fail())
    {
        cout << "No se puede abriri el archivo" << endl;
    }
    cout << "Ingrese una frase" << endl;
    cin >> frase;
    archivo << frase << endl;
    cout << "Frase agregada con exito" << endl;
    archivo.close();
}

void crear()
{
    string nombre;
    ofstream archivo;
    cout << "Ingrese el nombre del archivo que desea crear:" << endl;
    cin >> nombre;
    archivo.open(nombre.c_str());
    cout << "Archivo creado con exito" << endl;
}

void rename()
{
    char old[50];
    char nuevo[50];
    cout << "Nombre del archivo anterior :" << endl;
    cin >> old;
    cout << "Nombre del nuevo archivo:" << endl;
    cin >> nuevo;
    rename(old, nuevo);
}

void eliminar()
{
    char nombre[50];
    cout << "Ingrse el nombre del archivo que desea eliminar" << endl;
    cin >> nombre;
    int result = remove(nombre);
    cout << "Archivo eliminado con exito" << endl;
}

int menu()
{
    int op;
    cout << "1. Leer el archivo DATOS" << endl;
    cout << "2. Ingresar un frase al archivo" << endl;
    cout << "3. Crear mas archivos" << endl;
    cout << "4. Renombrar el archivo" << endl;
    cout << "5. Eliminar registro de archivo" << endl;
    cout << "6. Salir" << endl;
    cout << "Op:" << endl;
    cin >> op;
    return op;
}