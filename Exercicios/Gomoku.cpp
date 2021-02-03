/*
Gomoku
https://neps.academy/br/exercise/37

Fonte: OBI 2017 - Terceira Fase
*/

#include <bits/stdc++.h>
using namespace std;

int m[16][16];

bool celula(int i, int j, int x, int y) {
  int cor = m[i][j];

  for (int k = 1; k < 5; k++)if (cor != m[i + (k * x)][j + (k * y)]) return false;

  cout << cor << endl;
  return true;
}

int main(void) {
  for (int i = 0; i < 15; i++)
    for (int j = 0; j < 15; j++) cin >> m[i][j];

  for (int i = 0; i < 15; i++)
    for (int j = 0; j < 15; j++) if (m[i][j] != 0) {
      if (i <= 10) if (celula(i, j, 1, 0)) return 0;
      if (j <= 10) if (celula(i, j, 0, 1)) return 0;
      if (i <= 10 and j <= 10) if (celula(i, j, 1, 1)) return 0;
      if (i >= 4 and j <= 10) if (celula(i, j, -1, 1)) return 0;
    }

  cout << 0 << endl;

  return 0;
}
