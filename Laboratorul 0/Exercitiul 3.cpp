#include <iostream>

using namespace std;

void myfunction(int n);

int main()
{
    int n;
    for (int i = 1; i <= 3; i++) {
        cout << "n= ";
        cin >> n;
        myfunction(n);
        cout << endl;
    }
}

void myfunction(int n) {
    int nr = 0;
    for (int j = 1; j <= n; j++) {
        if (n % j == 0) {
            cout << j << " ";
            nr++;
        }
    }
    cout << endl << "nr = " << nr;
}