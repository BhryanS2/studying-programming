#include <bits/stdc++.h>
using namespace std;
int main() {
	int m[5][5], soma1 = 0, soma2 = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> m[i][j];
		}
	}
	//soma das coluna principal
	for (int i = 0; i < 3; i++) {
		soma1 += m[i][i];
	}

	//soma da coluna secundaria
	for (int i = 0;i < 3; i++) {
		for (int j = 0;j < 3; j++) {
			if ((i + j) == (3 - 1)) {
				soma2 += m[i][j];
			}
		}
	}

	//mostrando matriz
	/*for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << m[i][j] <<" ";
		}
		cout << endl;
	}*/
	cout << "Diagonal principal: " << soma1 << endl << "Diagonal secundaria: " << soma2 << endl;
	return 0;
}
/*
2 7 6
9 5 1
4 3 8

1 2 4
5 4 6
45 3 5
*/
