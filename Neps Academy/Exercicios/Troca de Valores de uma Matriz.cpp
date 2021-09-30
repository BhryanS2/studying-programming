/*
Troca de Valores de uma Matriz
https://neps.academy/br/exercise/797
*/
#include <bits/stdc++.h>
using namespace std;

int substituir(int x, int n, int v) {
  return (x == n ? v : x);
}

int main() {
  int n, v, size;
  cin >> size >> n >> v;
  int m[size][size];
  for (int i = 0; i < size; i++)
    for (int j = 0; j < size; j++) {
      cin >> m[i][j];
      m[i][j] = substituir(m[i][j], n, v);
    }

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << m[i][j] << " ";
    }
    cout << endl;
  }
}
