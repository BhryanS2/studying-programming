/*
https://neps.academy/br/exercise/891
Entrega de Caixas
Fonte: OBI 2020 - Primeira Fase - A
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int x, y, z, cont = 3;
  vector<int> v;
  cin >> x >> y >> z;
  v.push_back(x);
  v.push_back(y);
  v.push_back(z);
  sort(v.begin(), v.end());
  x = v[0], y = v[1], z = v[2];

  // se as caixas tiverem o mesmo tamanho, são três viagens
  if (x == y && x == z) cout << 3 << endl;
  // se couber duas caixas em uma são 1 viagem
  else if (x + y < z || y + z < x || x + z < y) cout << 1 << endl;
  // se couber uma caixa dentro da outra, só uma viagem
  else if(x < y && y < z) cout << 1 << endl;
  // se não for nem uma dessas, são duas viagens
  else cout << 2 << endl;
}
