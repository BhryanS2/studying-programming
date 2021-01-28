/*
https://neps.academy/br/exercise/891
Entrega de Caixas
Fonte: OBI 2020 - Primeira Fase - A
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int x, y, z, cont = 0;
  cin >> x >> y >> z;

  if (x + y < z) cout << 1 << endl;
  else
    if (x == y && x == z) cout << 3 << endl;
    else cout << 2 << endl;
}
