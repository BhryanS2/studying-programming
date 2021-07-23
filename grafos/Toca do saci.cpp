/*
https://neps.academy/br/course/algoritmos-em-grafos-(codcad)/lesson/toca-do-saci
Toca do saci
Fonte: OBI 2016 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second
const int MAXN = 10e3;

int lin, col, mapa[MAXN][MAXN], dist[MAXN][MAXN];

// char mapaCopy[1010][1010];

int mlin[4] = { 1, -1, 0, 0 };
int mcol[4] = { 0, 0, 1, -1 };

bool valido(int x, int y) {
  if (x < 0 or x > lin or y < 0 or y > col) return false;
  if (mapa[x][y] == 0) return false;
  return true;
}
/*
void imprimeMapa() {
  REP(i, lin) {
    REP(j, col) printf("%c ", mapaCopy[i][j]);
    printf("\n");
  }
  printf("\n");
}
*/

void bfs(int vx, int vy) {
  memset(dist, -1, sizeof(dist));
  queue<PII> fila;

  fila.push(MP(vx, vy));
  dist[vx][vy] = 0;

  int cx, cy;
  while (!fila.empty()) {
    //tie(cx, cy) = fila.front()
    cx = fila.front().F;
    cy = fila.front().S;
    fila.pop();

    for (int k = 0; k < 4; k++) {
      int x = cx + mlin[k];
      int y = cy + mcol[k];

      // printf("mapa(%d, %d) = %d\n", x, y, mapa[x][y]);
      if (valido(x, y) and dist[x][y] == -1) {
        dist[x][y] = dist[cx][cy] + 1;
        fila.push(MP(x, y));
        // mapaCopy[x][y] = '*';
        if (mapa[x][y] == 3) return;
      }

      // if (x > 0 && x < lin && y > 0 && y < col) imprimeMapa();
    }
  }
}

int main() {
  int i, j;
  scanf("%d%d", &lin, &col);

  REP(i, lin) REP(j, col) scanf("%d", &mapa[i][j]);
  /*REP(i, lin) REP(j, col) {
    if (mapa[i][j] == 0) mapaCopy[i][j] = '.';
    else if (mapa[i][j] == 1) mapaCopy[i][j] = '+';
    else if (mapa[i][j] == 2) mapaCopy[i][j] = 'E';
    else mapaCopy[i][j] = 'S';
  }*/
  REP(i, lin) REP(j, col)
    if (mapa[i][j] == 2) {
      bfs(i, j); break;
    }


  // REP(i, lin) {
  //   REP(j, col) printf("%c", mapaCopy[i][j]);
  //   printf("\n");
  // }

  REP(i, lin) REP(j, col) if (mapa[i][j] == 3) printf("%d", dist[i][j] + 1);
}


//g++ "Toca do saci.cpp" -o toca & toca < input.txt
