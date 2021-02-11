#include <iostream>
#include <time.h>

using namespace std;

int citireMatrice(int matrice[][100], int m, int n);
void afisareMatrice(int matrice[][100], int m, int n);
int diagonalaPrincipala(int matrice[][100], int diagPr[100], int nr);
int diagonalaSecundara(int matrice[][100], int diagSec[100], int nr);

int main()
{
    srand(time(NULL));

    int matrice[100][100], diagPr[100], diagSec[100];
    int lc;

    cout << "Introduceti numarul de linii si coloane pentru prima matrice:";
    cin >> lc;

    matrice[100][100] = citireMatrice(matrice, lc, lc);
    cout << "Matricea :\n";
    afisareMatrice(matrice, lc, lc);
    diagonalaPrincipala(matrice, diagPr, lc);
    diagonalaSecundara(matrice, diagSec, lc);
    cout << "\n\nDiagonala principala: ";
    for (int i = 0; i < lc; i++)
    {
        cout << diagPr[i] << " ";
    }
    cout << "\n\nDiagonala secundara: ";
    for (int i = 0; i < lc; i++)
    {
        cout << diagSec[i] << " ";
    }
    system("pause");
}

int citireMatrice(int matrice[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrice[i][j] = rand() % 89 + 10;
        }
    }
    return matrice[100][100];
}

void afisareMatrice(int matrice[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << "\n";
    }
}

int diagonalaPrincipala(int matrice[][100], int diagPr[100], int nr)
{
    int contor = 0;
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nr; j++)
            if (i == j)
            {
                diagPr[contor] = matrice[i][j];
                contor++;
            }
    }
    return diagPr[contor];
}

int diagonalaSecundara(int matrice[][100], int diagSec[100], int nr)
{
    int contor = 0;
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nr; j++)
            if ((i + j) == (nr - 1))
            {
                diagSec[contor] = matrice[i][j];
                contor++;
            }
    }
    return diagSec[contor];
}
