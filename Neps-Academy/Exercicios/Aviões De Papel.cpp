/*
https://neps.academy/br/exercise/553
Aviões de Papel
Aviões de Papel
*/

#include <bits/stdc++.h>
using namespace std;

/*
    c = competidores
    p = papel comprado
    f = quantodade de papel por competidor
*/

int main() {
  int c, p, f;
  cin >> c >> p >> f;
  cout << (c * f <= p ? "S" : "N") << endl;
}
