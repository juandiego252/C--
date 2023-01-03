#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int vol = 0;
    const double led_red = 1.9, led_yellow1 = 2, led_yellow2 = 1.7, led_green = 2.4, led_orange = 2.4, led_white = 3.4, led_blue = 3.4;
    double op;
    int total, total2;
    cout << "-----------------------------------------------" << endl;
    cout << setw(30) << "Bienvenido al Programa" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Ingrese el voltaje de la bateria 9v o 12v" << endl;
    cout << ">";
    cin >> vol;

    if (vol == 9)
    {
        cout << "Colores de led ROJO = 1, AMARILLO = 2 , VERDE = 3,NARANJA = 4,BLANCO = 5,AZUL = 6" << endl;
        cout << "Ingrese el color de led a utilizar:" << endl;
        cout << ">";
        cin >> op;
        if (op == 1)
        {
            total = 9 / led_red;
            cout << "La cantidad de leds a utilizar es de:" << total << endl;
        }
        if (op == 2)
        {
            total = 9 / led_yellow1;
            cout << "La cantidad de leds a utilizar con 1.7v es de:" << total << endl;
            total2 = 9 / led_yellow2;
            cout << "La cantidad de leds a utilizar con 2v es de:" << total2 << endl;
        }
        if (op == 3)
        {
            total = 9 / led_green;
            cout << "La cantidad de leds a utilizar es de:" << total << endl;
        }
        if (op == 4)
        {
            total = 9 / led_orange;
            cout << "La cantidad de leds a utilizar es de:" << total << endl;
        }
        if (op == 5)
        {
            total = 9 / led_white;
            cout << "La cantidad de leds a utilizar es de:" << total << endl;
        }
        if (op == 6)
        {
            total = 9 / led_blue;
            cout << "La cantidad de leds a utilizar es de:" << total << endl;
        }
    }
    if (vol == 12)
    {
        cout << "Colores de led ROJO = 1, AMARILLO = 2 , VERDE = 3,NARANJA = 4,BLANCO = 5,AZUL = 6" << endl;
        cout << "Ingrese el color de led a utilizar:" << endl;
        cout << ">";
        cin >> op;
        if (op == 1)
        {
            total = 12 / led_red;
            cout << "La cantidad de leds a utilizar es de:" << total << endl;
        }
        if (op == 2)
        {
            total = 12 / led_yellow1;
            cout << "La cantidad de leds a utilizar con 1.7v es de:" << total << endl;
            total2 = 12 / led_yellow2;
            cout << "La cantidad de leds a utilizar con 2v es de:" << total2 << endl;
        }
        if (op == 3)
        {
            total = 12 / led_green;
            cout << "La cantidad de leds a utilizar es de:" << total << endl;
        }
        if (op == 4)
        {
            total = 12 / led_orange;
            cout << "La cantidad de leds a utilizar es de:" << total << endl;
        }
        if (op == 5)
        {
            total = 12 / led_white;
            cout << "La cantidad de leds a utilizar es de:" << total << endl;
        }
        if (op == 6)
        {
            total = 12 / led_blue;
            cout << "La cantidad de leds a utilizar es de:" << total << endl;
        }
    }

    return 0;
}
