/*
https://neps.academy/br/exercise/221
OBI
Fonte: OBI 2008 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m, x, y, cont = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		if (x + y >= m) cont++;
	}

	cout << cont;
	return 0;
}

