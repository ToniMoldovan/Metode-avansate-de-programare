#include <iostream>
#include <math.h>

using namespace std;

void myfunction(int a, int b, int c);

int main()
{
    int a, b, c;
    for (int i = 1; i <= 3; i++) {
        cout << "a= ";
        cin >> a;
        cout << "b= ";
        cin >> b;
        cout << "c= ";
        cin >> c;
        myfunction(a, b, c);
        cout << endl;
    }
    system("pause");
}

void myfunction(int a, int b, int c) {
    int x1, x2;
    int delta = pow(b, 2) - (4*a*c);
    cout << "delta = " << delta << endl;
    if (delta >= 0){
        x1 = (-b -sqrt(delta))/(2*a);
        x2 = (-b +sqrt(delta))/(2*a);

        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2;
    }else cout << "Ecuatia nu are solutie reala";
    
}