#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, cont = 0;

	cin >> n;
	vector<int>v(n);

	for (int i = 0;i < n; i++) {
		cin >> v[i];
	}

	for (int i = 0;i < n - 2; i++) {
		if (v[i] == 1) {
			if (v[i + 1] == 0 && v[i + 2] == 0) {
				cont++;
			}
		}
	}
	
	cout << cont;

	return 0;
}
