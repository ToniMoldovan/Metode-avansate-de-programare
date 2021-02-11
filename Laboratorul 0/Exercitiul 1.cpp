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
    for (int j = 1; j <= n; j++) {
        cout << j << " ";
    }
}