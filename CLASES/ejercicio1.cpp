#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4;
    cout << "Ingrese los  valores:" << endl;
    cout << "N1: ";
    cin >> num1;
    cout << "N2: ";
    cin >> num2;
    cout << "N3: ";
    cin >> num3;
    cout << "N4: ";
    cin >> num4;

    if (num1 == num1)
    {
        num1 = num1 * 2;
        cout << "Primer valor ingresado multiplicado por dos:" << num1 << endl;
    }

    if (num2 == num2)
    {
        num2 = num2 + num4;
        cout << "Segundo ingreso sumado con el cuarto:" << num2 << endl;
    }

    if (num3 == num3)
    {
        num3 = num3 + 20;
        cout << "Tercer ingreso sumado con la edad actual:" << num3 << endl;
    }

    return 0;
}