#include <iostream>
using namespace std;

int main()
{
    int matriz[2][2] = {{9, 8}, {7, 6}};
    int matiz2[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matiz2[i][j] = matriz[i][j];
            cout << "[" << matiz2[i][j] << "]"
                 << "\t";
        }
        cout << endl;
    }
    return 0;
}