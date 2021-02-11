#include <iostream>

using namespace std;

void myfunction(int n) {
	int a = 0, b = 1, c;
	if (n == 1)
		cout << a;
	else if (n == 2) {
		cout << a << " " << b;
	}
	else {
		cout << a << " " << b << " ";
		for (int j = 3; j <= n; j++) {
			c = a + b;
			a = b;
			b = c;
			cout << c << " ";
		}
	}
}

int main() {
	int n;	
	for (int i = 1; i <= 3; i++) {
		cout << "n= ";
		cin >> n;
		myfunction(n);
		cout << endl;
	}
}