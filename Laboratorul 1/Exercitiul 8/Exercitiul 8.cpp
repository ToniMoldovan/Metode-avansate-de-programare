#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ifstream fintrare;
    fintrare.open("ex8in.txt");
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
    char cuvinte[512][256];
    int nrcuvinte = 0;
    for (int j = 0; j < count; j++)
    {
        string prop = linie[j];
        const char* c_prop = prop.c_str();
        char* pointertech;
        pointertech = strtok((char*)c_prop, " .,:;!?");
        while(pointertech != NULL){
            strcpy(cuvinte[nrcuvinte], pointertech);
            pointertech = strtok(NULL, " ,.:;!?");
            nrcuvinte++;
        }
    }
    int cuvantScurt = 999, pozCuvantScurt = 0;
    int cuvantLung = 0, pozCuvantLung = 0;
    for(int i = 0; i<nrcuvinte;i++){
        int temp = strlen(cuvinte[i]);
        if(temp >= cuvantLung){
            pozCuvantLung = i;
            cuvantLung = temp;
        }
        if(temp <= cuvantScurt){
            pozCuvantScurt = i;
            cuvantScurt = temp;
        }
    }
    cout << "Cel mai scurt cuvant gasit este: " << cuvinte[pozCuvantScurt]<<"\n";
    cout << "Cel mai lung cuvant gasit este: " << cuvinte[pozCuvantLung]<<"\n";
    fintrare.close();
    system("pause");
    return 0;
}