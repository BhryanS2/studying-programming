/*
https://neps.academy/br/exercise/271
Expressões
Fonte: OBI 2011 - Segunda Fase
*/
#include <bits/stdc++.h>
using namespace std;

int n;
vector <char> parenteses, chaves, colchetes;
string expressao;

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    bool ok = true;
    cin >> expressao;

    for (int j = 0; j < expressao.size(); j++) {
      if (expressao[j] == '(') parenteses.push_back('(');
      else if (expressao[j] == ')') {
        if (parenteses.empty()) {
          ok = false;
          break;
        }
        else parenteses.pop_back();
      }

      if (expressao[j] == '[') colchetes.push_back('[');
      else if (expressao[j] == ']') {
        if (colchetes.empty()) {
          ok = false;
          break;
        }
        else colchetes.pop_back();
      }

      if (expressao[j] == '{') chaves.push_back('{');
      else if (expressao[j] == '}') {
        if (chaves.empty()) {
          ok = false;
          break;
        }
        else chaves.pop_back();
      }
    }

    if (!parenteses.empty() || !colchetes.empty() || !chaves.empty()) {
      ok = false;
      parenteses.clear();
      colchetes.clear();
      chaves.clear();
    }

    cout << (ok ? "S" : "N") << endl;
  }
}
