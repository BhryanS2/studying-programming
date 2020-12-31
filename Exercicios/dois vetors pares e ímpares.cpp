#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main() {
	int v[11], par[10], impar[10];
	for (int i = 0; i < 10; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < 10; i++) {
		par[i] = 1;
		impar[i] = 0;
	}

	for (int i = 0; i < 10; i++) {
		if (v[i] % 2 == 0) {
			par[i] = v[i];
		}		
else {
			impar[i] = v[i];
		}
	}

	for (int i = 0; i < 10; i++) {
		if (par[i] % 2 == 0)
			cout << par[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		if (impar[i] % 2 != 0)
			cout << impar[i] << " ";
	}

	return 0;
}

