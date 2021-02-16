#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <algorithm>

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
    sort(linie, linie + count);
    for (int i = 0; i < count; i++)
    {
        fiesire  << linie[i] << "\n";
    }
    fiesire.close();
    fintrare.close();
    system("pause");
    return 0;
}