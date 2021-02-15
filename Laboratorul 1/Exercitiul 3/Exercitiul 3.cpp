#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    ifstream fintrare;
    ofstream fiesire;
    fintrare.open("ex3in.txt");
    fiesire.open("ex3out.txt");
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
    for (int i = 0; i < count; i++)
    {
        for (int j = i; j < count - 1; j++)
        {
            string prop1 = linie[i], prop2 = linie[j];
            if (prop1[0] > prop2[0])
            {
                string temp = linie[i];
                linie[i] = linie[j];
                linie[j] = temp;
            }
        }
    }
    for (int i = 0; i < count; i++)
    {
        fiesire  << linie[i] << "\n";
    }
    fiesire.close();
    fintrare.close();
    system("pause");
    return 0;
}