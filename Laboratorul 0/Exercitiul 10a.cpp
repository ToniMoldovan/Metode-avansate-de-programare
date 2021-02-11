#include <iostream>
#include <time.h>

using namespace std;

int citireMatrice(int matrice[][100], int m, int n);
void afisareMatrice(int matrice[][100], int m, int n);
void matriceSuma(int matrice1[][100], int matrice2[][100], int l1, int c1);
void matriceDiferenta(int matrice1[][100], int matrice2[][100], int l1, int c1);
void matriceProdus(int matrice1[][100], int matrice2[][100], int l1, int l2);

int main()
{
    srand(time(NULL));

    int matrice1[100][100], matrice2[100][100];
    int linie1, linie2, col1, col2;

    cout << "Introduceti numarul de linii pentru prima matrice:";
    cin >> linie1;
    cout << "Introduceti numarul de coloane pentru prima matrice:";
    cin >> col1;
    cout << "Introduceti numarul de linii pentru a doua matrice:";
    cin >> linie2;
    cout << "Introduceti numarul de coloane pentru a doua matrice:";
    cin >> col2;

    matrice1[100][100] = citireMatrice(matrice1, linie1, col1);
    matrice2[100][100] = citireMatrice(matrice2, linie2, col2);
    cout << "Matrice 1:\n";
    afisareMatrice(matrice1, linie1, col1);
    cout << "Matrice 2:\n";
    afisareMatrice(matrice2, linie2, col2);
    if (linie1 == linie2 && col1 == col2)
    {
        cout << "Suma matricelor:\n";
        matriceSuma(matrice1, matrice2, linie1, col1);
    }
    else
    {
        cout << "\nMatricele nu au dimensiuni egale, nu se poate calcula suma lor.\n";
    }
    if (linie1 == linie2 && col1 == col2)
    {
        cout << "Diferenta matricelor:\n";
        matriceDiferenta(matrice1, matrice2, linie1, col1);
    }
    else
    {
        cout << "\nMatricele nu au dimensiuni egale, nu se poate calcula diferenta lor.\n";
    }

    if (linie1 == col2 && linie2 == col1)
    {
        cout << "\nProdusul matricelor:\n";
        matriceProdus(matrice1, matrice2, linie1, col1);
    }
    else
    {
        cout << "Produsul matricelor nu este posibil.";
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

void matriceSuma(int matrice1[][100], int matrice2[][100], int l1, int c1)
{
    int suma[100][100];
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            suma[i][j] = matrice1[i][j] + matrice2[i][j];
        }
    }
    afisareMatrice(suma, l1, c1);
}

void matriceDiferenta(int matrice1[][100], int matrice2[][100], int l1, int c1)
{
    int diferenta[100][100];
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            diferenta[i][j] = matrice1[i][j] - matrice2[i][j];
        }
    }
    afisareMatrice(diferenta, l1, c1);
}

void matriceProdus(int matrice1[][100], int matrice2[][100], int l1, int c1)
{
    int produs[100][100] = {0};
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < l1; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                produs[i][j] += matrice1[i][k] + matrice2[k][j];
            }
        }
    }
    afisareMatrice(produs, l1, l1);
}