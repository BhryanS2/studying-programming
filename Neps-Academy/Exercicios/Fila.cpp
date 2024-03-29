/*
Fila (OBI2014)
https://neps.academy/br/exercise/384
Fonte: OBI 2014 - Primeira Fase
*/
#include <bits/stdc++.h>

using namespace std;

vector<int> fila;

int main() {

  int n, m;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;

    fila.push_back(tmp);
  }

  cin >> m;

  set<int> sai;

  for (int i = 0; i < m; i++) {
    int tmp;
    cin >> tmp;

    sai.insert(tmp);
  }
  bool espaco = true;
  for (int i = 0; i < n; i++) {
    if (sai.find(fila[i]) == sai.end()) {
      if (espaco) {
        cout << fila[i];
        espaco = false;
      } else {
        cout << " " << fila[i];
      }
    }
  }
  cout << endl;
  
  return 0;
}
