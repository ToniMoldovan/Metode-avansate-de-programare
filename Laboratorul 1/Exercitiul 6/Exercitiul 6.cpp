#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    ifstream fintrare;
    fstream finout;
    ofstream fiesirebackup;
    fintrare.open("ex6in1.txt");
    finout.open("ex6in2.txt",ios::app);
    string linie1[512];
    int count1 = 0, count2 = 0;
    if (fintrare.is_open())
    {
        while (!fintrare.eof())
        {
            getline(fintrare, linie1[count1]);
            count1++;
        }
    }
    finout << "\n";
    for (int j = 0; j < count1; j++)
    {
        finout << linie1[j] << "\n";
    }
    finout.close();
    fiesirebackup.close();
    fintrare.close();
    system("pause");
    return 0;
}