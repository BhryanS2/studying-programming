#include <iostream>
#include <stack>

using namespace std;

int main() {

	string expressao, S[10000];
	stack<char> pilha;
	bool ok;
	int n = 0;
	cin >> n;

	for (int i = 0; i <= n;i++) {
		getline(cin, S[i]);
		expressao += S[i];
	}

	ok = true; //Usamos a ideia de que a expressão é válida, até que se prove o contrário
	for (int i = 0;i < expressao.size();i++) { //Passamos por cada caractere da expressão
		if (expressao[i] == '{') { //Se achamos um parêntese abrindo, adicionamos ele na pilha
			pilha.push('{');
		}		
		else if (expressao[i] == '}') { //Se achamos um parêntese fechando, verificamos se o topo dapilha tem um parêntese abrindo
			if (pilha.empty()) { //Se a pilha é vazia, a expressão é inválida
				ok = false;
				break;
			} else {
				pilha.pop(); //Caso exista um parêntese abrindo no topo da pilha, removemos ele.
			}
		}
	}

	if (!pilha.empty()) { //Se após processar toda a expressão ainda restar algum parêntese abrindo, a expressão também é inválida
		ok = false;
	}

	if (ok) {
		cout << "S\n";
	} else {
		cout << "N\n";
	}

	return 0;
}
