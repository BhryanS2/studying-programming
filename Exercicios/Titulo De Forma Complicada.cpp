/*
https://neps.academy/br/exercise/242
Titulo
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string FirstCasePhrase(string S) {
	string joinAllText;

	joinAllText += S[0] - 32;

	for (int i = 1; i < S.size(); i++) joinAllText += S[i];

	return joinAllText;
}


string FirstCaseUpper(string S) {
	string text, joinPartText, DirtyText;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] == ' ') {
			text += ' ';
			text += (S[i + 1] - 32);
		} else text += S[i];
	}

	for (int i = 0; i < text.size(); i++) {
		if (text[i] + 32 == text[i + 1]) DirtyText += text[i];
		else DirtyText += text[i];

	}

	for (int i = 0; i < DirtyText.size(); i++) {
		if (DirtyText[i] + 32 == DirtyText[i + 1]) joinPartText += DirtyText[i];
		else if (DirtyText[i] - 32 != DirtyText[i - 1]) joinPartText += DirtyText[i];

	}

	return FirstCasePhrase(joinPartText);
}

string title(string F) {
	string Tolowercase;
	for (int i = 0; i < F.size(); i++) {

		if (F[i] >= 'A' && F[i] <= 'Z') Tolowercase += F[i] + 32;
		else Tolowercase += F[i];

	}

	return FirstCaseUpper(Tolowercase);;
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
