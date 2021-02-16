#include <iostream>
#include <math.h>

using namespace std;

typedef struct Punct3D
{
    int x, y, z;
} Punct3D;

Punct3D citirePunct()
{
    Punct3D X;
    cout << "Introduceti x: ";
    cin >> X.x;
    cout << "Introduceti y: ";
    cin >> X.y;
    cout << "Introduceti z: ";
    cin >> X.z;

    return X;
}

void distanta(struct Punct3D A, struct Punct3D B)
{
    double distanta;
    distanta = sqrt(pow(abs(B.x-A.x), 2) + pow(abs(B.y-A.y), 2) +pow(abs(B.z-A.z), 2));
    cout << distanta;
}

int main()
{
    Punct3D A, B;
    cout << "Punctul A\n";
    A = citirePunct();
    cout << "Punctul B\n";
    B = citirePunct();

    distanta(A, B);
    system("pause");
}