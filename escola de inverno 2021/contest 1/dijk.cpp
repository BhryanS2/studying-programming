#include <bits/stdc++.h>
using namespace std;

#define nl endl
#define mp(x, y) make_pair(x, y)
#define Repeat(i,n) for (int i=0; i<(n); ++i)
#define PushFila(x, y, z)  fila.push(mp(x, mp(y, z)));
#define F first
#define S second
#define MAXN 105

typedef priority_queue < pair<int, pair<int, int> > > FilaDePrioridade;
typedef long long int ll;

const int inf = 5e8;
int t, n, m;

char matriz_caracter[MAXN][MAXN];
int distancia[MAXN][MAXN];

int direcaoX[4] = { 0,0,1,-1 };
int direcaoY[4] = { 1,-1,0,0 };

bool verifica(int x, int y) {
  return x >= 0 && x < n&& y >= 0 && y < m;
}

void bfs(int x, int y) {
  FilaDePrioridade fila;
  PushFila(-1, x, y);

  while (!fila.empty()) {
    x = fila.top().S.F;
    y = fila.top().S.S;
    int w = -fila.top().F;

    fila.pop();

    if (distancia[x][y] != w) continue;
    int k;

    Repeat(k, 4) {
      int xi = x + direcaoX[k];
      int xj = y + direcaoY[k];
      int* distanciaXIXJ = &distancia[xi][xj];
      int* distanciaXY = &distancia[x][y];
      char* caracter = &matriz_caracter[xi][xj];

      if (verifica(xi, xj)) {
        if (*caracter == '.') {
          if (*distanciaXIXJ > *distanciaXY + 1) {
            *distanciaXIXJ = *distanciaXY + 1;
            PushFila(-*distanciaXIXJ, xi, xj);
          }
        } else if (*caracter >= '0' && *caracter <= '9') {
          if (*distanciaXIXJ > *distanciaXY + *caracter - '0') {
            *distanciaXIXJ = *distanciaXY + *caracter - '0';
            PushFila(-*distanciaXIXJ, xi, xj);
          }
        }
      }
    }
  }
}

int main() {
  scanf("%d", &t);
  int k, i, j;

  Repeat(k, t) {
    scanf("%d%d", &n, &m);
    Repeat(i, n) {
      Repeat(j, m) {
        scanf(" %c", &matriz_caracter[i][j]);
        distancia[i][j] = inf;
      }
    }

    distancia[0][0] = 1;
    bfs(0, 0);
    int distanciaFinal = distancia[n - 1][m - 1];
    printf("%d\n", distanciaFinal == inf ? -1 : distanciaFinal);
  }

  return 0;
}

//g++ dijk.cpp -o dijk & dijk < input.txt
