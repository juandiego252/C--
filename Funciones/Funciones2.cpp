#include <iostream>
#include <iomanip>
using namespace std;
int menu(int op);
int main()
{
    int opciones;
    opciones = menu(opciones); 
    do
    {
        opciones = menu(opciones);
        switch (opciones)
        {
        case 1:
            break;
        
        default:
            break;
        }
    } while (opciones != 0);

    return 0;
}

int menu(int op)
{
    cout << "1." << endl;
    cout << "2." << endl;
    cout << "3." << endl;
    cout << "4." << endl;
    cout << "5." << endl;
    cout << "6." << endl;
    cout << "7." << endl;
    cout << ">:";
    cin >> op;
    return op;
}