/*
Figurinhas da Copa
https://old.neps.academy/problem/168
OBI 2018 - Primeira Fase - Nível Sênior
*/
#include <bits/stdc++.h>
using namespace std;

int n, c, m, x, y;
int carimbadas[105], album[105];

int main() {
  cin >> n >> c >> m;

  for (int i = 0; i < c; i++) {
    cin >> x;
    carimbadas[x] = 1;
  }

  for (int i = 0; i < m; i++) {
    cin >> y;
    album[y] = 1;
  }

  int resposta = 0;

  for (int i = 1; i <= n; i++) {
    if (!album[i] && carimbadas[i]) {
      resposta++;
    }
  }
  cout << resposta << endl;
}
