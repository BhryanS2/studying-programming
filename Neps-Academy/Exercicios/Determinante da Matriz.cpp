/*
Determinante da Matriz
https://neps.academy/br/exercise/322
*/
#include <bits/stdc++.h>
using namespace std;
#define MAX 3

int determinante(int matriz[][MAX], int orden);
int Cofator(int matriz[][MAX], int orden, int EixoX, int EixoY);

int main() {
  int matriz[MAX][MAX];
  int orden = 3;

  for (int i = 0; i < orden; i++) {
    for (int j = 0; j < orden; j++) {
      cin >> matriz[i][j];
    }
  }

  cout << determinante(matriz, orden) << endl;
  return 0;
}

int determinante(int matriz[][MAX], int orden) {
  int det = 0.0;

  if (orden == 1)  det = matriz[0][0];
  else {
    for (int j = 0; j < orden; j++) {
      int cofator = Cofator(matriz, orden, 0, j);
      cout << "cofator i: " << cofator << endl;
      det = det + matriz[0][j] * cofator;
    }
  }

  return det;
}


int Cofator(int matriz[][MAX], int orden, int EixoX, int EixoY) {
  int submatriz[MAX][MAX];
  int n = orden - 1;

  int x = 0;
  int y = 0;
  for (int i = 0; i < orden; i++) {
    for (int j = 0; j < orden; j++) {
      if (i != EixoX && j != EixoY) {
        submatriz[x][y] = matriz[i][j];
        y++;
        if (y >= n) {
          x++;
          y = 0;
        }
      }
    }
  }
  int i = -1;
  if((EixoX+EixoY)%2 == 0){
    i = 1;
  }

  return i * determinante(submatriz, n);
}
