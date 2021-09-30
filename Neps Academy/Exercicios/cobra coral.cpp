/*
https://neps.academy/br/exercise/72
Cobra Coral
Fonte: OBI 2015 - Primeira Fase
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if ((a == c && b != d && d != a) || (b == d && a != c && c != b)) cout << "V";
  else cout << "F";

  return 0;
}

