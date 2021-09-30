/*
Álbum da Copa
https://neps.academy/br/exercise/163
Fonte: OBI 2018 - Primeira Fase
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m, x, v[105], c = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		v[i] = 0;
	}

	for (int i = 0; i < m; i++) {
		cin >> x;
		v[x] = 1;
	}

	for (int i = 1; i <= n; i++) {
		if (v[i] == 0) {
			c++;
		}
	}
	cout << c << " ";

	return 0;
}

