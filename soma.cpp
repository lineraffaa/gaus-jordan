#include <iostream> 
#define L 2
#define C 2

using namespace std;

int main()
{
    int matriz[L][C] = {0}, matriz2[L][C] = {0}, soma[L][C] = {0};

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> matriz[i][j];
        }
    }
    cout << "Segunda Matriz" << endl;

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {

            matriz[i][j] = matriz[i][j] + matriz2[i][j];
        }
    }

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << matriz[i][j];
        }
        cout << endl;
    }
}