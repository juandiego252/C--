#include <iostream>
#include <iomanip>
using namespace std;
// Dos funciones sin prototipo una los datos del colegio y la otra funcion para la universiad
int suma(int a)
{
    int res;
    res = a + 3;
    return res;
}
int main()
{
    int a;
    cout << "Ingrese a " << endl;
    cin >> a;
    suma(a);
    return 0;
}