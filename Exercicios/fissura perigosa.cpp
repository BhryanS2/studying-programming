#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
	//m � a matriz, f � a for�a
	int m, f;
	cin >> m >> f;
	string str[m], res[m];

	int matriz[m][f];

	for (int i = 0; i < m; i++) {
		getline(cin, str[i]);
		//		for(int j = 0; j < m; j++) {
		//			res[i] += str[i][j];
		//		}
	}
	cout << endl;
	for (int i = 0; i < m; i++) {

		for (int j = 0; j < m; j++) {
			if (str[i][j] <= '6') {
				str[i][j] = '*';
			}
		}
	}

	for (int i = 0; i < m; i++) {

		for (int j = 0; j < m; j++) {
			cout << str[i][j] << " ";
		}
		cout << endl;

	}

	return 0;
}

/*
8 6
27755478
29985439
34899989
22115569
66736689
99886555
44433399
99986991
*/

