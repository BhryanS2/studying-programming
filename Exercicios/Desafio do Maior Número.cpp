/*
https://neps.academy/br/exercise/323
Desafio do Maior Número
Fonte: OBI 2012 - Primeira Fase
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
	int v[110], i = 0, maior = 0;

	while (1) {
		i = i + 1;
		cin >> v[i];
		if (v[i] > maior) {
			maior = v[i];
		}
		if (v[i] == 0)break;
	}

	cout << maior;

	return 0;
}

