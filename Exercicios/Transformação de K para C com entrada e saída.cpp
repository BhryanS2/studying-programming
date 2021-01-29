/*
Transformação de K para C com entrada e saída
https://neps.academy/br/exercise/787
*/
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main() {
	int c, k;
	char letra;
	cin >> k >> letra;
	c = k - 273;
	cout << "Temperatura em Kelvin: " << k << " " << letra << endl;
	cout << "Temperatura em Celsius: " << c << " o" << endl;

	return 0;
}

