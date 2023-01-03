#include <iostream>
using namespace std;
// Dos funciones sin prototipo una los datos del colegio y la otra funcion para la universiad
void tiempo(int totalseg, int &horas, int &min, int &seg);

int main()
{
    int segundos, horas, min, seg;
    cout << "Ingrese el total de segundos" << endl;
    cin >> segundos;
    tiempo(segundos, horas, min, seg);
    cout << "Horas:" << horas << endl;
    cout << "Minutos:" << min << endl;
    cout << "Segundos:" << seg << endl;
    return 0;
}

void tiempo(int totalseg, int &horas, int &min, int &seg)
{
    horas = totalseg / 3600;
    totalseg = totalseg % 3600;
    min = totalseg / 60;
    seg = totalseg % 60;
}