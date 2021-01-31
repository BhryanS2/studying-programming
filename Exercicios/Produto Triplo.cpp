/*
Produto Triplo
https://neps.academy/br/exercise/676
Fonte: Liga de Programação 2020 - Etapa 1
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MAX = 2e5 + 10;
const ll inf = 1e18 + 10;

int v[MAX];

int main() {
  int n;
  cin >> n;

  int neg = 0, pos = 0;

  for (int i = 1; i <= n; i++) {
    cin >> v[i];
    v[i] < 0 ? neg++ : pos++;
  }

  if (n == 3 || pos == 0) {
    cout << (1ll * v[n] * v[n - 1] * v[n - 2]);
    return 0;
  }

  ll caso1 = -inf, caso2 = -inf;

  if (pos >= 3) caso1 = 1ll * v[n] * v[n - 1] * v[n - 2];
  if (neg >= 2) caso2 = 1ll * v[1] * v[2] * v[n];

  cout << (max(caso1, caso2));
}

