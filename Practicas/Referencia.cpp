#include <iostream>
using namespace std;
void intercambio(int &x, int &y);
int main()
{
    int num1 = 10, num2 = 15;
    cout << num1 << endl;
    cout << num2 << endl;
    intercambio(num1, num2);
    cout << "El nuevo valor del numero 1:" << " " << num1 << endl;
    cout << "El nuevo valor del numero 2:" << " " << num2 << endl;
    return 0;
}
void intercambio(int &x, int &y)
{

    int aux;
    aux = x;
    x = y;
    y = aux;
}