/*
https://neps.academy/br/exercise/271
Expressões
Fonte: OBI 2011 - Segunda Fase
*/
#include <bits/stdc++.h>
using namespace std;

int n;
string expressao;
vector <char> pilha;

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    bool ok = true;
    cin >> expressao;

    for (int j = 0; j < expressao.size(); j++) {
      if (expressao[j] == '(' || expressao[j] == '[' || expressao[j] == '{') pilha.push_back(expressao[j]);
      else if (expressao[j] == ')' || expressao[j] == ']' || expressao[j] == '}') {
        if (pilha.empty()) {
          ok = false;
          break;
        } else {

          char temp;
          if (expressao[j] == ')') temp = '(';
          else if (expressao[j] == ']') temp = '[';
          else temp = '{';

          if (expressao[j - 1] != temp && expressao[j - 1] != '0') {
            ok = false;
            break;
          } else {
            for (int pos = j; pos >= 0; pos--) {
              if (expressao[pos] == temp && expressao[pos] != '0') {
                expressao[j] = '0';
                expressao[pos] = '0';
                pilha.pop_back();
                break;
              }
            }
          }
        }
      }
    }

    if (!pilha.empty()) {
      ok = false;
      pilha.clear();
    }

    cout << (ok ? "S" : "N") << endl;
  }
}
