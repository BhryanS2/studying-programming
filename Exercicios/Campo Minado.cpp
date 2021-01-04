#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int c[n];

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
