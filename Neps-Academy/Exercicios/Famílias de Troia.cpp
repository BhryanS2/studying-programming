
#include<bits/stdc++.h>
using namespace std;


int pai[100001], peso[100001], qtd[100001];

int find(int x) {
  if (pai[x] == x) return x;
  return pai[x] = find(pai[x]);
}

bool join(int x, int y) {
  int tempx = x, tempy = y;
  x = find(x);
  y = find(y);
  if (x == y) return false;
  if (peso[x] < peso[y]) {
    swap(x, y);
    // cout << "Trocando " << x << " e " << y << endl;
  }
  pai[y] = x;
  qtd[x] += qtd[y];
  if (peso[x] == peso[y]) {
    peso[x]++;
    // cout << "Aumentando peso de " << x << " para " << peso[x] << endl;
  }
  // cout << "Unindo " << x << " e " << y << endl;
  // cout << "Novo pai de " << tempx << " eh " << pai[tempx] << endl;
  // cout << "Novo pai de " << tempy << " eh " << pai[tempy] << endl;
  // print todas as familias
  // cout << "Familias: ";
  // for (int i = 1; i <= 10; i++) {
  //   cout << find(i) << " ";
  // }
  // cout << endl;
  return true;
}


int main() {
  int n, m;
  cin >> n >> m;
  int numero_de_familias = n;
  for (int i = 1; i <= n; ++i) {
      pai[i] = i;
      peso[i] = 1;
  }

  for (int i = 1; i <= m; i++) {
    int familiar1, familiar2;
    cin >> familiar1 >> familiar2;
    if (join(familiar1, familiar2)) {
      numero_de_familias--;
    }

  }
  cout << numero_de_familias << endl;

}

// g++ "Famílias de Troia.cpp" -o exe;cat input.txt | ./exe
