#include <iostream>
#include <time.h>

using namespace std;

void afisareMax(int matrice[][3]);
void citireMatrice(int matrice[][3]);
void afisareMatrice(int matrice[][3]);

int main()
{
    srand(time(NULL));

    int matrice[3][3];

    citireMatrice(matrice);
    afisareMatrice(matrice);
    afisareMax(matrice);
    system("pause");
}

void citireMatrice(int matrice[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrice[i][j] = rand() % 100;
        }
    }
}

void afisareMatrice(int matrice[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << "\n";
    }
}

void afisareMax(int matrice[][3])
{
    int max = 0;
    int pozi = 0, pozj = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrice[i][j] >= max)
            {
                max = matrice[i][j];
                pozi = i;
                pozj = j;
            }
        }
    }
    cout << "Maximul este: " << max << "[" << pozi << "][" << pozj << "]";
}