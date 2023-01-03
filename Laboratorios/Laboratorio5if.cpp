#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int op;
    do
    {
        cout << "---------------------------" << endl;
        cout << setw(25) << "CURSOS DEPORTIVOS GRATIS" << endl;
        cout << "---------------------------" << endl;
        cout << "----------------------------------------------------------------------------------" << endl;
        cout << "Importante ! TODOS LOS CURSOS OFERTADOS SON GRATIS Y SU DURACION ES DE UN MES" << endl;
        cout << "----------------------------------------------------------------------------------" << endl;
        cout << "1. Curso De Futbol " << endl;
        cout << "2. Curso de Natacion" << endl;
        cout << "3. Curso de Basquet" << endl;
        cout << "4. Curso de Areobicos" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion" << endl;
        cout << ">";
        cin >> op;
        if (op == 1)
        {
            cout << "-----------------------------------------------------" << endl;
            cout << setw(40) << "Bienvenido al Curso de Futbol" << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << "REQUISITOS DE INSCRIPCION" << endl;
            cout << "-. Tener de 8 a 17 años" << endl;
            cout << "-. Presentar Copias de Cedula " << endl;
            cout << "-. Poseer Indumentaria deportiva " << endl;
        }
        if (op == 2)
        {
            cout << "-----------------------------------------------------" << endl;
            cout << setw(40) << "Bienvenido al Curso de Natacion" << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << "REQUISITOS DE INSCRIPCION" << endl;
            cout << "-. Tener de 12 a 18 años" << endl;
            cout << "-. Presentar Copias de Cedula " << endl;
            cout << "-. Poseer terno de baño y gorra de baño" << endl;
            cout << "-. Si usted es principiante poseer flotadores" << endl;
            cout << "-. Poseer Gafas de Natacion" << endl;
        }
        if (op == 3)
        {
            cout << "-----------------------------------------------------" << endl;
            cout << setw(40) << "Bienvenido al Curso de Basquet" << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << "REQUISITOS DE INSCRIPCION" << endl;
            cout << "-. Tener de 5 a 15 años" << endl;
            cout << "-. Poseer Indumentaria deportiva y calzado adecuado" << endl;
        }
        if (op == 4)
        {
            cout << "-----------------------------------------------------" << endl;
            cout << setw(40) << "Bienvenido al Curso de Aerobicos" << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << "REQUISITOS DE INSCRIPCION" << endl;
            cout << "-. Tener de 8 a 60 años" << endl;
            cout << "-. Presentar Copias de Cedula " << endl;
            cout << "-. Poseer Indumentaria deportiva " << endl;
        }
        if (op > 4 || op < 0)
        {
            cout << "Opcion incorrecta (1-4)" << endl;
        }
    } while (op != 0);

    return 0;
}