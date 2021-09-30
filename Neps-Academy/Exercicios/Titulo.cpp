/*
https://neps.academy/br/exercise/242
Titulo
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string title(string F) {
	F[0] = toupper(F[0]);
	for (int i = 1; i < F.size(); i++) {
		if (F[i - 1] == ' ') F[i] = toupper(F[i]);
		else F[i] = tolower(F[i]);
	}
	return F;
}

int main() {
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}

/*
65 ate 90 minusculas
97 ate 122 maiusculas
DalmAtas sao os melhores

*/
