/*
Detectando Colisões
https://neps.academy/br/exercise/310
Fonte: OBI 2007 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int x[2][2], y[2][2];

  cin >> x[0][0] >> y[0][0] >> x[0][1] >> y[0][1];
  cin >> x[1][0] >> y[1][0] >> x[1][1] >> y[1][1];
  if (x[0][1] < x[1][0] || x[1][1] < x[0][0] || y[0][1] < y[1][0] || y[1][1] < y[0][0] || x[0][0] > x[1][1] || x[1][0] > x[0][1] || y[0][0] > y[1][1] || y[1][0] > y[0][1])
    cout << "0\n";
  else cout << "1\n";
  return(0);
}
/*
0 0 6 6
3 3 12 12
*/
