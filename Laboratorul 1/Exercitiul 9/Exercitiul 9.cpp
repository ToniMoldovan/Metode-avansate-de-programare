#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

typedef struct angajat
{
    char nume[30];
    char prenume[30];
    unsigned salariu;
} angajat;

int main()
{
    ifstream fintrare;
    ofstream fiesire;
    fintrare.open("ex9in.txt");
    fiesire.open("ex9out.txt");
    if (fintrare.is_open())
    {
        int nr_angajati;
        angajat angajati[50];
        fintrare >> nr_angajati;
        for (int i = 0; i < nr_angajati; i++)
        {
            fintrare >> angajati[i].nume;
            fintrare >> angajati[i].prenume;
            fintrare >> angajati[i].salariu;
        }
        unsigned suma = 0;
        for (int i = 0; i < nr_angajati; i++)
        {
            suma = suma + angajati[i].salariu;
        }
        unsigned mediaInitiala = suma / nr_angajati;
        suma = 0;
        for (int i = 0; i < nr_angajati; i++)
        {
            angajati[i].salariu = (angajati[i].salariu * 3) / 4;
            suma = suma + angajati[i].salariu;
        }
        unsigned mediaFinala = suma / nr_angajati;
        for (int i = 0; i < nr_angajati; i++)
        {
            suma = suma + angajati[i].salariu;
        }
        cout << "Media salariilor initiale este: " << mediaInitiala << "\n";
        cout << "Media salariilor dupa diminuare  este: " << mediaFinala << "\n";
        cout << "Diferenta dintre medii este de :" << setprecision(2) <<(float)mediaFinala / mediaInitiala * 100<< "%";
        if (fiesire.is_open())
        {
            for (int i = 0; i < nr_angajati; i++)
            {
                fiesire << angajati[i].nume << " " << angajati[i].prenume << " " << angajati[i].salariu << "\n";
            }
        }
    }
    fiesire.close();
    fintrare.close();
    system("pause");
    return 0;
}