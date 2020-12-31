#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main() {
	int m[4][4], soma;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> m[i][j];
		}
	}
	/*
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << m[i][j]<< " ";
		}
		cout << endl;
	}
	*/
	for (int j = 0; j < 3; j++) {
		soma = 0;
		for (int i = 0; i < 3; i++) {
			soma += m[i][j];
		}
		cout << "Coluna " << j << ": " << soma << endl;
	}

	return 0;
}

