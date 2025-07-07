#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
typedef long long int LLI;
typedef unsigned long long int ULLI;

#define REP(i,n) for (int i=0; i<(n); ++i)
#define FOR(var,pocz,koniec) for (int var=(pocz); var<=(koniec); ++var)
#define FORD(var,pocz,koniec) for (int var=(pocz); var>=(koniec); --var)
#define PB push_back
#define MP(a,b) make_pair(a,b)
#define F first
#define S second

#define MAX 100000000

int main() {
  int n, q;
  cin >> n >> q;
  int matrix[n][n];
  memset(matrix, 0, sizeof(matrix));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      // 00000
      // split dos dados de entrada
      char c;
      cin >> c;
      if (c == '1') {
        matrix[i][j] = 1; // celula viva
      }
      else {
        matrix[i][j] = 0; // celula morta
      }
    }
  }


  // celula viva = 1
  // celula morta = 0
  // proximo estado sera dado por seu numero de vizinhos vivos, ou seja, uma celula pode ter até 8 vizinhos
  // as regras para saber se a celula vai viver ou morrer são:
  // 1. se a celula morta tem 3 vizinhos vivos, ela vai viver
  // 2. se a celula morta tem quantidade vizinhos != de 3 ela continua morta
  // 3. se uma celula viva tem duas ou tres vizinhos vivos, ela continua viva
  // 4. se uma celula viva possui mais de 3 vizinhos vivos, ela morre
  while (q--) {
  int next_matrix[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int vizinhos_vivos = 0;

      for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
          if (dx == 0 && dy == 0) continue;
          int ni = i + dx, nj = j + dy;
          if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
            vizinhos_vivos += matrix[ni][nj];
          }
        }
      }

      if (matrix[i][j] == 1) {
        // viva
        if (vizinhos_vivos == 2 || vizinhos_vivos == 3) {
          next_matrix[i][j] = 1; // continua viva
        } else {
          next_matrix[i][j] = 0; // morre
        }
      } else {
        // morta
        if (vizinhos_vivos == 3) {
          next_matrix[i][j] = 1; // vira viva
        } else {
          next_matrix[i][j] = 0; // continua morta
        }
      }
    }
  }
  memcpy(matrix, next_matrix, sizeof(matrix));
  }

  // imprimindo matriz
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << matrix[i][j];
    }
    cout << endl;
  }
  return 0;
}


//g++ jogo.cpp -o exe;cat input.txt | ./exe
