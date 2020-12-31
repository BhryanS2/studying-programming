#include <bits/stdc++.h>

using namespace std;

int main() {

	int numero;
	int contDiv = 0, soma = 0;

	cin >> numero;

	for (int i = 1; i <= numero; i++) {
		if (numero % i == 0) {
			contDiv++;
			soma += i;
		}
	}

	cout << contDiv << " divisor(es): ";

	for (int i = 1; i <= numero; i++) {
		if (numero % i == 0) {
			cout << i << " ";
		}
	}

	cout << endl;

	cout << "Soma de divisores = " << soma << endl;

	if (contDiv == 2) {

		cout << "Primo" << endl;

	}	
else {

		cout << "Nao primo" << endl;

	}
}
