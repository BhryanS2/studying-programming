#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main() {
	int v[110], n, cont = 0;
	for (int i = 0; i < 10;i++) {
		cin >> v[i];
	}
	cin >> n;
	for (int i = 0; i < 10; i++) {
		if (v[i] == n) {
			cont++;
		}
	}
	if (cont > 0) cout << "SIM" << endl;
	else cout << "NAO" << endl;
	return 0;
}