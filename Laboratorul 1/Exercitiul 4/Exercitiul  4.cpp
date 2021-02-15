#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fiesire;
    char ch;
    fiesire.open("ex4out.txt");
    while (cin >> ch)
    {
        fiesire << ch;
    }
    fiesire.close();
    return 0;
}