/*
Soma (OBI 2019)
https://neps.academy/br/exercise/468
Fonte: OBI 2019 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;

const int mxN = 5e5 + 10;
int n, k, x;
int pos[mxN], v[mxN];
long long resp;

int buscab(int u) {
  int ini = u, fim = n, meio, resp = -1;
  while (ini <= fim) {
    meio = (ini + fim) / 2;
    if (pos[meio] - pos[u - 1] == k) {
      resp = meio;
      ini = meio + 1;
    }
    else if (pos[meio] - pos[u - 1] > k)fim = meio - 1;
    else ini = meio + 1;
  }
  return resp;
}

int main() {
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> x;
    pos[i + 1] = pos[i] + x;

    if (pos[i + 1] == pos[i]) v[i + 1] = v[i];
    else v[i + 1] = i + 1;

  }

  for (int i = 1; i <= n; i++) {
    int temp = buscab(i);
    if (temp != -1) {
      resp += (long long)(temp - max(i, v[temp]) + 1);
    }
  }
  cout << resp << endl;
}
