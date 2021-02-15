#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    remove("ex5out_nou.txt");
    rename("ex5backup.txt", "ex5in.txt");
    ifstream fintrare;
    ofstream fiesire, fiesirebackup;
    fintrare.open("ex5in.txt");
    fiesire.open("ex5out.txt");
    fiesirebackup.open("ex5backup.txt");
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
        fiesirebackup << linie[i] << "\n";
    }
    for (int i = 0; i < count; i++)
    {
        fiesire << i+1 << ") " << linie[i] << "\n";
    }
    fiesire.close();
    fiesirebackup.close();
    fintrare.close();
    remove("ex5in.txt");
    rename("ex5out.txt", "ex5out_nou.txt");
    system("pause");
    return 0;
}