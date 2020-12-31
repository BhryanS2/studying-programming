#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main() {
	int m[5][5], total, somalinhas[5];
	//leio os valores
	for (int i = 0;i < 3;i++) {
		for (int j = 0; j < 3; j++) {
			cin >> m[i][j];
		}
	}
	//soma das linhas
	for (int i = 0;i < 3;i++) {
		total = 0;
		for (int j = 0; j < 3; j++) {
			total += m[i][j];
		}
		cout << "Linha " << i << ": " << total << endl;
	}

	return 0;
}


