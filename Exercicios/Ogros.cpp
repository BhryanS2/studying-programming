/*
https://neps.academy/br/exercise/261
Ogros
Fonte: OBI 2008 - Primeira Fase
*/
#include <bits/stdc++.h>
#define MAX 100002

using namespace std;

int n, m, a[MAX], b[MAX], p[MAX];

int pontuacao(int forca) {
  int ini = 0, fim = n;

  while (fim - ini > 1) {
    int med = (fim + ini) / 2;
    if (a[med] <= forca) ini = med;
    else fim = med;
  }

  return p[fim - 1];
}


int main() {

  cin >> n >> m;
  a[0] = 0;
  for (int i = 0; i < n - 1; i++) cin >> a[i + 1];
  for (int i = 0; i < n; i++) cin >> p[i];
  for (int i = 0; i < m; i++) cin >> b[i];

  bool first = true;

  for (int i = 0; i < m; i++) {
    if (first) first = false;
    else cout << " ";
    cout << pontuacao(b[i]);
  }
  cout << endl;
};
