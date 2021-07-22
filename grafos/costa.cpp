/*
https://neps.academy/br/course/algoritmos-em-grafos-(codcad)/lesson/costa
Costa
Fonte: OBI 2012 - Segunda Fase
success
*/
#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for (int i = 0; i < n; i++)

const int MAXN = 10e3 + 10;
char ma[MAXN][MAXN];
int m, n, i, j, cont = 0;

void verifica(int x, int y) {
  if (x - 1 < 0 || y + 1 == m || x + 1 == n || y - 1 < 0) cont++;
  else if (ma[x + 1][y] == '.' || ma[x - 1][y] == '.' || ma[x][y + 1] == '.' || ma[x][y - 1] == '.') cont++;
}

int main() {
  scanf("%d%d", &n, &m);

  REP(i, n) REP(j, m) cin >> ma[i][j];

  REP(i, n) REP(j, m) if (ma[i][j] == '#') verifica(i, j);

  printf("%d\n", cont);
  return  0;
}

//g++ costa.cpp -o costa && costa < input.txt
