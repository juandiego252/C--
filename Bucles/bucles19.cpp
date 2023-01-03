#include <iostream>
using namespace std;

int main()
{
    int resultado = 0;
    for (int i = 1; i <= 10; i++)
    {
        resultado = i * 2;
        cout << i << "x"
             << "2"
             << "=" << resultado << endl;
    }

    return 0;
}