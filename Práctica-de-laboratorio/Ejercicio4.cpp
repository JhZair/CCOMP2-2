#include <iostream>
using namespace std;

int opuesto(int n) {
	int m = 0;

	while (n > 0) {
		m = m * 10 + n % 10;
		n = n / 10;
	}
	return m;
}
int main() {
  int mayor = 0;
	for (int i = 100; i <= 999; i++) {
		for (int e = 100; e <= 999; e++) {
			if (i*e == opuesto(i*e) && i*e > mayor)
				mayor = i*e;
		}
	}
	cout << mayor << endl;
	return 0;
}