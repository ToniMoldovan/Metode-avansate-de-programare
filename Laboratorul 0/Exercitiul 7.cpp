#include <iostream>

using namespace std;

void myfunction(int n);

int main()
{
    int n;
    for (int i = 1; i <= 3; i++)
    {
        cout << "n= ";
        cin >> n;
        myfunction(n);
        cout << endl;
    }
    system("pause");
}

void myfunction(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}