#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    
    int a, b, c, d;
    int suma = 0, resta = 0, mul = 0, div = 0, pot = 2, raiz;
    cout << "N1:";
    cin >> a;
    cout << "N2:";
    cin >> b;
    cout << "N3:";
    cin >> c;
    cout << "N4:";
    cin >> d;

    cout << "Sumas" << endl;
    suma = a + b + c + d;
    cout << suma << endl;

    cout << "Restas" << endl;
    resta = a - b - c - d;
    cout << resta << endl;

    cout << "Multiplicacion" << endl;
    mul = a * b * c * d;
    cout << mul << endl;

    cout << "Division" << endl;
    div = a / b;
    cout << div << endl;

    cout << "Potencia" << endl;
    pot = pow(a, 2);
    cout << pot << endl;

    cout << "Raiz" << endl;
    raiz = sqrt(a);
    cout << raiz << endl;
    /*
        los operadores aritmeticos en c++
        son:
        suma ---- representacion en c++ ---- > +
        resta ---- representacion en c++ ---- > -
        multiplicacion ---- representacion en c++ ---- > *
        division ---- representacion en c++ ---- > /

        Operadores de comparacion
        > mayor que
        < menor que
        = igual
        >= mayor igual
        <= menor igual

        Operadores de logicos
        || --- > devolvera falso si las condiciones son falsos de lo contrario sera verdadero
        && ---- > es verdaero simpre y cuando las dos condiciones son verdaderas de lo contrario sera falso
        ! --- > negacion si una condicion es verdadera sera falsa y viceversa

    */

    int anio;
    cout << "Ingese su edad" << endl;
    cin >> anio;

    if ((!anio >= 18))
    {
        cout << "Mayor de edad" << endl;
    } else
    {
        cout << "Menor de edad" << endl;
    }
        /*
            como esta con negacion, si se ingresa un numero mayor a 18 
            el mensaje a imprimirse sera que es menor de edad
        */

    return 0;
}