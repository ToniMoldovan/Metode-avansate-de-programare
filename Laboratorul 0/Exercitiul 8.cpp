#include <iostream>
#include <string>

using namespace std;

void myfunction(string prop);

int main()
{
    string prop;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Introduceti o propozitie: ";
        getline(cin, prop);
        myfunction(prop);
    }
    system("pause");
}

void myfunction(string prop)
{
    int vocale = 0;
    int x = prop.length();
    for (int i = 0; i <= x; i++)
    {
        if(prop[i] == 'a' || prop[i] == 'e' || prop[i] == 'i' || prop[i] == 'o' || prop[i] == 'u'){
            vocale++;
        }
    }
    cout << "Au fost gasite " << vocale << " vocale." << endl;
}