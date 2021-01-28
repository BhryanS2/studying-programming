/*
Flíper
https://neps.academy/br/exercise/87
Fonte: OBI 2014 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  int p, r;
  cin >> p >> r;

  if (p == 1 && r == 1) cout << "A";
  else if (p == 0) cout << "C";
  else cout << "B";

  return 0;
}
