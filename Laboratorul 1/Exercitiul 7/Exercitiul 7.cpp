#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ifstream fintrare;
    fstream finout;
    fintrare.open("ex7in.txt");
    string linie[512];
    int count = 0;
    if (fintrare.is_open())
    {
        while (!fintrare.eof())
        {
            getline(fintrare, linie[count]);
            count++;
        }
    }
    finout << "\n";
    int numere[100];
    int nrcount = 0;
    for (int j = 0; j < count; j++)
    {
        string prop = linie[j];
        int lungime = prop.length();
        for (int j = 0; j < lungime; j++)
        {
            if (prop[j] >= '0' && prop[j] <= '9')
            {
                int nr = 0;
                while (prop[j] >= '0' && prop[j] <= '9')
                {
                    nr = nr * 10 + (prop[j] - 48);
                    j++;
                }
                numere[nrcount] = nr;
                nrcount++;
            }
        }
    }
    long long int suma = 0, produs = 1;
    for (int i = 0; i < nrcount; i++)
    {
        suma = suma + numere[i];
        produs = produs * numere[i];
    }
    sort(numere, numere + nrcount);
    cout << "Numerele gasite in ordine crescatoare sunt: ";
    for (int i = 0; i < nrcount; i++)
    {
        cout << numere[i] << " ";
    }
    cout << "\n Suma numerelor gasite este: " << suma << "\n";
    cout << "Produsul numerelor gasite este: " << produs << "\n";
    finout.close();
    system("pause");
    return 0;
}