/*
Montanha
Fonte: OBI 2017 - Segunda Fase
https://neps.academy/br/exercise/21
*/
#include <bits/stdc++.h>
using namespace std;

int v[1005];

int main() {
  int m, x;

  cin >> m;


  for (int i = 0; i < m; i++) {
    cin >> x;
    v[i] = x;
  }

  int r = 0;

  for (int i = 0; i < m; i++)
    if (v[i] > v[i - 1] && v[i] > v[i + 1]) r = r + 1;


  if (r > 1) cout << "S";
  else cout << "N";


  return 0;
}
