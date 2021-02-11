#include <iostream>
#include <time.h>

using namespace std;

double ** alocare_matrice(int m, int n);
void dealocare_matrice(double **matrice, int m, int n);
void citire_matrice(double **matrice, int m, int n);
void afisare_matrice(double **matrice, int m, int n);

int main()
{
    srand(time(NULL));

    int linie1, linie2, col1, col2;

    cout << "Introduceti numarul de linii pentru prima matrice:";
    cin >> linie1;
    cout << "Introduceti numarul de coloane pentru prima matrice:";
    cin >> col1;
    cout << "Introduceti numarul de linii pentru a doua matrice:";
    cin >> linie2;
    cout << "Introduceti numarul de coloane pentru a doua matrice:";
    cin >> col2;

    double **matrice1 = alocare_matrice(linie1, col1);
    double **matrice2 = alocare_matrice(linie2, col2);
    citire_matrice(matrice1, linie1, col1);
    citire_matrice(matrice2, linie2, col2);
    cout << "Matrice 1:\n";
    afisare_matrice(matrice1, linie1, col1);
    cout << "Matrice 2:\n";
    afisare_matrice(matrice2, linie2, col2);
    dealocare_matrice(matrice1, linie1, col1);
    dealocare_matrice(matrice2, linie2, col2);
    system("pause");
}

double ** alocare_matrice(int m, int n)
{
    double **matrice;
    matrice = new double*[m];
    for (int i = 0; i < n; i++)
    {
        matrice[i] = new double[n];
    }

    return matrice;
}

void citire_matrice(double **matrice, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrice[i][j] = rand() % 89 + 10;
        }
    }
}

void afisare_matrice(double **matrice, int m, int n)
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

void dealocare_matrice(double **matrice, int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        delete[] matrice[i];
    }
    delete[] matrice;
}