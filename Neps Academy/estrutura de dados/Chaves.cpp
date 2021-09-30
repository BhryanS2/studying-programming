/*
https://neps.academy/br/course/10/lesson/267
Chaves
Fonte: OBI 2016 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;

string expressao, S[10000];
stack<char> pilha;
bool ok = true;
int n;

int main() {
	cin >> n;

	for (int i = 0; i <= n;i++) {
		getline(cin, S[i]);
		expressao += S[i];
	}

	for (int i = 0;i < expressao.size();i++) {
		if (expressao[i] == '{') pilha.push('{');
		else if (expressao[i] == '}') {
			if (pilha.empty()) {
				ok = false;
				break;
			} else pilha.pop();
		}
	}

	if (!pilha.empty()) ok = false;
	cout << (ok ? "S" : "N") << endl;

	return 0;
}
