/*
Campo Minado
https://neps.academy/br/exercise/241
Fonte: OBI 2011 - Primeira Fase
*/
#include<bits/stdc++.h>
using namespace std;

int n;
int c[55];

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}

	for (int i = 0; i < n; i++) {
		int q = 0;
		q = q + c[i];

		if (i < n - 1) q = q + c[i + 1];
		if (i > 0) q = q + c[i - 1];

		cout << q << endl;
	}
}
