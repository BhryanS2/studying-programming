/*
Caverna de Ordinskaya
https://neps.academy/br/exercise/4
Fonte: OBI 2016 - Segunda Fase
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int li;

int n, m, v[10006];

int main() {
  //Entrada de dados
  cin >> n >> m;

  for (int i = 1;i <= n;i++) {
    cin >> v[i];
  }

  //Processamento
  for (int i = 1;i <= n;i++) {
    if (min(v[i], m - v[i]) >= v[i - 1])
      v[i] = min(v[i], m - v[i]);

    else if (max(v[i], m - v[i]) >= v[i - 1])
      v[i] = max(v[i], m - v[i]);
    else {
      cout << "-1";
      return 0;
    }
  }

  //Saída de dados
  li soma = 0;
  for (int i = 1;i <= n;i++) {
    soma += v[i];
  }
  cout << soma << endl;

  return 0;
}
